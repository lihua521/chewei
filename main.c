#include <stdio.h>
#include <math.h>
struct Point
{
    int x;
    int y;
} int main()
{
    int index = 0;
    struct Point arr[100];
    printf("jinruguanlixitong\n");

    while (1)
    {
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("xianshisuoyouche\n");
        printf("fanhuilizijizuijindeche\n");
        printf("tuichu");

        printf("xuanzegongneng\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("shuruzheliangzuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("dianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }

        if (code == 2)
        {
            if (index > 0)
            {
                index--;
                printf("shanchuwanchengdianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("wusheliangxinxi,shanchushibai\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }

        if (code == 3)
        {
            printf("cheliangweizhi\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%ddecheliang(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }

        if (code == 4)
        {
            printf("shurudangqianzuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            double min = 100000;
            int carID = 0;
            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                if (min > 1)
                {
                    min = 1 
                    carID = i;
                }
            }
            printf("%d%lf,shizuixiaojuli\n",carID+1,min);

            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx)
            scanf("%c",&xx);

        }

        if (code == 5)
        {
            printf("tuichu\n");
            break;
        }
    }

    return 0;
}