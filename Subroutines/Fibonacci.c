/*==============================================================================
Questa sub calcola la serie di Fibonacci, fino ad un numero N inserito 
dall'utente. La serie di Fibonacci è una succssione numerica , in cui ogni 
numero, è la somma dei 2 numeri precedenti. Per convenzione la successione parte
con due 1.

1 1 2 3 5 8 13 21 34 55 89 ecc...
------------------------------------------------------------------------------*/

void Fibonacci (int V [] , int N )
{
    int I ;
    
    V[0] = V[1] = 1 ;
    
    for(I=2 ; I<N ; I++)
        V[I] = V[I-1] + V[I-2];

}
