#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")            //For MCI(Media Control Interface��ý����ƽӿ�)


// �ظ�����
void reply(char* say)
{
    // printf("�յ�:%s\n",say);

    // A
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��������˵ʲô") == 0)
        {
            printf("����û�п�����\n");
            mciSendString("play sound\\1-12\\����û�п�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            printf("��ǰ��һֱ��û��������ķܽ��Ц��\n");
            mciSendString("play sound\\1-12\\��ǰ��һֱ��û��������ķܽ��Ц��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��11��
            Sleep(11000);
            return;
        }
        else if(strcmp(say, "��������һ�ź���") == 0)
        {
            printf("�Բ���\n");
            mciSendString("play sound\\1-13\\�Բ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "���ϣ������") == 0)
        {
            printf("Ӿ�ر���ֹʹ�ã�ȥ���·���\n");
            mciSendString("play sound\\1-14\\Ӿ�ر���ֹʹ�ã�ȥ���·���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.6��
            Sleep(3600);
            return;
        }
    }

    // B
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�����ϴ���������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�������鷳��") == 0)
        {
            printf("����û�µ�\n");
            mciSendString("play sound\\1-2\\����û�µ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "������ǰ�") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "��Ҫ̫����") == 0)
        {
            printf("�õ�\n");
            mciSendString("play sound\\1-5\\�õ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "������ǿ˵��Ŷ") == 0)
        {
            printf("˵�Ѳ�����\n");
            mciSendString("play sound\\1-11\\˵�Ѳ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "�������ˣ�������˹���Ⱦ���ķܽ") == 0)
        {
            printf("type��������������˹������\n");
            mciSendString("play sound\\1-13\\type��������������˹������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��4��
            Sleep(4000);
            return;
        }
    }

    // C
    if(strstr(say, "��ԭ") != NULL)
    {
        if(strcmp(say, "��ԭ��") == 0)
        {
            printf("�ڼ�����\n");
            mciSendString("play sound\\1-4\\�ڼ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Ų���") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���û�ȥ��") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��4.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }


    if(strcmp(say, "��ɫ�Ļ�����ɫ�Ļ�") == 0)
    {
        printf("��ɫ�Ļ�����ɫ�Ļ�\n");
        mciSendString("play sound\\1-12\\��ɫ�Ļ�����ɫ�Ļ�.mp3",        //MCI�����ַ���
            NULL,                                //��ŷ�����Ϣ�Ļ�����
            0,                                    //�������ĳ���
            NULL);                                //�ص�����ľ����һ��ΪNULL
        // ˯��91��
        Sleep(91000);
        return;
    }


    // D
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����������˹�Ĺ�����") == 0)
        {
            printf("��������Ϊ��ҵ����࣬�Ҳ��ܳ���\n");
            mciSendString("play sound\\1-10\\��������Ϊ��ҵ����࣬�Ҳ��ܳ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ԣ�ֻҪ�������") == 0)
        {
            printf("������Σ�����\n");
            mciSendString("play sound\\1-12\\������Σ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.2��
            Sleep(2200);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��绰���������������������Ļ�") == 0)
        {
            printf("���ã�����\n");
            mciSendString("play sound\\1-13\\���ã�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.6��
            Sleep(1600);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "������㣬���ڿ�������������") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-13\\�ǣ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.8��
            Sleep(1800);
            return;
        }
    }

    // E

    // F
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ſ��ҵ���") == 0)
        {
            printf("û�µģ��˵ı����п������ģ��ܴ�ĳ���������У������кܴ�ĳ����֪���ģ���֪����ô˵������֪��...���˱�����ٻ���\n");
            mciSendString("play sound\\1-7\\û�µģ��˵ı����п������ģ��ܴ�ĳ��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��32��
            Sleep(32000);
            return;
        }
    }

    if(strcmp(say, "fallen down") == 0 || strcmp(say, "FALLEN DOWN") == 0)
    {
        printf("����Ϊ����fallen down��\n");
        mciSendString("play sound\\1-10\\fallen_down.mp3",        //MCI�����ַ���
            NULL,                                //��ŷ�����Ϣ�Ļ�����
            0,                                    //�������ĳ���
            NULL);                                //�ص�����ľ����һ��ΪNULL
        // ˯��87��
        Sleep(87000);
        return;
    }


    // G
    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "�ղŵ���������") == 0)
        {
            printf("�޷���ֹ����\n");
            mciSendString("play sound\\1-1\\�޷���ֹ����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    // H
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����Ҫ��ϰ��") == 0)
        {
            printf("�Բ���\n");
            mciSendString("play sound\\1-3\\�Բ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ã������Ѿ�˯����") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����˵��ǰͷ����������ǧ��Ҫ��ѧУŶ") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-7\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // I

    // J
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "������������ǣ���������") == 0)
        {
            printf("����������\n");
            mciSendString("play sound\\1-6\\����������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�������չһ�³���") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // K
    if(strstr(say, "��Ƭ") != NULL)
    {
        if(strcmp(say, "��Ƭ��ʲô") == 0)
        {
            printf("�����ͣ�\n");
            mciSendString("play sound\\1-1\\-�Կ�Ƭ�Ľ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��9.5��
            Sleep(9500);
            return;
        }
        else if(strcmp(say, "��Ƭ������ʲô") == 0)
        {
            printf("ʲô������\n");
            mciSendString("play sound\\1-1\\ʲô������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����ȥ˯��") == 0)
        {
            printf("�Ǹ������ˣ�˯������ôһ���¡�����������ʹû�б��趨˯����һ���ܣ����Բ�֪��˯������������ôһ����\n");
            mciSendString("play sound\\1-6\\�Ǹ������ˣ�˯������ôһ����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��17��
            Sleep(17000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���ܻ���������Ҳû��ϵ��") == 0)
        {
            printf("û�µģ����ܷ���ʲô�����˻����ҵ����ˣ��ӽ�����һֱ����\n");
            mciSendString("play sound\\1-14\\û�µģ����ܷ���ʲô�����˻����ҵ����ˣ��ӽ�����һֱ����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��7.4��
            Sleep(7400);
            return;
        }
    }

    // L

    // M
    if(strstr(say, "û") != NULL)
    {
        if(strcmp(say, "û�°ɣ���ô�˺����۵�") == 0)
        {
            printf("û�µ�\n");
            mciSendString("play sound\\1-8\\û�µ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "������ʽ�����ˣ�����ϰһ��") == 0)
        {
            printf("�Բ�������\n");
            mciSendString("play sound\\1-10\\�Բ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Цһ�ºܼ򵥵�����") == 0)
        {
            printf("���򵥣���Ϊ���Ҵ�û��������ķܽ��Ц��\n");
            mciSendString("play sound\\1-12\\���򵥣���Ϊ���Ҵ�û��������ķܽ��Ц��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��10��
            Sleep(10000);
            return;
        }
    }

    // N
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���ҳ�����") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õ�-����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "��ô��������˹����ֱ�ؼң�����") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õģ�����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "�ǵ�Ȼ����Ϊ���Ŀ�") == 0)
        {
            printf("���ģ�����\n");
            mciSendString("play sound\\1-3\\���ģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5.5��
            Sleep(5500);
            return;
        }
        else if(strcmp(say, "��ô���߰ɣ�������˹") == 0)
        {
            printf("���ǣ�������������\n");
            mciSendString("play sound\\1-4\\���ǣ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.5��
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "�Ǹ���������˹") == 0)
        {
            printf("�ڵģ�����\n");
            mciSendString("play sound\\1-5\\�ڵģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
        else if(strcmp(say, "��������˯����ʱ���ڸ�ʲô��") == 0)
        {
            printf("һֱ���������ԣ�������˯��ǰ��һֱ\n");
            mciSendString("play sound\\1-6\\һֱ���������ԣ�������˯��ǰ��һֱ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
        else if(strcmp(say, "���ҳ����ˣ����Ұ�����") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-7\\�ǣ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "���ҳ�����") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-7\\�ǣ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "���������£���Ҫ���ڶ�����") == 0)
        {
            printf("����\n");
            mciSendString("play sound\\1-8\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "��ô��������˹���Ѵ��ŵĿ�Ƭȫ��������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-11\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "��ô������������΢��Цһ������") == 0)
        {
            printf("������û��\n");
            mciSendString("play sound\\1-12\\������û��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "��һ����취�ɣ���β���������������ʹЦ����") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-12\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
        else if(strcmp(say, "����������������ɱ�˵ĵ��ߣ�̫������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-13\\��3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "������ôȥ����ѷ��") == 0)
        {
            printf("������24��յ��ٶȷɹ�ȥ��\n");
            mciSendString("play sound\\1-3\\������24��յ��ٶȷɹ�ȥ��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "���ڸ�ʲô��������˹") == 0)
        {
            printf("������ҵdeath\n");
            mciSendString("play sound\\1-3\\������ҵ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "����ô����") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "��һֱ��ϧ�����ϣ������������õ��ˣ�һ��������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "�㻹�������Ӻ�") == 0)
        {
            printf("�ţ�\n");
            mciSendString("play sound\\1-6\\�ţ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "����֪��û�µģ��Ű��ҵ��ӵ�����") == 0)
        {
            printf("����û�뵽�Լ�Ҳ\n");
            mciSendString("play sound\\1-8\\����û�뵽�Լ�Ҳ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.5��
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "����ʲô") == 0)
        {
            printf("���ǣ�����death\n");
            mciSendString("play sound\\1-9\\���ǣ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.5��
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "������ʲô") == 0)
        {
            printf("��ķܽ���������պܹ���Ŷ\n");
            mciSendString("play sound\\1-10\\��ķܽ���������պܹ���Ŷ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "����ս���ػ�����ʹ��û���Ƿ���Ļ��ܰ�") == 0)
        {
            printf("����Ϊ����ս���õ�ԭ��\n");
            mciSendString("play sound\\1-12\\����Ϊ����ս���õ�ԭ��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "��Ҫȥ���������˹") == 0)
        {
            printf("���ǣ��Ǹ���ȥ�������\n");
            mciSendString("play sound\\1-13\\���ǣ��Ǹ���ȥ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "��ղ�Ц��һ�°�") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-13\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�ţ�������˹") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-6\\��5.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "�ţ�������˹������Լ������˵�ѵİ�") == 0)
        {
            printf("����\n");
            mciSendString("play sound\\1-13\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
        else if(strcmp(say, "�ţ�������˹���������������Ϊ�Ҿ�����̫������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-13\\��2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "��ķܽ") != NULL)
    {
        if(strcmp(say, "��ķܽΪʲô������") == 0)
        {
            printf("��ʲôҲ��֪��\n");
            mciSendString("play sound\\1-9\\��ʲôҲ��֪��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2.5��
            Sleep(2500);
            return;
        }
        else if(strcmp(say, "��ķܽ��") == 0)
        {
            printf("���\n");
            mciSendString("play sound\\1-13\\���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "��ķܽ��û�л�����") == 0)
        {
            printf("�ǵģ�����һ����û����\n");
            mciSendString("play sound\\1-13\\�ǵģ�����һ����û����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "n") != NULL)
    {
        if(strcmp(say, "nico") == 0)
        {
            printf("ni a li\n");
            mciSendString("play sound\\1-12\\niali.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // O

    // P
    if(strstr(say, "�ִ�") != NULL)
    {
        if(strcmp(say, "�ִθ�") == 0)
        {
            printf("�ִ�������ô�Ѱ뾶xxkm�ڵ��ִ�ȫ���ռ�����\n");
            mciSendString("play sound\\1-2\\�ִ����𡣡���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5��
            Sleep(5000);
            return;
        }
    }

    if(strstr(say, "��ͨ") != NULL)
    {
        if(strcmp(say, "��ͨ�˻����ȥ������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-3\\�ǵ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "ƭ") != NULL)
    {
        if(strcmp(say, "ƭ����ܱ�Ǹ����ʵ����Ҫ�����������") == 0)
        {
            printf("��֪��\n");
            mciSendString("play sound\\1-13\\��֪��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // Q

    // R
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���඼��һ�������ܣ�������") == 0)
        {
            printf("���ˣ�\n");
            mciSendString("play sound\\1-11\\���ˣ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����������ߵĻ���������е����˵İ�") == 0)
        {
            printf("���ˣ����ᣬ�е�����\n");
            mciSendString("play sound\\1-12\\���ˣ����ᣬ�е�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6.5��
            Sleep(6500);
            return;
        }
    }

    // S
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "ʲô��������") == 0)
        {
            printf("�ǵ�\n");
            mciSendString("play sound\\1-1\\�ǵ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���ˣ�������������Ҳ��ѧУ��֪�����𣬾�����ô����") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-7\\�ǣ�����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��������������˹") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-9\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    // W
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��") == 0)
        {
            printf("�����ҵ�����\n");
            return;
        }
    }

    if(strstr(say, "Ϊ") != NULL)
    {
        if(strcmp(say, "Ϊʲô������") == 0)
        {
            printf("���ϵ�������ô�������Ұ�æ\n");
            mciSendString("play sound\\1-10\\���ϵ�������ô�������Ұ�æ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        else if(strcmp(say, "Ϊʲô��Щ���ﱻ������������") == 0)
        {
            printf("sa��˭֪���أ�\n");
            mciSendString("play sound\\1-12\\˭֪����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��һֱ��������˹������ͨ�����࣬��������������ʹ��������") == 0)
        {
            printf("�Һܸ��ˣ���ԭ���ҵ���ͨ�����Դ�\n");
            mciSendString("play sound\\1-11\\�Һܸ��ˣ���ԭ���ҵ���ͨ�����Դ�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
        else if(strcmp(say, "����������ʹ�����ܴ���û�з������ĵ�Ц����") == 0)
        {
            printf("���������һֱ��Ϊʲô���յ�����\n");
            mciSendString("play sound\\1-12\\���������һֱ��Ϊʲô���յ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6.5��
            Sleep(6500);
            printf("����Ϊʲô����Ҳ�����\n");
            mciSendString("play sound\\1-12\\����Ϊʲô����Ҳ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "ι") != NULL)
    {
        if(strcmp(say, "ι��������˹") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-12\\�ǣ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            printf("���Ϻã�����\n");
            mciSendString("play sound\\1-12\\���Ϻã�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5.2��
            Sleep(5200);
            return;
        }
    }

    // X
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Ȱ�Ҫ��ʲô������˵") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õģ�����3.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    // Y
    if(strstr(say, "Ҫ") != NULL)
    {
        if(strcmp(say, "Ҫ����ͨ��һ��Ŷ") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õ�,����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "������˹") != NULL)
    {
        if(strcmp(say, "������˹�����Ȼ�ȥ���ԹԿ��ң�֪������") == 0)
        {
            printf("�����ˣ��������\n");
            mciSendString("play sound\\1-2\\�����ˣ��������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "������˹�����ȥ������") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-3\\�õģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "������˹��Ҫ��Ҫ����һ����ѧ��") == 0)
        {
            printf("����\n");
            mciSendString("play sound\\1-3\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "������˹������ĳ����ô��") == 0)
        {
            printf("�Ǹ����������ǿɱ�ʽ����������С�����̶ֳȵĴ�С\n");
            mciSendString("play sound\\1-3\\����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��8��
            Sleep(8000);
            return;
        }
        else if(strcmp(say, "������˹��") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-8\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
        else if(strcmp(say, "������˹�����������꿴��") == 0)
        {
            printf("��������\n");
            mciSendString("play sound\\1-12\\��������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "������˹��������ô�죬ͣ��ͣ") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-13\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "�Ѿ�") != NULL)
    {
        if(strcmp(say, "�Ѿ�û�����ˣ��ԹԴ���") == 0)
        {
            printf("�ǣ�����\n");
            mciSendString("play sound\\1-8\\��,����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��ʲô������") == 0)
        {
            printf("������˵�ѵ����������ͨ������death\n");
            mciSendString("play sound\\1-9\\������˵�ѵ����������ͨ������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��6��
            Sleep(6000);
            return;
        }
    }

    if(strstr(say, "Լ") != NULL)
    {
        if(strcmp(say, "Լ���أ��ص��ң�����Լ��") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-12\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�����Ǹ���ֵ��θ�") == 0)
        {
            printf("������������\n");
            mciSendString("play sound\\1-13\\������������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
    }

    // Z
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���Աߵĺ�������㺣��������") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-2\\�õģ�����2.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "���Ϻ�") == 0)
        {
            printf("���Ϻã�����\n");
            mciSendString("play sound\\1-1\\���Ϻ�,����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "��ô") != NULL)
    {
        if(strcmp(say, "��ô��") == 0)
        {
            int flag = 0;
            if(flag == 0)
            {
                printf("���������鷳��\n");
                    mciSendString("play sound\\1-4\\���������鷳��.mp3",        //MCI�����ַ���
                    NULL,                                //��ŷ�����Ϣ�Ļ�����
                    0,                                    //�������ĳ���
                    NULL);                                //�ص�����ľ����һ��ΪNULL
                // ˯��3��
                Sleep(3000);
                return;
            }
            else if(flag == 1)
            {
                printf("ûʲô\n");
                    mciSendString("play sound\\1-10\\ûʲô.mp3",        //MCI�����ַ���
                    NULL,                                //��ŷ�����Ϣ�Ļ�����
                    0,                                    //�������ĳ���
                    NULL);                                //�ص�����ľ����һ��ΪNULL
                // ˯��1��
                Sleep(1000);
                return;
            }
            
        }
        else if(strcmp(say, "��ô�ˣ�ûʲô������") == 0)
        {
            printf("��һ�㶼�ﲻ�����˵�æ\n");
            mciSendString("play sound\\1-10\\��һ�㶼�ﲻ�����˵�æ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��4��
            Sleep(4000);
            return;
        }
        else if(strcmp(say, "��ô������������") == 0)
        {
            printf("�ǳ��ɰ�Ŷ������\n");
            mciSendString("play sound\\1-11\\�ǳ��ɰ�Ŷ������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
        else if(strcmp(say, "��ô�ˣ�������˹") == 0)
        {
            printf("ûʲô\n");
            mciSendString("play sound\\1-13\\ûʲô.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.6��
            Sleep(600);
            return;
        }
        else if(strcmp(say, "��ô�ˣ�������˹�����ǲ��õ���Ц����") == 0)
        {
            printf("��ϲ�����ˣ��ҵ����ˣ�������\n");
            mciSendString("play sound\\1-13\\��ϲ�����ˣ��ҵ����ˣ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��15.5��
            Sleep(15500);
            return;
        }
        else if(strcmp(say, "��ô����������˹") == 0)
        {
            printf("̫����\n");
            mciSendString("play sound\\1-13\\̫����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�����������Ǻ�") == 0)
        {
            printf("�Ǹ��������������ɿ���...\n");
            mciSendString("play sound\\1-2\\������Ӧ�Դ�ʩ.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5.5��
            Sleep(5500);
            return;
        }
        else if(strcmp(say, "��ͽ������") == 0)
        {
            printf("�ǵģ����ſ�Ƭ�Զ������ˣ��Ѿ�û����death\n");
            mciSendString("play sound\\1-2\\�ǵģ����ſ�Ƭ�Զ������ˣ��Ѿ�û����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��5��
            Sleep(5000);
            return;
        }
        else if(strcmp(say, "�������ʽ���ݣ�������˹") == 0)
        {
            printf("����Ϊ����fallen down��\n");
            mciSendString("play sound\\1-10\\fallen_down.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��87��
            Sleep(87000);
            return;
        }
        else if(strcmp(say, "��Щ�����Ǵ������ȥ��������ɺ󣬻᲻��о���������") == 0)
        {
            printf("��\n");
            mciSendString("play sound\\1-12\\��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.5��
            Sleep(500);
            return;
        }
    }

    if(strstr(say, "����") != NULL)
    {
        if(strcmp(say, "����Ϊֹû������ȥ��������") == 0)
        {
            printf("���ѣ���û������\n");
            mciSendString("play sound\\1-4\\���ѣ���û������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3��
            Sleep(3000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�߰ɣ�������˹") == 0)
        {
            printf("�õģ�����\n");
            mciSendString("play sound\\1-5\\�õģ�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�������£����ᱻ�˵���ɵ����") == 0)
        {
            printf("�������˵�������\n");
            mciSendString("play sound\\1-11\\�������˵�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��2��
            Sleep(2000);
            return;
        }
        else if(strcmp(say, "�������£������ú�ɵ��") == 0)
        {
            printf("�������˵�����\n");
            mciSendString("play sound\\1-14\\�������˵�����.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����Ľ���أ�û��ʲô����") == 0)
        {
            printf("û�ǻ���\n");
            mciSendString("play sound\\1-11\\û�ǻ���.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "ֻ") != NULL)
    {
        if(strcmp(say, "ֻ�б���Ҳ�У�Цһ��") == 0)
        {
            printf("ֻҪ���飿\n");
            mciSendString("play sound\\1-12\\ֻҪ���飿.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1��
            Sleep(1000);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "�Թ����ߵ����˺����ۻ���") == 0)
        {
            printf("�Բ�������\n");
            mciSendString("play sound\\1-12\\�Բ�������.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��1.5��
            Sleep(1500);
            return;
        }
    }

    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "����һ��") == 0)
        {
            printf("ni a li\n");
            mciSendString("play sound\\1-13\\niali.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��0.7��
            Sleep(700);
            return;
        }
    }

    // #
    if(strstr(say, "��") != NULL)
    {
        if(strcmp(say, "��Ц��") == 0)
        {
            printf("����Ϊʲô��Ц��\n");
            mciSendString("play sound\\1-3\\����Ϊʲô��Ц��.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��3.5��
            Sleep(3500);
            return;
        }
        if(strcmp(say, "������ķܽǣ�֣�") == 0)
        {
            printf("ɨ��ϵͳ��ʼ��@#*��*&@�����幹��û���쳣������¯û���쳣����@*���ղ�����ʲô������¯��һ˲�䣬�о�����ʹ\n");
            mciSendString("play sound\\1-12\\���������˺���ķܽǣ�֣�.mp3",        //MCI�����ַ���
                NULL,                                //��ŷ�����Ϣ�Ļ�����
                0,                                    //�������ĳ���
                NULL);                                //�ص�����ľ����һ��ΪNULL
            // ˯��22.5��
            Sleep(22500);
            return;
        }
    }

    

    
}

// ������
int main()
{
    // �������4096�ֽ�
    static char str[4096] = {};

    // ����������Ŀ�������
    printf("���̿�ʼ\n");
     mciSendString("play sound\\1-1\\���̿�ʼ.mp3", NULL, 0, NULL);
    // ˯��2.2��
    Sleep(2200);

    printf("���μ���,����������������ʹ,���������κο��ĵ����飬My Master\n");
    mciSendString("play sound\\1-1\\���μ���,����������������ʹ.mp3", NULL, 0, NULL);
    // ˯��9.5��
    Sleep(9500);

    while(1)
    {
        // ��˵
        printf("��˵:");
        gets(str);
        // printf("����:%s\n",str);

        // ���� reply����
        reply(str);

        // �жϺ����
        if(strcmp(str,"��") == 0)
        {
            break;
        }
        sprintf(str, "");

    }
    return 0;
}
