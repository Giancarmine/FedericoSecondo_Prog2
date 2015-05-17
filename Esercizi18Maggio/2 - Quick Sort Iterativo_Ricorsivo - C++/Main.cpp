#include "Console.h"
#include "Ordinamenti.h"

using namespace std;

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: QuickSort Iterativo Ricorsivo
Data    		: 17/05/2015

-----------------------------------------------------------------------------------------------------*/

main()
{
    srand((unsigned)time(0));
    int Tasto,
        Da,
        A,
        N,
        *Array;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "QuickSort \n\n";

        //Stampo il menu`
        cout << "\t1 - Genera Vettore Random\n";
        cout << "\t2 - QuickSort iterativo\n";
        cout << "\t3 - QuickSort ricorsivo\n";
        cout << "\nESC to exit";

        //Menu`
        Tasto = _getch();
        switch(Tasto)
        {
            case '1' ://Genera Random
                system(CLEAR);
                cout << "Definisci la grandezza del Array da generare: ";
                cin >> N;
                //Alloco l'Array dinamicamente
                Array = new int[N];
                cout << "Minimo valore generabile: ";
                cin >> Da;
                cout << "Massimo valore generabile: ";
                cin >> A;
                Array_Random_Int (Array, N, Da, A);
                cout << "Array Generato";
                _getch();
                break;
            case '2' :
                system(CLEAR);
                cout << "Array prima del'ordinamento:\n";
                Stampa_Array_int (Array, N);
                QuickSort_Ricorsivo (Array, 0, N);
                cout << "\nArray dopo l'ordinamento:\n";
                Stampa_Array_int (Array, N);
                _getch();
                break;
            case '3' :
                system(CLEAR);
                cout << "Array prima del'ordinamento:\n";
                Stampa_Array_int (Array, N);

                cout << "Array dopo l'ordinamento:\n";
                Stampa_Array_int (Array, N);
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}

#include "Ordinamenti.cpp"
