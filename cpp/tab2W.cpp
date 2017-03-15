/*
 * tab2W.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 *
 *
 */


#include <iostream>
#include <cstdlib> //rand
#include <iomanip> //setw

using namespace std;


int tab2W() {
    int w, k, i, j;

    srand(time(NULL));

    cout << "Podaj wiersze i kolumny: ";
    cin >> w >> k;

    int**tab; //wskaźnik do wskaźnika (**)
    try {
        tab = new int*[w];

        }catch(bad_alloc){
            cout << "Za mało pamięci";
            return -1;

        }


        for (i=0; i<w; i++) {
            try{
                tab[i] = new int[k];
            }catch(bad_alloc){
                    cout << "Za mało pamięci";
                    return -1;

            }


        for (i=0; i<w; i++) {

            for (j=0; j<k; j++) {

                tab[i][j] = rand()%100 + 1;
                cout << setw(4) << tab[i][j];
            }

        }
        for (i=0; i<w; i++) {
            delete [] tab[i];

        delete [] tab;

        return 0;

    }

//int main(int argc, char **argv)


}

    tab2w();
    return 0;

}
