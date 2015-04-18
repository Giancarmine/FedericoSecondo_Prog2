/*------------------------------------------------------------------------------
Questa sub permette di convertire in una qualsiasi base , un numero inserito 
dall'utente .
    
Viene calcolato il resto della divisione del valore in entrata per la sua base.
Se il resto è maggiore di 9 c'è bisogno di adottare uno stratagemma per 
visualizzare le lettere : Si ricorre alla possibilità di stampare un carattere 
dato un valore (printf("%c");) e ad un pò di matematica per individuare il 
valore del codice ASCII corretto.
________________________________________________________________________________
Codice ASCII

48-58 = 0-9 --------------------------------------- 65-90 = A-Z
________________________________________________________________________________

Il resto sarà uno dei valori che andranno a comporre il numero , il numero viene 
diviso per la base ed il valore di qusta divisione va in Num.

Viene stampato il resto e viene decrementata la colonna .

Il procedimento continua finchè il Numero non è 0.

Autore               : Martin De Luca
Data Ultima Modifica : 2/10/2012

==============================================================================*/
void Convertitore2 (int Num , int Base)
{
    int Resto , Col ;
    
    Col = 70 ;

    do
    {   Resto=Num%Base;
        if(Resto>9) Resto+=55;
        else        Resto+=48;
        Gotoxy(Col,8);
        printf("%c",Resto);
        Num = Num/Base;
        Col = Col - 1 ;
    }
    while (Num>0);
}

