bool walltouch(int x0, int y0)
{
    // Upper wall
    if (y0 == 1 && (x0 >= 10 && x0 <= 100))
    {
        return true; // game over
    }
    // Lower wall
    else if (y0 == 26 && (x0 >= 10 && x0 <= 100))
    {
        return true;
    }
    // Right wall
    else if (x0 == 100 && (y0 >=1 && y0 <= 26))
    {
        return true;
    }
    // Left wall
    else if (x0 == 10 && (y0 >= 1 && y0 <=26)) // Corrected this line
    {
        return true;
    }
    else
        return false;
}


bool bite(int toadox[],int toadoy[])
{
    for(int i=1;i<sl;i++)
    {
        if((toadox[0]==toadox[i])&&(toadoy[0]==toadoy[i]))
        {
            return true;
        }
    }
    return false;
}
