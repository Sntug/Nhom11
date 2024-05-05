#include <iostream>
#include "mylib.h"
#include "drawwall.h"
#include "drawSnake.h"
#include "SnakeProcessing.h"
#include "gameover.h"
#include "Menu.h"
#define MAX 100
///0 - cham vao bien ben tren -> di xuong
///1 - cham vao bien ben duoi -> di len
///2 - cham vao bien ben phai -> sang trai
///3 - cham vao bien ben trai -> sang phai
 int toadox[MAX], toadoy[MAX];
int Score =0;
using namespace std;

int main()
{

    int x=50,y=13;
    Vetuong();
    khoitao_Ran(toadox,toadoy);
    veRan(toadox,toadoy);
    srand(time(NULL));
    int xfruit=0,yfruit=0;
    fruitMake(xfruit,yfruit,toadox,toadoy);//tao qua
    int check=2;
    bool gameover=false;
    while(gameover ==false)
    {

         if(kbhit())
    {
        char kitu=getch();
        if(kitu==-32)
        {
            kitu=getch();
            if(kitu==72&&check!=0)///dilen
            {
                check=1;
            }
            if(kitu==80&&check!=1)///dixuong
            {
                check=0;
            }
            if(kitu==77&&check!=3)///turnright
            {
                check=2;
            }
            if(kitu==75&&check!=2)///turnleft
            {
                check=3;
            }

        }
    }
        xoa_dulieu(toadox,toadoy);


        if(check==0)
        {
            y++;
        }
        else if(check==1)
        {
            y--;
        }
        else if(check==2)
        {
            x++;//turn right
        }
        else if(check==3)
        {
            x--;
        }

        SnakeProcessing(toadox,toadoy,x,y,xfruit,yfruit,Score);///xu ly ran

        ///kiem tra dieu kien gameover
        gameover = walltouch(toadox[0], toadoy[0]) || bite(toadox, toadoy);

        Sleep(100);

    }
    system("cls");
    bool out=false;
    gotoXY(30,10);
    SetColor(12);
    std::cout << "  _____          __  __ ______    ______      ________ _____     " <<   std::endl;
    gotoXY(30,11);
    SetColor(12);
    std::cout << " / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\    " <<   std::endl;
    gotoXY(30,12);
    SetColor(12);
    std::cout << "| |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |   " <<   std::endl;
    gotoXY(30,13);
    SetColor(12);
    std::cout << "| | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /    " <<  std::endl;
    gotoXY(30,14);
    SetColor(12);
    std::cout << "| |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\    " << std::endl;
    gotoXY(30,15);
    SetColor(12);
    std::cout << " \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\   " << std::endl;
    gotoXY(57,20);
    SetColor(15);
    cout << "SCORE: " << Score;
    ShowCur(false);
    cout <<endl;

    getch();
    return 0;
}



