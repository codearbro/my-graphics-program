#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0,x1,y0,y1,x,y,p,dy,dx;
    printf("Enter the coordinate of first point:- ");
    scanf("%d%d",&x0,&y0);
    printf("Enter the coordinate of second point:- ");
    scanf("%d%d",&x1,&y1);
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,WHITE);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
            putpixel(x,y,WHITE);
            p=p+2*dy;
            x=x+1;
    }
    getch();
    return 0;
}
