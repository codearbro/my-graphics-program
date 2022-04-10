#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
   initgraph(&gd,&gm,"");
    putpixel(10,10,WHITE);
   getch();
   return 0;
}

