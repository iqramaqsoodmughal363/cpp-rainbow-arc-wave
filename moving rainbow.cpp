#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int y = getmaxy()/2;
    int shift = 0;

    while (!kbhit()) {
        cleardevice();
        setbkcolor(BLACK);
        cleardevice();

        // Rainbow layers ??
        int colors[] = {RED, LIGHTRED, YELLOW, GREEN, CYAN, BLUE, MAGENTA};
        int radius = 200;
        for (int i = 0; i < 7; i++) {
            setcolor(colors[i]);
            setfillstyle(SOLID_FILL, colors[i]);
            arc(getmaxx()/2, y + shift, 0, 180, radius);
            radius -= 15;
        }

        shift += 2;
        if (shift > 20) shift = -20; // wave motion

        delay(100);
    }

    getch();
    closegraph();
    return 0;
}
