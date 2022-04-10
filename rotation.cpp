#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,x2,y1,y2,x3,y3;
    double s,c,a;
    //where s=sine c=cos a=theta
    printf("Enter the Co-ordinate of A:- ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the co-ordinate of B:- ");
    scanf("%d%d",&x2,&y2);
    printf("Enter the co-ordinate of C:- ");
    scanf("%d%d",&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    printf("Enter the Rotation Angle : ");
    scanf("%lf",&a);
    c=cos(a*3.14/180);
    s=sin(a*3.14/180);
    x1=floor(x1*c+y1*s);
    y1=floor(-x1*s+y1*c);
    x2=floor(x2*c+y2*s);
    y2=floor(-x2*s+y2*c);
    x3=floor(x3*c+y3*s);
    y3=floor(x3*s+y3*c);

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    return 0;
}
