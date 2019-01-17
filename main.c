#include <stdio.h>
#include <math.h>
struct Point{
    int x;
    int y;
}
int main(){
    int index =0;
    struct Point arr[100];
    printf("jinruguanlixitong\n");

    while(1){
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("xianshisuoyouche\n");
        printf("fanhuilizijizuijindeche\n");
        printf("tuichu");

        printf("xuanzegongneng\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
           printf("shuruzheliangzuobiao\n");
           int x;
           int y;
           scanf("%d",&x);
           scanf("%d",&y);

           arr[index].x = x;
           arr[index].y = y;

           index++;

           printf("dianjihuichejixu\n");
           char xx;
           scanf("%c",&xx);
           scanf("%c",&xx);
        }
        
        if(code == 2){
            
        }
        
        if(code == 3){
            
        }
        
        if(code == 4){
            
        }
        
        if(code == 5){
            
        }
    }

    return 0;

}