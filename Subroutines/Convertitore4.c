/*------------------------------------------------------------------------------
Questa sub permette di convertire in una qualsiasi base , un numero inserito 
dall'utente , tutti i valori vengono inseriti in un vettore .

Viene azzerato il vettore per "pulirlo".

Viene fatto partire un contatore (I) dalla fine del vettore .
    
Viene calcolato il resto della divisione del valore in entrata per la sua base.
Se il resto è maggiore di 9 c'è bisogno di adottare uno stratagemma per 
visualizzare le lettere : Si ricorre alla possibilità di stampare un carattere 
dato un valore (printf("%c");) e ad un pò di matematica per individuare il 
valore del codice ASCII corretto.
________________________________________________________________________________
Codice ASCII

48-58 = 0-9 --------------------------------------- 65-90 = A-Z
________________________________________________________________________________

Il resto sarà uno dei valori che andranno a comporre il numero .
Il resto viene memorizzato all'interno del vettore.
Il numero viene diviso per la base ed il valore di qusta divisione va in Num.


Il procedimento continua finchè il Numero non è 0 o finisce il vettore e quindi
I arriva a 0 .

Viene stampato il vettore.

Autore               : Martin De Luca
Data Ultima Modifica : 2/10/2012

==============================================================================*/
void Convertitore4 (int Num , int Base , char V[],int MAX)
{
    int Resto , I ;
    
    for(I=0;I<MAX;I++)   V[I]=0;
    
    I   = MAX-1  ;

    do
    {   Resto=Num%Base;
        if(Resto>9) Resto+=55;
        else        Resto+=48;
        V[I]= Resto ;
        I--;
        Num = Num/Base;
    }
    while (Num>0 && I>0);
    
    Gotoxy(5,16);
    
    for(I=0;I<50;I++)   printf("%c",V[I]);
}
