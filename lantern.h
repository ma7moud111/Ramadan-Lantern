#ifndef LANTERN_H_INCLUDED
#define LANTERN_H_INCLUDED

#include <iostream>
#include<windows.h>         // for the setcolor function
using namespace std;

class lantern{
private:
    string space = "                                                           ";
    int lantern_size = 12;
    int width = lantern_size * 4;
    int height = lantern_size * 6;
public:
    void setcolor(int forgc);
    void first_part();   // drawing the first part of the lantern starting form top
    void second_part();
    void third_part();
    void fourth_part();
    void fifth_part();
    void draw();

};

#endif // LANTERN_H_INCLUDED
