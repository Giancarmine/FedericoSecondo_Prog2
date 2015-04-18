/*=====================================================================
Autore : Martin De Luca
Data   : 19/11/2012

Copia un file di testo in un altro file di testo , tutto in minuscolo.
---------------------------------------------------------------------*/
FileCopiaMinuscolo (char Nome[],FILE *Pf,char Name[],FILE *Xf)
{
    char Testo [800] ;
    char Copia [600] ;
    char Buf   [300] ;
    char Buff  [300] ;
    int  I           ;
    
    sprintf(Buf,"%s.txt",Nome); //Unisco due stringhe in una nuova stringa
    Pf = fopen(Buf,"r");
    sprintf(Buff,"%s.txt",Name); //Unisco due stringhe in una nuova stringa
    Xf = fopen(Buff,"w");
    
    I=0;
    if(Pf)
    {   while(I < 200 && fgets(Testo,80,Pf) != NULL )
        {   
            
            I++;i
        }     
    }
    fclose(Pf);
    fclose(Xf);
    
}
