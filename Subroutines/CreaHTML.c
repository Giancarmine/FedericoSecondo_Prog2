/*------------------------------------------------------------------------------
Questa sub, permette di creare i tag di apertura di un documento HTML.
La subroutine da la possibilità di scegliere il nome del file , il titolo della 
pagina ed un colore per lo sfondo . 

Come valore di uscita c'è un puntatore a file .

La sub rimane aperto il file poichè è possibile che il programma debba eseguire 
altro sul file, uan volta finito , sarà il compito di un'altra subroutine di 
chiudere il file .

Autore               : Martin De Luca
Data Ultima Modifica : 21 Settembre 2012 
==============================================================================*/

FILE * CreaHTML 
(   char    *Nome  ,     //Nome del File
    char    *Titolo,
    char    *Backgr
)
{
    FILE *Pf       ;      //Puntatore a File
    char Buf [300] ;      
    
    sprintf(Buf,"%s.html",Nome); //Unisco la stringa nome alla stringa ".html"
    
    Pf = fopen (Buf,"w");   //Apro il file su cui scrivere
    if (Pf)
    {
        fprintf(Pf,"<HTML> \n");
        fprintf(Pf,"<HEAD> \n");
        fprintf(Pf,"<TITLE> %s </TITLE> \n",Titolo);
        fprintf(Pf,"</HEAD>");
        fprintf(Pf,"<BODY bgcolor = %s>",Backgr);
        fprintf(Pf,"<H2 align= center> %s </H2>",Titolo);
        fprintf(Pf,"<HR><BR>");
    }
    
    return Pf ;
}
    
