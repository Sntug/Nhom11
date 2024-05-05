#pragma once
#include <iostream>
#include "mylib.h"
using namespace std;
void VetuongTren()
{
    int x=10,y=1;
    while(x<=100)
    {
    SetColor(10);
    gotoXY(x,y);
    cout << char(220);
    x++;
    }
}
void VetuongDuoi()
{
    int x=10,y=26;
    while(x<=100)
    {
    SetColor(10);
    gotoXY(x,y);
    cout << char(220);
    x++;
    }
}
void VetuongTrai()
{
    int x=10,y=2;
    while(y<=26)
    {
    SetColor(10);
    gotoXY(x,y);
    cout << char(219);
    y++;
    }

}
void VetuongPhai()
{
    int x=100,y=2;
    while(y<=26)
    {
    SetColor(10);
    gotoXY(x,y);
    cout << char(219);
    y++;
    }
}
void Vetuong()
{
    VetuongTren();
    VetuongDuoi();
    VetuongPhai();
    VetuongTrai();
}
