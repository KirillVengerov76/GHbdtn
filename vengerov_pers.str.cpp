//Kirill Vengerov 9"V"

#include "TXLib.h"
#include "map_veng.h"
#include "pers_veng.h"
#include "bot_veng.h"
#include "briefing_veng.h"

int main()
{
    txCreateWindow(480,480);
    txSelectFont ("Usually-font", 40);
    pers first;
    maP one;
    bot b0t;
    brief intr;
    txBegin();
    intr.splash_screen();
    txSetColor(RGB(255,255,255));
    txPlaySound("England Theme.wav",SND_LOOP);//https://online-audio-converter.com/ru/
    intr.introduction();
    one.load_fon();
    while(!GetAsyncKeyState(VK_ESCAPE))
    {
        txSetFillColor(RGB(0,0,0));
        txClear();
        one.draw_fon();
        first.draw();
        b0t.draw_gunman(first);
        b0t.draw_guard(first);
        first.change(&one);
        first.in_bank(&one);
        first.update(one);
        first.debate(&one);
        first.chest(one);
        first.finish(&one);
        first.restart(&one);
        txSleep(100);
    }
    txEnd();
    txPlaySound(NULL);
    return 0;
}


