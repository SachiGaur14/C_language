#include<stdio.h>
#include<graphics.h>
int main() {
    int gd = DETECT, gm; // graphic driver and graphic mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    //outtext() -- to display text at current position & outtextxy()-- to display text at specific position.
    outtext("Hello");
    outtextxy(30, 50, "Hello"); //outtextxy(x, y, "string");
    
    //line(x1, y1, x2, y2);
    line(40,50,50,60);

    //circle(x0, y0, r);
    circle(100, 100, 50);

    //rectangle(x1, y1, x2, y2);
    rectangle(200, 200, 400, 400);

    //ellipse(x0, y0, startangle, endangle, xr, yr);
    ellipse(400,400,0,360,100,50);
    ellipse(500,500,0,180,50,100);
    //fillellipse(x0,y0,xr,yr);
    fillellipse(500,500,200,150);

    setcolor(RED); // shape colour.
    setbkcolor(GREEN); //background colour.


    closegraph();
    return 0;
}