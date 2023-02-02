#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
int main() {
    int x, geser, ulang;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);

    for (ulang = 1; ulang <= 3; ulang++){
        // Kiri ke kanan
        for (geser = 1; geser <= 50; geser++){
            system("cls");
            for (x = 1; x <= 13; x++){
                gotoxy(geser+20-x,2+x);
                SetConsoleTextAttribute(h, x+1);
                cout << "*";
                SetConsoleTextAttribute(h, x+3);
                gotoxy(geser+18+x,2+x);
                cout << "*";
                gotoxy(geser+5+x*2,15);
                cout << "*";
                gotoxy(geser+5+x*2,7);
                cout << "*";
                gotoxy(geser+6+x,x+6);
                SetConsoleTextAttribute(h, x+2);
                cout << "*";
                gotoxy(geser+32-x,x+6);
                cout << "*";
                gotoxy(geser+16,11);
                SetConsoleTextAttribute(h, x);
                cout << "Gabut";
            }
                sleep(float(0.1));
        }
        // Kanan ke kiri
        for (geser = 49; geser > 1; geser--) {
            system("cls");
            for (x = 1; x <= 13; x++) {
                gotoxy(geser+20-x,2+x);
                SetConsoleTextAttribute(h, geser+5);
                cout << "*";
                gotoxy(geser+18+x,2+x);
                SetConsoleTextAttribute(h, geser+8);
                cout << "*";
                gotoxy(geser+5+x*2,15);
                cout << "*";
                gotoxy(geser+5+x*2,7);
                SetConsoleTextAttribute(h, geser/3);
                cout << "*";
                gotoxy(geser+6+x,x+6);
                cout << "*";
                gotoxy(geser+32-x,x+6);
                cout << "*";
                gotoxy(geser+16,11);
                SetConsoleTextAttribute(h, geser*2);
                cout << "Gabut";
            }
                sleep(float(0.1));
        }
    }
}
