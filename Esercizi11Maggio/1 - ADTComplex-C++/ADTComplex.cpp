#include "Console.h"
#include "Complex.cpp"

using namespace std;

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: ADTComplex
Data    		: 19/04/2015

-----------------------------------------------------------------------------------------------------*/

int main()
{
    int Tasto;
    Complex X, Y, Z;

    //Title
    cout << "ADT Complex\n\n";
    //Var Attribuction
    cout << "Definire X\n";
    cout << "\tReale X: ";
    cin >> X.Re;
    cout << "\tImmaginario X: ";
    cin >> X.Im;

    cout << "\nDefinire Y\n";
    cout << "\tReale Y: ";
    cin >> Y.Re;
    cout << "\tImmaginario Y: ";
    cin >> Y.Im;

    do
    {
        //Pulisco lo schermo -Win/Linux-
        system(CLEAR);

        //Title
        cout << "ADT Complex\n\n";

        //Stampo il menu`
        cout<<"\t1 - Somma\n";
        cout<<"\t2 - Sottrazione\n";
        cout<<"\t3 - Moltiplicazione\n";
        cout<<"\t4 - Divisione\n";
        cout<<"\nESC to exit";

        //Menu`
        Tasto=_getch();
        switch(Tasto)
        {
            case '1' :
                system(CLEAR);
                SommaComplex (X, Y, Z);
                cout<<"La somma Z e`:";
                cout<<"\n\tReale: "<< Z.Re;
                cout<<"\n\tImmaginario: "<< Z.Im;
                _getch();
                break;
            case '2' :
                system(CLEAR);
                SottrazioneComplex (X, Y, Z);
                cout<<"La Sottrazione Z e`:";
                cout<<"\n\tReale: "<< Z.Re;
                cout<<"\n\tImmaginario: "<< Z.Im;
                _getch();
                break;
            case 3 :
                system(CLEAR);
                MoltiplicazioneComplex (X, Y, Z);
                cout<<"La Moltiplicazione Z e`:";
                cout<<"\n\tReale: "<< Z.Re;
                cout<<"\n\tImmaginario: "<< Z.Im;
                _getch();
                break;
            case 4 :
                system(CLEAR);
                DivisioneComplex (X, Y, Z);
                cout<<"La Divisione Z e`:";
                cout<<"\n\tReale: "<< Z.Re;
                cout<<"\n\tImmaginario: "<< Z.Im;
                _getch();
                break;
        }
    }
    while(Tasto != ESC);
}
