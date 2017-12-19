#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mainfun.h"

int sam[7][8]={{0}};

int main (void)
{
    int row;
    int pl;
    int num;
    int end;
    int i,j,k=1;
    char hp;

    while(1)
    {
    printf("you can input h(how to play) or p(play) \n");
    scanf("%c \n", &hp);
    if(hp=='h')
    {
        printf("you can input -1~7 \n");
        printf("if you input -1 game end \n");
        printf("if you connect 4 mok you win \n");
        printf("if you want see board enter 0 \n");
    }
    else if(hp=='p')
    {
        printf("Let's play BBM \n");
        break;
    }
    }
    while(1)
    {
        pl=1;
        printf("you are p1 \n");
        printf("enter the number \n");
        printf("## %d tern ## \n",k);
        k++;
        scanf("%d", &num);
        if(num==0)
        {
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",&sam[i][j]);
                }
                printf("\n");
            }
        }
        if(num==-1)
        {
            break;
        }
        end=mainfun(pl,num);
        find_win(row,num-1,pl);
        if(end==1)
        {
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    sam[i][j];
                }
            }
            printf("player 1 is win the game! \n");
            break;
        }
        end=draw_gmae();
        if(end==2)
        {
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    sam[i][j];
                }
            }
            printf("game is draw! \n");
            break;
        }
 		{
			pl=2;
            printf("p2 turn \n");
            printf("enter the number \n");
      		printf("## %d tern ## \n",k);
        	k++;
			scanf("%d",&num);
			if(num==0)
			{
             for(i=0;i<7;i++)
             {
                 for(j=0;j<7;j++)
                 {
                     printf("%3d",&sam[i][j]);
                 }
                 printf("\n");\
              }
         	}	
			if(num==-1)
			{
				break;
			}
            end=mainfun(pl,num);
            find_win(row,num-1,pl);
			if(end==1)
         {
             for(i=0;i<7;i++)
             {
                 for(j=0;j<7;j++)
                 {
                     sam[i][j];
                 }
             }
             printf("player 2 is win the game! \n");
             break;
         }
         end=draw_gmae();
         if(end==2)
         {
             for(i=0;i<7;i++)
             {
                 for(j=0;j<7;j++)
                 {
                     sam[i][j];
                 }
             }
             printf("game is draw! \n");
             break;
         }
}
    }

