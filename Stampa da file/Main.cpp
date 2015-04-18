#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

using namespace std;

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Stampa da File
Data    		: 13/04/2015

To Do:
-----------------------------------------------------------------------------------------------------*/

main(){
    char ch;
    char NomeFile[200];

    cout << "Esempio di lettura e stampa da un file: \n\n";
    cout << "Inserisci il nome del File: ";
    cin >> NomeFile;
    cout << "\n";
    ifstream OpenFile(NomeFile);
    if (OpenFile){
        while (!OpenFile.eof()){
            OpenFile.get(ch);
            cout << ch;
        }
        OpenFile.close();
    }
    else{
        cout << "\tERROR: Non e`stato possibile aprire il file!\n\n";
    }
}
