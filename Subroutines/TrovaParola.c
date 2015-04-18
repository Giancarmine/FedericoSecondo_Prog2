/*=====================================================================
Autore : Martin De Luca
Data   : 19/11/2012

Cerca una stringa di grandezza N all'interno di una seconda stringa,
se la trova ritorna la posizione dove l'ha trovata.
---------------------------------------------------------------------*/
int TrovaParola (char Frase[],char Parola[])
{
    int Trov ,      //Flag
        LunF ,      //Lunghezza Frase
        LunP ,      //Lunghezza Parola
        I    ;      //Indice
        
    Trov = -1 ; //Flag come un caso "impossibile"
    LunF = strlen(Frase);    //Lunghezza Frase
    LunP = strlen(Parola);  // Lunghezza Parola
    
    for(I=0; I<LunF-LunP && Trov<0 ; I++)
    {           //strcmp : String Compare
        //Comparo le due stringhe della lunghezza
        //della parola da trovare se le stringhe
        //sono uguali ritorno 0
        if(strncmp(Parola,Frase+I,LunP)==0)
            Trov = I;
    }

return Trov ;

}
