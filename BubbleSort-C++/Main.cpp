#include <iostream>
#include <fstream>
using namespace std;

/*===================================================================================================
Autore:         Carmine Cuofano                         Matricola: N86001700
Programma:      [C++]Ordinamento di un array mediante il metodo di Bubble sort
Data:           16/03/2015


To Do:
-----------------------------------------------------------------------------------------------------*/

void swap (int &a, int &b);

int main () {
    int Array[100];
    int N,i,j;

    cout <<"Bubble Sort in C++\n\n" ;

    //Definisco e riempo l`Array
    cout <<"Inserisci la lunghezza del`Array:  ";
    cin >> N;

    for (i=0; i<N; i++){
        cout << "Inserisci il valore di A["<<i<<"]:  ";
        cin >> Array[i];
    }

    //Bubble Sort
    swap (Array[0], Array[1]);

    //Stampo l`Array
    for (i=0; i<N; i++){
        cout << "A["<<i<<"]:  "<<Array[i]<<"\n";
    }

    return 0;
}

void swap (int &a, int &b){
    int App;

    App = a;
    a = b;
    a = App;
}
