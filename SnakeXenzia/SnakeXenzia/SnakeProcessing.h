bool EatCheck(int xfruit, int yfruit, int x0, int y0)
{
    if((x0==xfruit)&& (y0==yfruit))
    {
        return true;
    }
    return false;
}
 void them(int a[],int giatri)
{
    for(int i=sl;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=giatri;
    sl++;
}
bool checkfruit(int xfruit,int yfruit, int toadox[],int toadoy[])///kiểm tra xem rắn có đè vào mồi k
{
    for(int i=0;i<sl;i++)
    {
        if((xfruit==toadox[i])&&(yfruit == toadoy[i]))
        {
            return true;
        }
    }
    return false;
}
void fruitMake(int &xfruit, int &yfruit, int toadox[], int toadoy[])///spawn fruit
{
    do
    {
        int colour = rand() % (15-1+1)+1;
        SetColor(colour);
        xfruit = rand() % (99 - 11 + 1) + 11;
        yfruit = rand() % (25 - 2 + 1) + 2;
        gotoXY(xfruit, yfruit);
        cout << "$";
    } while (checkfruit(xfruit, yfruit, toadox, toadoy) == true);
}


void xoa(int a[],int vt)
{
    for(int i=vt;i<sl;i++)
    {
        a[i]=a[i+1];
    }
    sl--;
}
void SnakeProcessing(int toadox[],int toadoy[],int x,int y,int &xqua, int &yqua,int &score)
{
   //b1: them toa do moi vao dau mang
	them(toadox, x);
	them(toadoy, y);
	if (EatCheck(xqua, yqua, toadox[0], toadoy[0]) == false)
	{
		//b2: xoa toa do cuoi mang
		xoa(toadox, sl - 1);
		xoa(toadoy, sl - 1);

	}
	else
	{
	    score++;
            gotoXY(103,2);
            cout << "Score: " <<  score;
		fruitMake(xqua, yqua, toadox, toadoy);
	}
	//b3: ve ran
	veRan(toadox, toadoy);

}


