/*
 * stos.cpp
 *
 */


#include <iostream>
#include <cstdlib>
using namespace std;
void push(int stos[], int &sp, int dane){
    cout << dane << " ";
    stos[sp] = dane;
    }

int pop(int stos[], int sp) {
    sp--;
    return stos[sp];
    }




int main(int argc, char **argv){
    int *stack; //wskaźnik
    int sr; //rozmiar
    int sp = 0; //wskaźnik stosu

    cout << "Podaj rozmiar:"; cin >> sr;
    if (!cin) {

        cout << "Błędne dane!";
        return -1;
        }

    stack = new int[sr];

    srand(time(NULL));

    for (int i=0; i<sr; i++)
        push(stack, sp, rand()%100 + 1); //wstaw na stos

    cout << endl;


    for (int i=0; i<sr; i++)
        cout << pop(stack, sp)<< " ";

    //cout << stack[0] << " " << stack[1];
    //cout << pop(stack, sp) << " ";
    //cout << pop(stack, sp) << " ";
    //push(stack, sp, 101); //zdejmij ze stosu

	return 0;
}

