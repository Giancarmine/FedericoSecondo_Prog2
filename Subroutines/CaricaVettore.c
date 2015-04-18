/*==============================================================================
Carica dei valori da tastiera e li mette nelle varie "celle di memoria" del 
vettore .

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 06/04/2012
------------------------------------------------------------------------------*/

int ChiediNumero (char [],int,int);

void CaricaVettore
(
    int W[],    //Vettore
    int M      // Grandezza vettore
)
{
    int I;      //Indice
    
    for ( I = 0 ; I < M ; I++)
        W[I] = ChiediNumero ("Dammi un Valore",1,1000);
}
