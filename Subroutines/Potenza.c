/*==============================================================================
Esegue la potenza di un numero.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 05/04/2012
------------------------------------------------------------------------------*/
int Potenza 
(
    int Base,       //Base Della Potenza
    int Esp        // Esponente della Potenza
)
{
    int     I   ,       //Contatore per cicli   
            Out ;      // Risultato della Potenza
    
    Out = Base ;
    I   = 0 ;
    
    if(Esp>1)
        for( Out = 1 ; I < Esp ;I++ )      
            Out = Out * Base ;
    
    if(Esp==0)      Out = 1;

    return Out ;
}
