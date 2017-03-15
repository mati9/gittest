/*
 * onp.cpp
 *
 *
 */


#include <iostream>
#include <string.h>
#include <locale>

using namespace std;


int main(int argc, char **argv){

    string onp;
    getline(cin, onp);
    cout << "Podano" << onp << endl;

    for(unsigned int i=0; i<onp.size(); i++){
        if (onp[i] == ' ')
            ;
        else if (isdigit(onp[i]))
            cout << "liczba" << endl;
        else
            cout << "tekst" << endl;
        else
            cout << onp[i] << " ";




    }





	return 0;
}

