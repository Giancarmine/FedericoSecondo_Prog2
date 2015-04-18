/*==============================================================================
Autore : Martin De Luca
Data   : 26/10/2012

Insertion Sort  

La subroutine ordina gli elementi di un vettore secondo il seguente metodo :

Dato il vettore con i dati esamina ogni volta un dato dal secondo all'ultimo.
Ogni dato è confrontato con i precedenti che avanzano fino a liberare la 
posizione giusta.
------------------------------------------------------------------------------*/
InsertionSort (int V[] , int N)
{
    int     I   , //Indice
            P   , //Indice che punta al precedente
            App ; //Variabile di Appoggio
            
    for(I=1 ; I<N ; I++)
    {
        for(App = V[I] , P=I ; App<V[P-1] && P>0 ; P--)
            V[P] = V[P-1];
        V[P] = App ;
    }
}
