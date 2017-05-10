#include <cstdio>
#include <cstdlib>
#include <conio.h>

int main()
{
    int x = 5,y = 10;
    char inputKey;
    bool isFire = false;

    int des_y = 7;
    bool isHit = false;

    while(1){
        system("cls");

        if(!isHit){
            for(int i = 0; i < des_y; ++i) putchar(' ');
            putchar('+');
            putchar('\n');
        }

        if(!isFire) for(int i = 0; i < x; ++i) putchar('\n');
        else{
            for(int i = 0; i < x; ++i){
                for(int j = 0; j < y; ++j) putchar(' ');
                printf("  |\n");
            }

            if(y+2 == des_y) isHit = true;

            isFire = false;
        }

        for(int i = 0; i < y; ++i) putchar(' ');
        printf("  *\n");
        for(int i = 0; i < y; ++i) putchar(' ');
        printf("*****\n");
        for(int i = 0; i < y; ++i) putchar(' ');
        printf(" * * \n");

        if(kbhit()){
            inputKey = getch();
            if(inputKey == 's') x++;
            if(inputKey == 'w') x--;
            if(inputKey == 'd') y++;
            if(inputKey == 'a') y--;
            if(inputKey == ' ') isFire = true;
        }
    }
    return 0;
}
