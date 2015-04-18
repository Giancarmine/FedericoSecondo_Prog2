/*============================Random Vettore====================================

Il programma genera numeri casuali in due vettori.


Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 27/04/2012
------------------------------------------------------------------------------*/


void VRandom
(
    int P[],     // Vettore
    int N  ,    //  Lunghezza Vettore
    int Da ,   //   Valore più piccolo generabile
    int A  ,
)
{


    //NOTA : Intervallo di Random = da "A" ad "A-Da"

    for (I=0; I<N; I++)
        P[I] = Da+rand()%A ;
}
