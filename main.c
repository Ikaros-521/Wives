#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface，媒体控制接口)


// 回复函数
void reply(char* say)
{
    // printf("收到:%s\n",say);

    // A
    if(strstr(say, "啊") != NULL)
    {
        if(strcmp(say, "啊？你在说什么") == 0)
        {
            printf("从来没有看到过\n");
            mciSendString("play sound\\1-12\\从来没有看到过.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            printf("从前，一直，没看到，妮姆芙，笑过\n");
            mciSendString("play sound\\1-12\\从前，一直，没看到，妮姆芙，笑过.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠11秒
            Sleep(11000);
            return;
        }
        else if(strcmp(say, "啊，焦成一团黑了") == 0)
        {
            printf("对不起\n");
            mciSendString("play sound\\1-13\\对不起.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "啊嘞，大家呢") == 0)
        {
            printf("泳池被禁止使用，去换衣服了\n");
            mciSendString("play sound\\1-14\\泳池被禁止使用，去换衣服了.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.6秒
            Sleep(3600);
            return;
        }
    }

    // B
    if(strstr(say, "把") != NULL)
    {
        if(strcmp(say, "把西瓜带回来了吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "不") != NULL)
    {
        if(strcmp(say, "不觉得麻烦吗") == 0)
        {
            printf("不，没事的\n");
            mciSendString("play sound\\1-2\\不，没事的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "不会的是吧") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "不要太在意") == 0)
        {
            printf("好的\n");
            mciSendString("play sound\\1-5\\好的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "不能勉强说谎哦") == 0)
        {
            printf("说谎不行吗\n");
            mciSendString("play sound\\1-11\\说谎不行吗.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "拜托") != NULL)
    {
        if(strcmp(say, "拜托你了，伊卡洛斯，救救妮姆芙") == 0)
        {
            printf("type阿尔法，伊卡洛斯，出击\n");
            mciSendString("play sound\\1-13\\type阿尔法，伊卡洛斯，出击.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠4秒
            Sleep(4000);
            return;
        }
    }

    // C
    if(strstr(say, "楚原") != NULL)
    {
        if(strcmp(say, "楚原呢") == 0)
        {
            printf("在家里面\n");
            mciSendString("play sound\\1-4\\在家里面.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "才") != NULL)
    {
        if(strcmp(say, "才不是") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-6\\是2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "差") != NULL)
    {
        if(strcmp(say, "差不多该回去了") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-6\\是4.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }


    if(strcmp(say, "赤色的花，白色的花") == 0)
    {
        printf("赤色的花，白色的花\n");
        mciSendString("play sound\\1-12\\赤色的花，白色的花.mp3",        //MCI命令字符串
            NULL,                                //存放反馈信息的缓冲区
            0,                                    //缓冲区的长度
            NULL);                                //回调窗体的句柄，一般为NULL
        // 睡眠91秒
        Sleep(91000);
        return;
    }


    // D
    if(strstr(say, "都") != NULL)
    {
        if(strcmp(say, "都是伊卡洛斯的功劳呢") == 0)
        {
            printf("不，是因为大家的演奏，我才能唱的\n");
            mciSendString("play sound\\1-10\\不，是因为大家的演奏，我才能唱的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6秒
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "对") != NULL)
    {
        if(strcmp(say, "对，只要表情就行") == 0)
        {
            printf("这样如何，主人\n");
            mciSendString("play sound\\1-12\\这样如何，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2.2秒
            Sleep(2200);
            return;
        }
    }

    if(strstr(say, "打") != NULL)
    {
        if(strcmp(say, "打电话拜托在买东西的智树这样的话") == 0)
        {
            printf("不用，但是\n");
            mciSendString("play sound\\1-13\\不用，但是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.6秒
            Sleep(1600);
            return;
        }
    }

    if(strstr(say, "多") != NULL)
    {
        if(strcmp(say, "多亏了你，现在可以拯救朋友了") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-13\\是，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.8秒
            Sleep(1800);
            return;
        }
    }

    // E

    // F
    if(strstr(say, "放") != NULL)
    {
        if(strcmp(say, "放开我的手") == 0)
        {
            printf("没事的，人的背后有看不见的，很大的翅膀。在那其中，主人有很大的翅膀，我知道的，不知道怎么说，但我知道...主人被天空召唤着\n");
            mciSendString("play sound\\1-7\\没事的，人的背后有看不见的，很大的翅膀.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠32秒
            Sleep(32000);
            return;
        }
    }

    if(strcmp(say, "fallen down") == 0 || strcmp(say, "FALLEN DOWN") == 0)
    {
        printf("曲名为：《fallen down》\n");
        mciSendString("play sound\\1-10\\fallen_down.mp3",        //MCI命令字符串
            NULL,                                //存放反馈信息的缓冲区
            0,                                    //缓冲区的长度
            NULL);                                //回调窗体的句柄，一般为NULL
        // 睡眠87秒
        Sleep(87000);
        return;
    }


    // G
    if(strstr(say, "命令") != NULL)
    {
        if(strcmp(say, "刚才的命令不算好吗") == 0)
        {
            printf("无法中止命令\n");
            mciSendString("play sound\\1-1\\无法中止命令.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    // H
    if(strstr(say, "还") != NULL)
    {
        if(strcmp(say, "还需要练习呢") == 0)
        {
            printf("对不起\n");
            mciSendString("play sound\\1-3\\对不起.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "好") != NULL)
    {
        if(strcmp(say, "好，今天已经睡醒了") == 0)
        {
            printf("诶\n");
            mciSendString("play sound\\1-6\\诶.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "话") != NULL)
    {
        if(strcmp(say, "话先说在前头，你们两个千万不要来学校哦") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-7\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    // I

    // J
    if(strstr(say, "脚") != NULL)
    {
        if(strcmp(say, "脚踢起来，我牵着你的手呢") == 0)
        {
            printf("这样吗，主人\n");
            mciSendString("play sound\\1-6\\这样吗，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "尽") != NULL)
    {
        if(strcmp(say, "尽情地舒展一下翅膀吧") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-6\\是3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    // K
    if(strstr(say, "卡片") != NULL)
    {
        if(strcmp(say, "卡片是什么") == 0)
        {
            printf("（解释）\n");
            mciSendString("play sound\\1-1\\-对卡片的解释.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠9.5秒
            Sleep(9500);
            return;
        }
        else if(strcmp(say, "卡片还能做什么") == 0)
        {
            printf("什么都可以\n");
            mciSendString("play sound\\1-1\\什么都可以.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "快") != NULL)
    {
        if(strcmp(say, "快点回去睡觉") == 0)
        {
            printf("那个，主人，睡觉是怎么一回事。我们人造天使没有被设定睡觉这一功能，所以不知道睡觉、做梦是怎么一回事\n");
            mciSendString("play sound\\1-6\\那个，主人，睡觉是怎么一回事.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠17秒
            Sleep(17000);
            return;
        }
    }

    if(strstr(say, "可") != NULL)
    {
        if(strcmp(say, "可能会抢走智树也没关系吗") == 0)
        {
            printf("没事的，不管发生什么，主人还是我的主人，从今往后一直都是\n");
            mciSendString("play sound\\1-14\\没事的，不管发生什么，主人还是我的主人，从今往后一直都是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠7.4秒
            Sleep(7400);
            return;
        }
    }

    // L

    // M
    if(strstr(say, "没") != NULL)
    {
        if(strcmp(say, "没事吧，怎么伤痕累累的") == 0)
        {
            printf("没事的\n");
            mciSendString("play sound\\1-8\\没事的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "马上") != NULL)
    {
        if(strcmp(say, "马上正式比赛了，多练习一下") == 0)
        {
            printf("对不起，主人\n");
            mciSendString("play sound\\1-10\\对不起，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "嘛") != NULL)
    {
        if(strcmp(say, "嘛，笑一下很简单的事情") == 0)
        {
            printf("不简单，因为，我从没见过，妮姆芙你笑过\n");
            mciSendString("play sound\\1-12\\不简单，因为，我从没见过，妮姆芙你笑过.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠10秒
            Sleep(10000);
            return;
        }
    }

    // N
    if(strstr(say, "那") != NULL)
    {
        if(strcmp(say, "那我出门了") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-2\\好的-主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "那么，伊卡洛斯，笔直回家，好吗") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-2\\好的，主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "那当然是因为开心咯") == 0)
        {
            printf("开心？开心\n");
            mciSendString("play sound\\1-3\\开心？开心.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5.5秒
            Sleep(5500);
            return;
        }
        else if(strcmp(say, "那么，走吧，伊卡洛斯") == 0)
        {
            printf("但是，主人他。。。\n");
            mciSendString("play sound\\1-4\\但是，主人他.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2.5秒
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "那个，伊卡洛斯") == 0)
        {
            printf("在的，主人\n");
            mciSendString("play sound\\1-5\\在的，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "那你在我睡觉的时候都在干什么呢") == 0)
        {
            printf("一直在主人身旁，在主人睡醒前，一直\n");
            mciSendString("play sound\\1-6\\一直在主人身旁，在主人睡醒前，一直.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6秒
            Sleep(6000);
            return;
        }
        else if(strcmp(say, "那我出门了，看家拜托了") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-7\\是，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "那我出发了") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-7\\是，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "那这样的事，不要做第二次了") == 0)
        {
            printf("诶？\n");
            mciSendString("play sound\\1-8\\诶？.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "那么，伊卡洛斯，把带着的卡片全部交出来") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-11\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "那么，阿尔法，稍微会笑一点了吗") == 0)
        {
            printf("不，还没有\n");
            mciSendString("play sound\\1-12\\不，还没有.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "那一起想办法吧，如何才能让我们人造天使笑，呐") == 0)
        {
            printf("恩\n");
            mciSendString("play sound\\1-12\\恩.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
        else if(strcmp(say, "那样的人生来就是杀人的道具，太过分了") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-13\\是3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        
    }

    if(strstr(say, "你") != NULL)
    {
        if(strcmp(say, "你是怎么去亚马逊的") == 0)
        {
            printf("我是以24马赫的速度飞过去的\n");
            mciSendString("play sound\\1-3\\我是以24马赫的速度飞过去的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "你在干什么，伊卡洛斯") == 0)
        {
            printf("这是作业death\n");
            mciSendString("play sound\\1-3\\这是作业.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "你怎么在这") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-6\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "你一直珍惜的西瓜，大概里面早就烂掉了，一团糟了呢") == 0)
        {
            printf("啊\n");
            mciSendString("play sound\\1-6\\啊.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "你还是这样子好") == 0)
        {
            printf("嗯？\n");
            mciSendString("play sound\\1-6\\嗯？.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "你是知道没事的，才帮我挡子弹的吗") == 0)
        {
            printf("不，没想到自己也\n");
            mciSendString("play sound\\1-8\\不，没想到自己也.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2.5秒
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "你是什么") == 0)
        {
            printf("我是，人类death\n");
            mciSendString("play sound\\1-9\\我是，人类.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2.5秒
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "你在做什么") == 0)
        {
            printf("妮姆芙，这里的天空很广阔哦\n");
            mciSendString("play sound\\1-10\\妮姆芙，这里的天空很广阔哦.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "你是战斗特化的天使，没有那方面的机能吧") == 0)
        {
            printf("是因为我是战斗用的原因\n");
            mciSendString("play sound\\1-12\\是因为我是战斗用的原因.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "你要去哪里，伊卡洛斯") == 0)
        {
            printf("就是，那个，去买个东西\n");
            mciSendString("play sound\\1-13\\就是，那个，去买个东西.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "你刚才笑了一下吧") == 0)
        {
            printf("诶\n");
            mciSendString("play sound\\1-13\\诶.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "呐") != NULL)
    {
        if(strcmp(say, "呐，伊卡洛斯") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-6\\是5.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "呐，伊卡洛斯，我们约定过不说谎的吧") == 0)
        {
            printf("呵嗯\n");
            mciSendString("play sound\\1-13\\呵嗯.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
        else if(strcmp(say, "呐，伊卡洛斯，我讨厌兵器是因为我觉得你太可怜了") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-13\\是2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "妮姆芙") != NULL)
    {
        if(strcmp(say, "妮姆芙为什么回来了") == 0)
        {
            printf("我什么也不知道\n");
            mciSendString("play sound\\1-9\\我什么也不知道.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2.5秒
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "妮姆芙呢") == 0)
        {
            printf("这个\n");
            mciSendString("play sound\\1-13\\这个.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "妮姆芙又没有回来吗") == 0)
        {
            printf("是的，昨天一晚上没回来\n");
            mciSendString("play sound\\1-13\\是的，昨天一晚上没回来.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "n") != NULL)
    {
        if(strcmp(say, "nico") == 0)
        {
            printf("ni a li\n");
            mciSendString("play sound\\1-12\\niali.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    // O

    // P
    if(strstr(say, "胖次") != NULL)
    {
        if(strcmp(say, "胖次嘎") == 0)
        {
            printf("胖次是吗，那么把半径xxkm内的胖次全部收集起来\n");
            mciSendString("play sound\\1-2\\胖次是吗。。。.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5秒
            Sleep(5000);
            return;
        }
    }

    if(strstr(say, "普通") != NULL)
    {
        if(strcmp(say, "普通人会飞着去买东西吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-3\\是的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "骗") != NULL)
    {
        if(strcmp(say, "骗了你很抱歉，其实我想要把你带回天上") == 0)
        {
            printf("我知道\n");
            mciSendString("play sound\\1-13\\我知道.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    // Q

    // R
    if(strstr(say, "人") != NULL)
    {
        if(strcmp(say, "人类都有一两个秘密，不是吗") == 0)
        {
            printf("主人！\n");
            mciSendString("play sound\\1-11\\主人！.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "如") != NULL)
    {
        if(strcmp(say, "如果可以逃走的话，智树会感到高兴的吧") == 0)
        {
            printf("主人，他会，感到高兴\n");
            mciSendString("play sound\\1-12\\主人，他会，感到高兴.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6.5秒
            Sleep(6500);
            return;
        }
    }

    // S
    if(strstr(say, "可") != NULL)
    {
        if(strcmp(say, "什么都可以吗") == 0)
        {
            printf("是的\n");
            mciSendString("play sound\\1-1\\是的.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "算") != NULL)
    {
        if(strcmp(say, "算了，你们两个明天也来学校，知道了吗，就是这么回事") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-7\\是，主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "是") != NULL)
    {
        if(strcmp(say, "是这样吗，伊卡洛斯") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-9\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    // W
    if(strstr(say, "晚安") != NULL)
    {
        if(strcmp(say, "晚安") == 0)
        {
            printf("晚安，我的主人\n");
            return;
        }
    }

    if(strstr(say, "为") != NULL)
    {
        if(strcmp(say, "为什么你在这") == 0)
        {
            printf("班上的朋友怎么都拜托我帮忙\n");
            mciSendString("play sound\\1-10\\班上的朋友怎么都拜托我帮忙.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "为什么这些动物被关在笼子里呢") == 0)
        {
            printf("sa（谁知道呢）\n");
            mciSendString("play sound\\1-12\\谁知道呢.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "我") != NULL)
    {
        if(strcmp(say, "我一直把伊卡洛斯当成普通的人类，忘记你是人造天使的事情了") == 0)
        {
            printf("我很高兴，楚原把我当普通人来对待\n");
            mciSendString("play sound\\1-11\\我很高兴，楚原把我当普通人来对待.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6秒
            Sleep(6000);
            return;
        }
        else if(strcmp(say, "我们人造天使，可能从来没有发自内心的笑过吧") == 0)
        {
            printf("并且最近，一直在为什么烦恼的样子\n");
            mciSendString("play sound\\1-12\\并且最近，一直在为什么烦恼的样子.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6.5秒
            Sleep(6500);
            printf("那是为什么，我也不清楚\n");
            mciSendString("play sound\\1-12\\那是为什么，我也不清楚.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6秒
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "喂") != NULL)
    {
        if(strcmp(say, "喂，伊卡洛斯") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-12\\是，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            printf("早上好，主人\n");
            mciSendString("play sound\\1-12\\早上好，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5.2秒
            Sleep(5200);
            return;
        }
    }

    // X
    if(strstr(say, "先") != NULL)
    {
        if(strcmp(say, "先把要买什么听了再说") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的，主人3.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    // Y
    if(strstr(say, "要") != NULL)
    {
        if(strcmp(say, "要像普通人一样哦") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的,主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "伊卡洛斯") != NULL)
    {
        if(strcmp(say, "伊卡洛斯，你先回去，乖乖看家，知道了吗") == 0)
        {
            printf("那主人，这个给你\n");
            mciSendString("play sound\\1-2\\那主人，这个给你.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯，你过去看看吧") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-3\\好的，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯，要不要尝试一下数学题") == 0)
        {
            printf("我吗\n");
            mciSendString("play sound\\1-3\\我吗.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯，背后的翅膀怎么了") == 0)
        {
            printf("那个，这个翅膀是可变式羽翼，可以缩小到这种程度的大小\n");
            mciSendString("play sound\\1-3\\我吗.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠8秒
            Sleep(8000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯！") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-8\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯，你试试万岁看看") == 0)
        {
            printf("万岁是吗\n");
            mciSendString("play sound\\1-12\\万岁是吗.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "伊卡洛斯，不用那么快，停，停") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-13\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "已经") != NULL)
    {
        if(strcmp(say, "已经没你事了，乖乖待着") == 0)
        {
            printf("是，主人\n");
            mciSendString("play sound\\1-8\\是,主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "有") != NULL)
    {
        if(strcmp(say, "有什么隐情吗") == 0)
        {
            printf("人类是说谎的生物，我是普通的人类death\n");
            mciSendString("play sound\\1-9\\人类是说谎的生物，我是普通的人类.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠6秒
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "约") != NULL)
    {
        if(strcmp(say, "约会呢，回到家，才算约会") == 0)
        {
            printf("是\n");
            mciSendString("play sound\\1-12\\是.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "又") != NULL)
    {
        if(strcmp(say, "又是那个奇怪的梦嘎") == 0)
        {
            printf("你醒了吗，主人\n");
            mciSendString("play sound\\1-13\\你醒了吗，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
    }

    // Z
    if(strstr(say, "在") != NULL)
    {
        if(strcmp(say, "在旁边的海里随便捡点海货过来吧") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-2\\好的，主人2.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "早") != NULL)
    {
        if(strcmp(say, "早上好") == 0)
        {
            printf("早上好，主人\n");
            mciSendString("play sound\\1-1\\早上好,主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "怎么") != NULL)
    {
        if(strcmp(say, "怎么了") == 0)
        {
            int flag = 0;
            if(flag == 0)
            {
                printf("主人遇到麻烦了\n");
                    mciSendString("play sound\\1-4\\主人遇到麻烦了.mp3",        //MCI命令字符串
                    NULL,                                //存放反馈信息的缓冲区
                    0,                                    //缓冲区的长度
                    NULL);                                //回调窗体的句柄，一般为NULL
                // 睡眠3秒
                Sleep(3000);
                return;
            }
            else if(flag == 1)
            {
                printf("没什么\n");
                    mciSendString("play sound\\1-10\\没什么.mp3",        //MCI命令字符串
                    NULL,                                //存放反馈信息的缓冲区
                    0,                                    //缓冲区的长度
                    NULL);                                //回调窗体的句柄，一般为NULL
                // 睡眠1秒
                Sleep(1000);
                return;
            }
            
        }
        else if(strcmp(say, "怎么了，没什么精神呢") == 0)
        {
            printf("我一点都帮不上主人的忙\n");
            mciSendString("play sound\\1-10\\我一点都帮不上主人的忙.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠4秒
            Sleep(4000);
            return;
        }
        else if(strcmp(say, "怎么样，这套内衣") == 0)
        {
            printf("非常可爱哦，主人\n");
            mciSendString("play sound\\1-11\\非常可爱哦，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "怎么了，伊卡洛斯") == 0)
        {
            printf("没什么\n");
            mciSendString("play sound\\1-13\\没什么.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.6秒
            Sleep(600);
            return;
        }
        else if(strcmp(say, "怎么了，伊卡洛斯，又是不好的玩笑是吗") == 0)
        {
            printf("最喜欢你了，我的主人，永别了\n");
            mciSendString("play sound\\1-13\\最喜欢你了，我的主人，永别了.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠15.5秒
            Sleep(15500);
            return;
        }
        else if(strcmp(say, "怎么样，伊卡洛斯") == 0)
        {
            printf("太好了\n");
            mciSendString("play sound\\1-13\\太好了.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "这") != NULL)
    {
        if(strcmp(say, "这个锁链如何是好") == 0)
        {
            printf("那个，锁链可以自由控制...\n");
            mciSendString("play sound\\1-2\\锁链的应对措施.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5.5秒
            Sleep(5500);
            return;
        }
        else if(strcmp(say, "这就解决了吗") == 0)
        {
            printf("是的，这张卡片自动结束了，已经没事了death\n");
            mciSendString("play sound\\1-2\\是的，这张卡片自动结束了，已经没事了.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠5秒
            Sleep(5000);
            return;
        }
        else if(strcmp(say, "这才是正式表演，伊卡洛斯") == 0)
        {
            printf("曲名为：《fallen down》\n");
            mciSendString("play sound\\1-10\\fallen_down.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠87秒
            Sleep(87000);
            return;
        }
        else if(strcmp(say, "这些孩子们从这里出去，变得自由后，会不会感觉到开心呢") == 0)
        {
            printf("诶\n");
            mciSendString("play sound\\1-12\\诶.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.5秒
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "至今") != NULL)
    {
        if(strcmp(say, "至今为止没和朋友去购过物吗") == 0)
        {
            printf("朋友？我没有朋友\n");
            mciSendString("play sound\\1-4\\朋友？我没有朋友.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3秒
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "走") != NULL)
    {
        if(strcmp(say, "走吧，伊卡洛斯") == 0)
        {
            printf("好的，主人\n");
            mciSendString("play sound\\1-5\\好的，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "做") != NULL)
    {
        if(strcmp(say, "做这种事，不会被人当成傻瓜吗") == 0)
        {
            printf("这是主人的命令呢\n");
            mciSendString("play sound\\1-11\\这是主人的命令呢.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠2秒
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "做这种事，不觉得很傻吗") == 0)
        {
            printf("这是主人的命令\n");
            mciSendString("play sound\\1-14\\这是主人的命令.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "真") != NULL)
    {
        if(strcmp(say, "真羡慕你呢，没有什么烦恼") == 0)
        {
            printf("没那回事\n");
            mciSendString("play sound\\1-11\\没那回事.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "只") != NULL)
    {
        if(strcmp(say, "只有表情也行，笑一个") == 0)
        {
            printf("只要表情？\n");
            mciSendString("play sound\\1-12\\只要表情？.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1秒
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "自") != NULL)
    {
        if(strcmp(say, "自顾自走掉，伤痕累累回来") == 0)
        {
            printf("对不起，主人\n");
            mciSendString("play sound\\1-12\\对不起，主人.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠1.5秒
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "再") != NULL)
    {
        if(strcmp(say, "再试一次") == 0)
        {
            printf("ni a li\n");
            mciSendString("play sound\\1-13\\niali.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠0.7秒
            Sleep(700);
            return;
        }
    }

    // #
    if(strstr(say, "（") != NULL)
    {
        if(strcmp(say, "（笑）") == 0)
        {
            printf("主人为什么在笑呢\n");
            mciSendString("play sound\\1-3\\主人为什么在笑呢.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠3.5秒
            Sleep(3500);
            return;
        }
        if(strcmp(say, "（和妮姆芙牵手）") == 0)
        {
            printf("扫描系统开始，@#*￥*&@，身体构造没有异常，动力炉没有异常，￥@*，刚才那是什么，动力炉在一瞬间，感觉到疼痛\n");
            mciSendString("play sound\\1-12\\（看见主人和妮姆芙牵手）.mp3",        //MCI命令字符串
                NULL,                                //存放反馈信息的缓冲区
                0,                                    //缓冲区的长度
                NULL);                                //回调窗体的句柄，一般为NULL
            // 睡眠22.5秒
            Sleep(22500);
            return;
        }
    }

    

    
}

// 主函数
int main()
{
    // 最多输入4096字节
    static char str[4096] = {};

    // 程序刚启动的开场语音
    printf("铭刻开始\n");
     mciSendString("play sound\\1-1\\铭刻开始.mp3", NULL, 0, NULL);
    // 睡眠2.2秒
    Sleep(2200);

    printf("初次见面,我是玩赏用人造天使,能满足你任何开心的事情，My Master\n");
    mciSendString("play sound\\1-1\\初次见面,我是玩赏用人造天使.mp3", NULL, 0, NULL);
    // 睡眠9.5秒
    Sleep(9500);

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
