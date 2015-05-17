#include "Console.h"
#include "Lista.h"

using namespace std;

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Lista
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

main()
{
    int Tasto,
        Key,
        Trovato = 0;

    Nodo *Head;

    Head = NULL;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "Inserimento Ordinato in lista\n\n";

        //Stampo il menu`
        cout << "\t1 - Stampa\n";
        cout << "\t2 - Inserisci in ordine iterativo\n";
        cout << "\t3 - Elimina elemento\n";
        cout << "\t4 - Inserisci in ordine ricorsivo\n";
        cout << "\nESC to exit";

        //Menu`
        Tasto = _getch();
        switch(Tasto)
        {
            case '1' ://Stampa
                system(CLEAR);
                if (Head != NULL){
                    cout << "Gli Elementi presenti in lista sono:\n";
                    Stampa_Lista(Head);
                }
                else{
                    cout << "La Lista e` vuota";
                }
                _getch();
                break;
            case '2' :
                system(CLEAR);
                //Definisci l'elemento a cui accodare l'elemento
                cout << "Inserisci il valore del elemento da aggiungere: ";
                cin >> Key;
                Head = Aggiungi_Lista_Ordinata_Ricorsivo(Head, Key);
                _getch();
                break;
            case '3' ://Elimina un elemento definito dal utente
                system(CLEAR);
                //Se la lista esiste
                if (Head != NULL){
                    //Definisci l'elemento da eliminare
                    cout << "Inserisci il valore da eliminare: ";
                    cin >> Key;
                    Trovato = 0;
                    Head = Elimina_Lista(Head, Key, Trovato);
                    if (Trovato == 0){
                        cout << "Elemento NON TROVATO!";
                    }
                }
                else{
                    cout << "La Lista e` vuota";
                }
                _getch();
                break;
            case '4' ://Inserimento ordinato Ricorsivo
                system(CLEAR);
                //Definisci l'elemento a cui accodare l'elemento
                cout << "Inserisci il valore del elemento da aggiungere: ";
                cin >> Key;
                Head = Aggiungi_Lista_Ordinata_Ricorsivo(Head, Key);
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}

#include "Lista.cpp"
