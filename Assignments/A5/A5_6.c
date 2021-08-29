/*
Discuss with example any five graphics function used in c-programming.
*/

#include <conio.h>
#include <graphics.h>

int main(){

    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char *)"");

    line(150, 150, 200, 200);
    circle(200, 300, 50);
    ellipse(100, 100, 0, 360, 50, 75);
    arc(400, 200, 90, 180, 75);
    rectangle(150, 250, 200, 300);

    getch();
    closegraph();
    return 0;
}