/*==============================================================================
Questa sub permette di convertire in una qualsiasi base minore di 10, un numero 
inserito dall'utente .

Questa subroutine non utilizza né vettori né Gotoxy, ma più semplicemente le 
potenze del 10 per dare un peso al valore del resto uscito dalla divisione tra
Num e Base .

ES.

12(10) ----> ? (4)

12 / 4 = 3  --- R=0 --- Pot = 10^0 = 1  ---> 1•0 = 0
3 / 4  = 0  --- R=3 --- Pot = 10^1 = 10 ---> 10•3 = 30

12(10) ----> 30 (4)
------------------------------------------------------------------------------*/

int Convertitore3 (int Num , int Base)
{
    int Out , C , Resto;
    
    if(Base > 9)    
    printf("Questa versione del programma non supporta questa base");
    
    else
    {
        Out = 0 ;
        
        for (C=0 ; Num>0 ; C++)
        {   Resto = Num%Base ;
            if(Resto>0)   Out+=Potenza(10,C)*Resto;
            Num = Num/Base;
        }
    }

return Out ;
}
