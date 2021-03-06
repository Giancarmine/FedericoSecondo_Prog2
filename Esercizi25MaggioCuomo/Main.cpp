#include "Console.h"
#include "DNA.h"

using namespace std;

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Lista Ordinata
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

main()
{
    int Tasto,
        Count = 0;

    Dna *Head;
    char Key;

    Head = NULL;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "Sequenze A-T-T\n\n";

        //Stampo il menu`
        cout << "\t1 - Stampa\n";
        cout << "\t2 - Inserisci elemento\n";
        cout << "\t3 - Pop elemento (Elimina)\n";
        cout << "\t4 - Conta sequenze A-T-T\n";
        cout << "\nESC to exit";

        //Menu`
        Tasto = _getch();
        switch(Tasto)
        {
            case '1' ://Stampa
                system(CLEAR);
                if (Head != NULL){
                    cout << "Gli Elementi del DNA sono:\n";
                    Stampa_DNA(Head);
                }
                else{
                    cerr << "La Lista e`vuota";
                }
                _getch();
                break;
            case '2' :
                system(CLEAR);
                do{
                    //Definisci l'elemento a cui accodare l'elemento
                    cout << "Inserisci il valore del elemento da aggiungere [A-G-T-C]: ";
                    cin >> Key;
                }
                while(Key != 'A' && Key != 'a' &&
                      Key != 'G' && Key != 'g' &&
                      Key != 'T' && Key != 't' &&
                      Key != 'C' && Key != 'c');
                Head = Push_DNA(Head, Key);
                _getch();
                break;
            case '3' ://Pop dallo stack
                system(CLEAR);
                //Se la lista esiste
                if (Head != NULL){
                    Head = Pop_Dna(Head);
                }
                else{
                    cerr << "La Lista e` vuota";
                }
                _getch();
                break;
            case '4' ://
                system(CLEAR);
                //Se la lista esiste
                if (Head != NULL){
                    Conta_Seq_ATT(Head, Count);
                    cout << "Sono stati trovati: " << Count << " sequenze A-T-T";
                }
                else{
                    cerr << "La Lista e` vuota";
                }
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}

#include "DNA.cpp"
