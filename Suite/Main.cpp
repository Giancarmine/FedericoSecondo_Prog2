#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Suite.h"

using namespace std;

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Suite Array & Matrici
Data    		: 23/03/2015

To Do:
-----------------------------------------------------------------------------------------------------*/

main(){
    int *A, *B;
    int **M, **K, **R;
    int N, X, Y, i, j, numero, Prodotto;

    cout << "Suite - Esempio di una suite di programmi su Matrici e Vettori: \n\n";

    cout<<"\t\t1-Prodotto Scalare"<<endl;
    cout<<"\t\t2-Prodotto Matrice x Array"<<endl;
    cout<<"\t\t3-Prodotto Matrice x Matrice"<<endl;
    cout<<"\t\t4-Matrice trasposta"<<endl;
    cout<<"\nScegli un Azione: ";
    cin>>numero;
    switch(numero)
    {
        case 1:
            cout<<"\n\tHai scelto Prodotto Scalare."<<endl;

            //Genero gli array necessari dinamicamente
            cout << "\nDefinisci la lunghezza degli Array: ";
            cin >> N;

            cout << "\nRiempi il primo Array:\n";
            A = new int[N];
            for (i=0; i<N; i++){
                cout << "A[" << i << "]: ";
                cin >> A[i];
            }
            cout << "\nRiempi il Secondo Array:\n";
            B = new int[N];
            for (i=0; i<N; i++){
                cout << "B[" << i << "]: ";
                cin >> B[i];
            }

            //Richiamo la funzione richiesta
            Prodotto = Prodotto_Scalare (A, B, N);

            //Stampo i risultati
            cout << "\n\nil prodotto Scalare e`: " << Prodotto << "\n\n";

            //Deallocazione della memoria dinamica
            if (A) delete []A;
            if (B) delete []B;
            system("PAUSE");
            break;

        case 2:
            cout<<"\n\tHai scelto Prodotto Matrice x Array."<<endl;

            //Genero gli elementi necessari dinamicamente
            cout << "\nDefinisci le righe della Matrice: ";
            cin >> X;

            cout << "\nDefinisci la Colonne della Matrice: ";
            cin >> Y;

            cout << "\nRiempi la Matrice:\n";
            M = new int*[X];
            for (i=0; i<X; i++){
                M[i]= new int[Y];
            }

            B = new int[X];

            for (i=0; i<X; i++){
                for (j=0; j<Y; j++){
                    cout << "A[" << i << "][" << j << "]: ";
                    cin >> M[i][j];
                }
            }

            cout << "\nDefinisci la lunghezza del Array: ";
            cin >> N;

            cout << "\nRiempi l`Array:\n";
            A = new int[N];
            for (i=0; i<N; i++){
                cout << "A[" << i << "]: ";
                cin >> A[i];
            }

            //Richiamo la funzione richiesta
            Prodotto_Matrice_Array (M, A, B, X, Y, N);

            //Stampo i risultati
            cout << "\n\nIl Prodotto e`: \n";
            for (i=0; i<X; i++){
                cout << "B[" << i << "]: " << B[i] << "\n";
            }

            //Deallocazione della memoria dinamica
            if (A) delete []A;
            if (B) delete []B;
            for (int i=0; i<Y; i++){ // dealloca gli n vettori che sono le righe della matrice
                delete [] M[i];
            }
            delete [] M;
            system("PAUSE");
            break;

        case 3:
            cout<<"\n\tHai scelto Prodotto Matrice x Matrice."<<endl;

            //Genero gli elementi necessari dinamicamente
            cout << "\nDefinisci le righe delle Matrice: ";
            cin >> X;

            cout << "\nDefinisci la Colonne delle Matrice: ";
            cin >> Y;

            cout << "\nRiempi la Prima Matrice:\n";
            M = new int*[X];
            for (i=0; i<X; i++){
                M[i]= new int[Y];
            }
            for (i=0; i<X; i++){
                for (j=0; j<Y; j++){
                    cout << "M[" << i << "][" << j << "]: ";
                    cin >> M[i][j];
                }
            }
            cout << "\nRiempi la Seconda Matrice:\n";
            K = new int*[X];
            for (i=0; i<X; i++){
                K[i]= new int[Y];
            }
            for (i=0; i<X; i++){
                for (j=0; j<Y; j++){
                    cout << "K[" << i << "][" << j << "]: ";
                    cin >> K[i][j];
                }
            }
            //Alloco solo la matrice risultante
            R = new int*[X];
            for (i=0; i<X; i++){
                R[i]= new int[Y];
            }

            //Richiamo la funzione richiesta
            Prodotto_Matrice_Matrice (M, K, R, X, Y);

            //Stampo i risultati
            cout << "\n\nIl Prodotto e`: \n";
            for (i=0; i<X; i++){
                for (i=0; j<Y; j++){
                    cout << "R[" << i << "][" << j << "]: " << R[i][j] << "\n";
                }
            }

            //Deallocazione della memoria dinamica
            if (A) delete []A;
            if (B) delete []B;
            for (int i=0; i<Y; i++){ // dealloca gli n vettori che sono le righe della matrice
                delete [] M[i];
            }
            delete [] M;
            system("PAUSE");
            break;
            break;

        case 4:
            cout<<"Hai scelto 4"<<endl;
            break;
    }
}
