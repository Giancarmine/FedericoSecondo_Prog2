#include "Console.h"
using namespace std;
#include "Music.h"

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Lista Ordinata
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

main()
{
    int Tasto,
        Costo = 0;

    Playlist* Head;
    string Key, NomeFile;

    Head = NULL;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "Music PLAYLIST\n\n";

        //Stampo il menu`
        cout << "\t1 - Stampa PLAYLIST\n";
        cout << "\t2 - Genera PLAYLIST\n";
        cout << "\t3 - Costo PLAYLIST\n";
        cout << "\t4 - Aggiorna PLAYLIST [INCOMPLETA]\n";
        cout << "\nESC to exit";

        //Menu`
        Tasto = _getch();
        switch(Tasto)
        {
            case '1' : // Stampa PLAYLIST
                system(CLEAR);
                //Se la PLAYLIST esiste
                if (Head != NULL){
                    Stampa_PLAYLIST (Head);
                }
                else{
                    cerr << "La PLAYLIST e` vuota";
                }
                _getch();
                break;
            case '2' : // Genera PLAYLIST
                system(CLEAR);
                if (Head == NULL){
                    Head = new Playlist;
                    Head->Link = NULL;
                }
                NomeFile = 'Music.txt';
                Head = My_Music (NomeFile, Head);
                _getch();
                break;
            case '3' : // Costo PLAYLIST
                system(CLEAR);
                //Se la PLAYLIST esiste
                if (Head != NULL){
                    Costo = 0;
                    Reproduction_time (Head, Costo);
                    cout << "Il costo della PLAYLIST e`: " << Costo << " cent" << endl;
                }
                else{
                    cerr << "La PLAYLIST e` vuota";
                }
                _getch();
                break;
                /*
            case '4' ://
                system(CLEAR);
                //Se la lista esiste
                if (Head != NULL){

                }
                else{
                    cerr << "La Lista e` vuota";
                }
                _getch();
                break;
                */
        }
    }
    while(Tasto != ESC);
}

#include "Music.cpp"
