/**
 * @file Grafic.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-21
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <iostream>
#include <ncurses.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "UTF-8");

    char cadena[128];

    initscr();

    printw("Ingrese un nombre:");
    scanw("%s",cadena);
    printw("\nSu nombre es: %s.\n",cadena);

    getch();
    refresh();
    endwin();

    return 0;
}