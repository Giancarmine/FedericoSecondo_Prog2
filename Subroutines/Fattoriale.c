/*==============================================================================
Questa sub permette di calcolare il fattoriale di un numero N inserito 
dall'utente. Il fattoria è il prodotto dei successivi numeri fino ad un numero
N . Per convenzione, 0! = 1 .
essendo N una copia del valore d'entrata, e quindi una variabile temporanea,
ci risparmiamo una variabile e la utilizziamo come contatore.
------------------------------------------------------------------------------*/

int Fattoriale (int N)
{
    int F ;     //Fattoriale
    
    for(F=1 ; N>1 ; N--)
        F *= N ;
        
    return  F;
}
