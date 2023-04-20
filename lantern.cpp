#include "lantern.h"

void lantern::setcolor(int forgc){              // this function sets the color on the console screen to any color you want
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (forgc & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void lantern::first_part(){
    lantern::setcolor(15);
    for (int i = 0; i < lantern_size / 2; i++) {
        cout << space;
        for (int j = 0; j < width; j++) {
            if (j < width / 2 - i || j > width / 2 + i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void lantern::second_part(){
    lantern::setcolor(14);
    for (int i = 0; i < lantern_size / 2; i++) {
        cout << space;
        for (int j = 0; j < width; j++) {
            if (j < lantern_size - i || j > width - lantern_size + i - 1) {
                cout << " ";
            } else {
                cout << "/";
            }
        }
        cout << endl;
    }
}

void lantern::third_part(){
    lantern::setcolor(15);
    for (int i = lantern_size / 2; i < lantern_size; i++) {
    //cout <<"            ";
        cout << space;
        for (int j = 0; j < width; j++) {
            if (j < i - lantern_size / 2 || j > width - i + lantern_size / 2 - 1) {
                cout << " ";
            } else {
                cout << "\\";
            }
        }
        cout << endl;
    }
}

void lantern::fourth_part(){
    lantern::setcolor(14);
    for (int i = 0; i < lantern_size; i++) {
        //cout <<"            ";
        cout << space;
        for (int j = 0; j < width; j++) {
            if (j < lantern_size || j >= width - lantern_size) {
                cout << "|";
            } else {
                cout << "_";
            }
        }
        cout << endl;
    }
}

void lantern::fifth_part(){
    lantern::setcolor(15);
    for (int i = 0; i < lantern_size; i++) {
        //cout <<"            ";
        cout << space;
        for (int j = 0; j < width; j++) {
            if (j < width / 2 - i || j > width / 2 + i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void lantern::draw(){
    lantern::first_part();
    lantern::second_part();
    lantern::third_part();
    lantern::fourth_part();
    lantern::fifth_part();
    cout << endl;
    cout << space <<"             ";
    lantern::setcolor(13);
    cout << "Ramadan ";
    lantern::setcolor(15);
    cout << "Mubarak ";
    lantern::setcolor(14);
    cout << "to ";
    lantern::setcolor(13);
    cout << "YOU ";
    cout << endl;
    lantern::setcolor(15);
}

