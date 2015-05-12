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
        cout << "\t2 - Inserisci in coda\n";
        cout << "\t3 - Elimina elemento\n";
        cout << "\t4 - Inserisci dopo elemento\n";
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
            case '2' ://Inserisci in coda
                system(CLEAR);
                Head = Aggiungi_Lista(Head);
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
            case '4' ://Inserimento ordinato
                system(CLEAR);
                //Se la lista esiste
                if (Head != NULL){
                    //Definisci l'elemento a cui accodare l'elemento
                    cout << "Inserisci il valore del elemento a cui accodarsi: ";
                    cin >> Key;
                    Head = Add_Key_Lista(Head, Key, Trovato);
                    if (Trovato == 0){
                        cout << "Elemento NON TROVATO!";
                    }
                }
                else{
                    cout << "La Lista e` vuota - Inserisci in coda!";
                }
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}

#include "Lista.cpp"
