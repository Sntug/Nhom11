int sl=7;
void khoitao_Ran(int toadox[],int toadoy[])
{
    int x=50,y=13;
    for(int i=0;i<sl;i++)
    {
        toadox[i]=x;
        toadoy[i]=y;
        x--;
    }
}

void veRan(int toadox[],int toadoy[])
{
    for(int i=0;i<sl;i++)
    {
        gotoXY(toadox[i],toadoy[i]);
        if(i==0)
        {
            SetColor(13);
            cout << char(254);
        }
        else
        {

            cout << char(254);
        }
    }
    gotoXY(toadox[0],toadoy[0]);
    cout << char(254);
    gotoXY(toadox[1],toadoy[1]);
    cout << char(254);
    gotoXY(toadox[2],toadoy[2]);
    cout << char(254);
}
void xoa_dulieu(int toadox[],int toadoy[])
{
    for(int i=0;i<sl;i++)
    {
        gotoXY(toadox[i],toadoy[i]);
        cout << " ";
    }
}

