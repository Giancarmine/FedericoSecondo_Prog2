/*==============================================================================

Autori : Martin De Luca - Giancarmine Cuofano
Data   : 18/05/2012

La subroutine elimina un valore da un vettore.
------------------------------------------------------------------------------*/

void VettDel 
(   int     Vett [] ,       // Vettore
    int     N       ,       //Dimensioni Vettore
    int     K               //Posizione cella dato da eliminare
)
{
    int     I ;
    
    for(I = K+1 ; I<N ; I++)
        Vett[I-1] = Vett [I]
        
    N-- ;
}
