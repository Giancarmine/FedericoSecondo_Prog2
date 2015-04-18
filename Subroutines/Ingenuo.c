/*==============================================================================

Il programma ordina in ordine crescente gli elementi di un vettore, secondo il 
metodo di ordinamento che prende il nome di "Ingenuo" poichè è il più semplice.
"L'Ingenuo" , funziona in modo tale che ogni elemento viene controntato con i 
successivi.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 27/04/2012
------------------------------------------------------------------------------*/

void Ingenuo
(
  int   Vett[],
  int   MAX   
)
{
int X,
    J,
    App ;
   
for ( X = 0 ; X < MAX-1 ; X++) 
    for ( ; X+1 < MAX ; (X+1)++)
        if (Vett[X] > Vett[X+1])
        {   App       = Vett[X]  ;
            Vett[X]   = Vett[X+1];
            Vett[X+1] = App      ;
        }
        
}
