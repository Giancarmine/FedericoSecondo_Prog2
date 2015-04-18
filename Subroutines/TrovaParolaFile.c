/*=====================================================================
Autore : Martin De Luca
Data   : 19/11/2012

Cerca una stringa di grandezza N all'interno di un file di testo,
se la trova ritorna la posizione dove l'ha trovata.
---------------------------------------------------------------------*/
int TrovaParolaFile (char Parola [],char Nome[],FILE *Pf)
{
    int  Trov ,      //Flag
         LunP ,      //Lunghezza Parola
         I    ;      //Indice
    char Testo [800] ;
    char Buf   [300] ;
        
    Trov = -1 ; //Flag come un caso "impossibile"
    LunP = strlen(Parola);  // Lunghezza Parola
    
    sprintf(Buf,"%s.txt",Nome); //Unisco due stringhe in una nuova stringa
    Pf = fopen(Buf,"r");
    
    if(Pf)
    {    while(fgets(Testo,800,Pf) != NULL)
         {
            for(I=0; I<800-LunP && Trov<0 ; I++)
            {           //strcmp : String Compare
                //Comparo le due stringhe della lunghezza
                //della parola da trovare se le stringhe
                //sono uguali ritorno 0
                if(strncmp(Parola,Testo+I,LunP)==0)
                    Trov = I;
            }
        }
    }

return Trov ;

}
