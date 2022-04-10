#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,x2,y1,y2,x3,y3;
    int x,y;

    printf("Enter the Co-ordinate of A:- ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the co-ordinate of B:- ");
    scanf("%d%d",&x2,&y2);
    printf("Enter the co-ordinate of C:- ");
    scanf("%d%d",&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    printf("Enter the scaling vector:- ");
    scanf("%d%d",&x,&y);
    x1=(x1*x);
    y1=(y1*y);
    x2=(x2*x);
    y2=(y2*y);
    x3=(x3*x);
    y3=(y3*y);

    printf("Triangle after scaling:- ");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    return 0;
}
