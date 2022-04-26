//Kirill Vengerov 9"V"

class brief
{
public:
    void introduction();
    void splash_screen();
};

void brief::introduction()
{
    txSelectFont ("Usually-font", 40);
    txSetFillColor(RGB(0,0,0));
    txClear();
    int i = 0;
    while(i <= 255)
    {
        txSetColor(RGB(i,i,i));
        txTextOut(48,144,"Hello user! If you have");
        txTextOut(48,192,"read the briefing, press Enter");
        txRectangle (192,288, 240, 336);
        txRectangle (192,336, 240, 384);
        txRectangle (144,336, 192, 384);
        txRectangle (240,336, 288, 384);
        txDrawText  (192,288, 240, 336, "W");
        txDrawText  (192,336, 240, 384, "S");
        txDrawText  (144,336, 192, 384, "A");
        txDrawText  (240,336, 288, 384, "D");
        i++;
        txSleep(1);
    }
    while(!GetAsyncKeyState(VK_RETURN))
    {
        txSleep(1000);
    }
}

void brief::splash_screen()
{
    txSelectFont ("Usually-font", 40,23);
    txPlaySound("start.wav");
    int i = 0;
    while(i <= 255)
    {
        txSetColor(RGB(i,i,i));
        txTextOut(8,100,"Devision by zero corp");
        i++;
        txSleep(1);
    }
    while(i >= 0)
    {
        txSetColor(RGB(i,i,i));
        txTextOut(8,100,"Devision by zero corp");
        i--;
        txSleep(1);
    }
    i = 0;
    while(i <= 255)
    {
        txSetColor(RGB(i,i,i));
        txTextOut(130,200,"Presents");
        i++;
        txSleep(1);
    }
    while(i >= 0)
    {
        txSetColor(RGB(i,i,i));
        txTextOut(130,200,"Presents");
        i--;
        txSleep(1);
    }
    txSleep(4000);
}
