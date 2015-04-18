#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <String>

using namespace std;

typedef struct{
    int Codice;
    string Nome;
    float Offerta;
}Fornitore;

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Struct Fornitori
Data    		: 30/03/2015

To Do:
Generare una lista di fornitori e trovare il prezzo minore
-----------------------------------------------------------------------------------------------------*/

main(){
    Fornitore *A;
    int numero, N, i;

    cout << "Fornitori - Generati N di fornitori Trova l`Offerta migliore: \n\n";

    cout<<"\t\t1-Inserisci un fornitore"<<endl;
    cout<<"\t\t2-Trova l`offerta migliore"<<endl;
    cout<<"\nScegli un Azione: ";
    cin>>numero;

    switch(numero)
    {
        case 1:
            cout<<"\n\tHai scelto di inserire un Fornitore."<<endl;

            //Genero gli array necessari dinamicamente
            cout << "\nInserisci il numero di fornitori che vuoi inserire: ";
            cin >> N;

            A = new Fornitore[N];
            for (i=0; i<N; i++){
                cout << "\nInserisci le specifiche del Fornitore[" << i+1 <<"]\n";
                cout << "\tCodice: ";
                cin >> A[i].Codice;
                cout << "\tNome: ";
                cin >> A[i].Nome;
                cout << "\tOfferta: ";
                cin >> A[i].Offerta;
            }
            break;

        case 2:
            cout<<"\n\tHai scelto 'Trova il minimo'."<<endl;
            break;
    }
}
