/*
 * wskaźniki.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 * Wskaźniki i dynamiczne struktury danych
 *
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv) {

/*
    int x = 11;
    cout << x << endl; //wartosc
    cout << &x << endl;
    cout << sizeof(x) << endl;

    int *kotek;
    kotek = &x;
    cout << kotek << endl;
    cout << *kotek << endl; //dereferencja
    *kotek += *kotek;
    cout << *kotek << endl; //dereferencja
    kotek += 1; //inkrementacja
    cout << kotek << endl;
*/

    int *tbIntPtr = NULL;
    int tab[100];
    cout << tab << endl;
    cout << "Ile liczb podasz, koteczku?";
    int ile = 0;
    cin >> ile;
    tbIntPtr = new int[ile];
    cout << tbIntPtr << endl;
    cout << "Podaj kolejne liczby" << endl;
    for (int i =0; i < ile; i++)
        cin >> tbIntPtr[i];
    cout << tbIntPtr;





	return 0;
}

