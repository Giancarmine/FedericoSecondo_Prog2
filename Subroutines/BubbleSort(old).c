/*==============================================================================

Il programma ordina in ordine crescente gli elementi di un vettore, secondo il
metodo di ordinamento che prende il nome di "BubbleSort".
Il "Bubble Sort" funziona in modo tale da controllare le coppie consecutive.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 27/04/2012
------------------------------------------------------------------------------*/

void BubbleSort
(
    int V[],    //Vettore
    int Num    //Grandezza Vettore
)
{
    int Fine    ,
        Sc      ,
        I       ,
        App     ;


    for( Fine = 0 ; Fine < Num-1 ; Fine = Sc )
        for( Sc= I= Num-1  ; I > Fine ; I--)
            if (V[I] < V [I+1])
            {
                App    =  V[I]  ;
                V[I]   =  V[I-1];
                V[I-1] =  App   ;
                Sc     =  I ;
            }
}
