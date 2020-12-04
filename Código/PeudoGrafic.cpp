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
#include <vector>
using namespace std;

int main()
{
    vector<int> numeros;
    int acum{0};

    for (int i = 0; i < 99; i++)
    {
        numeros.push_back(i);
    }

    for (int i = 0; i < 81; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int k = 0; k < 81; k++)
    {
        cout << "_";
    }

    for (int j = 0; j < 20; j++)
    {
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "|\t" << numeros[acum] << "\t|";
            acum++;
        }
        cout << endl;
        for (int k = 0; k < 81; k++)
        {
            cout << "_";
        }
        cout << endl;
    }

    for (int i = 0; i < 81; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
