/*==============================================================================
La subroutine calcola tutti i numeri primi fino ad N .

V |2|3|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_| MAX
   
# - Vengono Scritte Le prime due celle del vettore con i primi due numeri primi
# - Vengono usati in totale 2 indici ed 1 variabile flag : 
    
    Pos = Posizione nel quale verrà stampato il valore (P parte da V[2], poichè
    le prime due celle del vettore sono occupate dai primi due numeri primi)
    
    K = Si sposta e confronta il valore di Num con le precedenti celle del 
    vettore(K parte da 0 ad ogni ciclo di controllo di un numero) finchè è
    minore o uguale al valore della radice di Num e finchè la flag è 1 .
    
    Flag = 0 (Non Primo) , Flag = 1 (Numero Primo).
    
    Num = Si incrementa fino ad arrivare ad Lim o finchè non finisce il vettore
    
    Rad = Contiene il valore della radice di Num
    

Autore : Martin De Luca 
Data Ultima Modifica : 27/09/2012
------------------------------------------------------------------------------*/

void NumeriPrimi (int V[],int MAX,int Lim)
{
    int Pos , Num , K , Rad , Flag ;
    
    V[0] = 2 ;
    V[1] = 3 ;
    
    for(Pos=2,Num=5 ; Pos<MAX && Num<Lim ; Num++)
    {
        Rad = sqrt(Num);
        for(K=0,Flag=1 ; V[K]<=Rad && Flag==1 ; K++)
        {   if(Num%V[K]==0)   Flag=0;
        }
        if(Flag==1)
        {   V[Pos] = Num ;      Pos++ ;
        }
    }
}
                
