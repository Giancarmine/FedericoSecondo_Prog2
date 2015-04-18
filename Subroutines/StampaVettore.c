/*============================StampaVettore====================================

Il programma stampa i valori contenuti nelle celle di un vettore .
V[] è il vettore ;
N   è la grandezza del vettore ;
I   è un indice ;

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 07/04/2012
------------------------------------------------------------------------------*/



void StampaVettore 
(
    int V[],     // Vettore 
    int N       //  Lunghezza Vettore
)
{
    int I;
    
    for( I = 0 ; I < N ; I++ )
        printf("%3d",V[I]);
}
