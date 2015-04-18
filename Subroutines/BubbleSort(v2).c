/*====================================================================
Autore : Martin De Luca
Data   : 24/10/2012

Questa subroutine ordina i valori in un vettore secondo la seguente
procedura : Ogni elemento (tranne l'ultimo) viene confrontato con il 
successivo : se non sono in ordine li scambiamo.

L'elemento più pesante slitta alla fine del vettore.

Ripetiamo il procedimento ignorando la parte finale del vettore già 
sistemata.

Se non si eseguono scambi il vettore è già ordinato.
---------------------------------------------------------------------*/
BubbleSort (int V[],int N)
{
    int Inizio  ,  // Inizio Vettore
        Fine    ,  // Fine Vettore
        I       ,  // Indice 
        Scambio ,  // Individua la posizione dell'ultimo scambio
        Ap      ;  // Variabile di appoggio

    
    for(Inizio = 0, Fine = N-1 ; Fine > Inizio ; Fine=Scambio)
        for(I = Scambio = Inizio ; I < Fine ; I++)
        {
            if(V[I]>V[I+1]) //Crescente
            {
                Ap     = V[I]   ;
                V[I]   = V[I+1] ;
                V[I+1] = Ap     ;
                Scambio = I     ;
            }

        }
}
