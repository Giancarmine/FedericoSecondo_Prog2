#include "Console.h"
#include "Articolo.h"

using namespace std;

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Prova intercorso
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

int main()
{
    int Tasto,
        i=0,
        NumArt=0;
    ARTICOLO *NewArt;
    LISTA_ARTICOLI *List;

    List = new LISTA_ARTICOLI;
    List->numero = 0;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "Prova intercorso 27/04/2015 - Cuofano Carmine - N86001700\n\n";

        //Stampo il menu`
        cout<<"\t1 - Aggiungi un articolo alla lista\n";
        cout<<"\t2 - Stampa la lista di articoli\n";
        cout<<"\t3 - Elimina gli Articoli con quantia` 0\n";
        cout<<"\t4 - Articoli con quantita` superiore a 10\n";
        cout<<"\nESC to exit";

        //Menu`
        Tasto=_getch();
        switch(Tasto)
        {
            case '1' :
                system(CLEAR);

                //Preparo l` articolo da inserire
                NewArt = new ARTICOLO;
                cout << "\nDigita il nome del articolo da inserire: ";
                cin >> NewArt->nome;
                cout << "\nDigita il Codice_id del articolo da inserire: ";
                cin >> NewArt->codice_id;
                cout << "\nDigita il quantita` del articolo da inserire: ";
                cin >> NewArt->quantita;

                //Chiamo la funzione che lo aggiunge in coda al array
                Aggiungi (List, NewArt);
                //List->numero = List->numero+1;

                cout<<"ARTICOLO INSERITO CORRETTAMENTE!";

                _getch();
                break;
            case '2' :
                system(CLEAR);
                cout<<"Lista aggiornata degli articoli:\n\n";
                Stampa(List);
                _getch();
                break;
            case 3 :
                system(CLEAR);
                Elimina (List);
                cout<<"Articoli con quantita` 0 ELIMINATI!";
                _getch();
                break;
            case 4 :
                system(CLEAR);
                NumArt = Numero_magg_di_10(List , i);
                cout<<"Gli Articoli con una quantità maggiore di 10 sono: " << NumArt;
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}

#include "Articolo.cpp"
