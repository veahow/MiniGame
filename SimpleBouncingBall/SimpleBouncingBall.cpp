#include <cstdio>
#include <cstdlib>
#include <windows.h>

int main()
{
    int x = 0,y = 5;
    int vx = 1,vy = 1;
    int left = 0,right = 20;
    int top = 0,bottom = 10;

    while(1){
        x += vx;
        y += vy;

        system("cls");

        for(int i = 0; i < x; ++i) putchar('\n');
        for(int j = 0; j < y; ++j) putchar(' ');
        putchar('o');
        putchar(' ');
        Sleep(100);

        if((x == top) || (x == bottom)) vx = -vx;
        if((y == left) || (y == right)) vy = -vy;
    }
    return 0;
}
