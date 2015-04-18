/*==============================================================================
Converte i Numeri dalla base DECIMALE a quella BINARIA .

Autori                : Martin De Luca - Giancarmina Cuofano
Data Ultima Modifica  : 05/04/2012
------------------------------------------------------------------------------*/

void DecBin 
(
    int Dec //Numero di input in decimale
)
{   
    int Peso; //Variabile che contine i pesi della potenza del due
    
    Peso = 1;
    
    while(Peso*2<=Dec)          Peso=Peso*2;
    Gotoxy(10,5);
    
    do
    {
        if (Dec>=Peso)
        {    printf("1");       Dec = Dec-Peso;
        }
        else printf("0");

        Peso = Peso/2;
    }
    while(Peso>0);
}
        
        
        
        
