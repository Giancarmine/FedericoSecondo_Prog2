/*------------------------------------------------------------------------------
Stampa su di un file di testo una cera quantità (scelta dall'utentedi numeri 
float generati casualmente.

Data Ultima Modifica : 21/09/2012
==============================================================================*/
void FFVRand 
(   FILE    *Pf,        //Puntatore a file
    char    Name [],    //Nome File
    int     Fine       //Numero di elementi che vogliamo stampare nel file
)
{
    float   Num ;
    int     I   ;
    
    srand(time(NULL));
    
    Pf = fopen (Name,"w");
    for(I=0;I<Fine;I++)
    {   Num = 0 + 3 ((float)rand()/(float)30000) ;
        fprintf(Pf,"%4.4f\n",Num);
    }
    fclose(Pf);
}
    
        
