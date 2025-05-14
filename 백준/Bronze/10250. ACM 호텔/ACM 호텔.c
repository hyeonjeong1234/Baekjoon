#include<stdlib.h>
#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i =0 ;i<T;i++)
    {
        int W=0,H=0,N=0,floor=0,room=0;
        scanf("%d %d %d", &H,&W,&N);
        //방 번호 YXX OR YYXX의 형태 => 층 *100 + 방번호!!
         floor = N%H;
         room = N/H+1;
        if(floor == 0)
        {
            floor = H;
            room--;
        }
        
        printf("%d\n",floor*100+room);
    }
}