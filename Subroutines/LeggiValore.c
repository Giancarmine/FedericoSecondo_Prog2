/*==============================================================================
Il Programma legge i valori di un file con la funzione fgets , che si ferma o 
quando incontra "da Capo" o quando incongtra NULL e cioè la fine del file.

La funzione LeggiValore ha come valore di ingresso il nome del file da leggere , 
e cioè un vettore di char.

Autori                  : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica    : 14/05/2012
------------------------------------------------------------------------------*/

float LeggiValore(char Nome[])
{
    float   H       ;
    char    Rigo [] ;
    FILE    *Pf     ;
    
    H = 0 ;
    
    Pf = fopen (Nome,"r");
    
    if(Pf)
    {   
        if(fgets(Rigo,100,Pf))
            H = atof (Rigo) ;
        fclose(Pf)
    }
    
    return H ;
}
