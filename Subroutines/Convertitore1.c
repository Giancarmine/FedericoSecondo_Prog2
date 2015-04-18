/*------------------------------------------------------------------------------
Questa sub permette di convertire in una qualsiasi base minore di 10, un numero 
inserito dall'utente .
    
Viene calcolato il resto della divisione del valore in entrata per la sua base,
(questo sarà uno dei valori che andranno a comporre il numero) , il numero viene 
diviso per la base ed il valore di qusta divisione va in Num.

Viene stampato il resto e viene decrementata la colonna .

Il procedimento continua finchè il Numero non è 0.

Autore               : Martin De Luca
Data Ultima Modifica : 2/10/2012

==============================================================================*/
void Convertitore1 (int Num , int Base)
{
    int Resto , Col ;
    
    if(Base > 9)    
    printf("Questa versione del programma non supporta questa base");
    
    else
    {
        Col = 70 ;
        
        do
        {   Resto = Num%Base;
            Num   = Num/Base;
            Gotoxy(Col,5);
            printf("%d",Resto);
            Col = Col - 1 ;
        }
        while (Num>0);
    }
}
