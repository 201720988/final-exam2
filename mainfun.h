#include <stdio.h>

extern int sam[7][8];

int find_win(int row,int col,int player)
{
    int a;
    if((sam[row][col]==player)&&(sam[row+1][col]==player)&&(sam[row+2][col]==player)&&(sam[row+3][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player)&&(sam[row][col+3]==player))
    {
        a=1;
    }
    if((sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player))
    {
        a=1;
    }
    if((sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row+1][col]==player))
    {
        a=1;
    }
    if((sam[row][col-3]==player)&&(sam[row][col-2]==player)&&(sam[row-1][col]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player)&&(sam[row-3][col+3]==player))
    {
        a=1;
    }
    if((sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player))
    {
        a=1;
    }
    if((sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player))
    {
        a=1;
    }
    if((sam[row+3][col-3]==player)&&(sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row+1][col+1]==player)&&(sam[row+2][col+2]==player)&&(sam[row+3][col+3]==player))
    {
        a=1;
    }
    if((sam[row-1][col-1]==player)&&(sam[row][col]==player)&&(sam[row+1][col+1]==player)&&(sam[row+2][col+2]==player))
    {
        a=1;
    }
    if((sam[row-2][col-2]==player)&&(sam[row-1][col-1]==player)&&(sam[row][col]==player)&&(sam[row+1][col+1]==player))
    {
        a=1;
    }
    if((sam[row-3][col-3]==player)&&(sam[row-2][col-2]==player)&&(sam[row-1][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    return(a);
}


#include <stdio.h>

extern int sam[7][8];

int draw_game(void)
{
    int a;
    if((sam[0][0]==1)&&(sam[0][0]==2)&&(sam[0][1]==1)&&(sam[0][1]==2)&&(sam[0][2]==1)&&(sam[0][2]==2)&&(sam[0][3]==1)&&(sam[0][3]==2)&&(sam[0][4]==1)&&(sam[0][4]==2)&&(sam[0][5]==1)&&(sam[0][5]==2)&&(sam[0][6]==1)&&(sam[0][6]==2))
    {
        a=2;
    }
    return(a);
}

#include <stdio.h>

extern int sam[7][8];

int mainfun(int player,int number)
{
    static int a=6;
    static int b=6;
    static int c=6;
    static int d=6;
    static int e=6;
    static int f=6;
    static int g=6;
    int i,j;
    for(i=1;i<7;i++)
    {
        for(j=1;j<7;j++)
        {
            sam[i][j];
        }
    }
    if(a==1)
    {
        if(a<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        a--;
        sam[a+1][number];
    }
    if(b==2)
    {
        if(b<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        b--;
        sam[b+1][number];
    }
    if(c==3)
    {
        if(c<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        c--;
        sam[c+1][number];
    }
    if(d==4)
    {
        if(d<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        d--;
        sam[d+1][number];
    }
    if(e==5)
    {
        if(e<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        e--;
        sam[e+1][number];
    }
    if(f==6)
    {
        if(f<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        f--;
        sam[f+1][number];
    }
    if(g==7)
    {
        if(g<=-1)
        {
            printf("It's your mistake do it again \n");
            return(10);
        }
        g--;
        sam[g+1][number];
    }
    if((sam[0][1]==player)!=(sam[0][2]=player)!=(sam[0][3]==player)!=(sam[0][4]==player)!=(sam[0][5]==player)!=(sam[0][6]==player)!=(sam[0][7]==player))
    {
        printf("oh It's your mis take \n");


    }

