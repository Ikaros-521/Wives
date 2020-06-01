#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface，媒体控制接口)

#define MAX_LINE 1024

// 问答结构体
typedef struct Q_A
{
    char question[400];
    char answer[400];
}Q_A;

Q_A *q_a;
int cur_line = 0;

// 本地文件加载
void load_data()
{
    q_a = (Q_A*)calloc(MAX_LINE, sizeof(Q_A));
    FILE* fp = fopen("Q_A.txt", "r");
    for(int i=0; i<MAX_LINE; i++)
    {
        int size = fscanf(fp, "%s %s\n", q_a[i].question, q_a[i].answer);
        if(size == -1)
        {
            break;
        }
        cur_line++;
        printf("%s %s\n", q_a[i].question, q_a[i].answer);
    }
}

// 回复函数
void reply(char* say)
{
    char buf[1024] = {};
    for(int i=0; i<cur_line; i++)
    {
        if(strcmp(q_a[i].question, say) == 0)
        {
            sprintf(buf, "play %s", q_a[i].answer);
            mciSendString(buf,        //MCI命令字符串
                NULL,                        //存放反馈信息的缓冲区
                0,                           //缓冲区的长度
                NULL);                       //回调窗体的句柄，一般为NULL
            break;
        }
        else
        {
            continue;
        }
        
    }
    
}

int main(void)
{
    load_data();
    // 最多输入4096字节
    static char str[4096] = {};

    while(1)
    {
        // 我说
        printf("我说:");
        gets(str);
        // printf("发送:%s\n",str);

        // 调用 reply函数
        reply(str);

        // 判断和清空
        if(strcmp(str,"晚安") == 0)
        {
            break;
        }
        sprintf(str, "");

    }
    return 0;
}
