#define ELEMENTI 9
/*======================================================================
Autore : Martin De Luca
Data   : 27/11/2012

Il programma crea un menù di selezione per il programma.
======================================================================*/
int Menu (void)
{
    int     Col = 5 ,
            P       ,
            Tasto   ;
            
    char    *Opzioni[] = 
            {   "1          ",
                "2          ",
                "3          ",
                "4          ",
                "5          ",
                "6          ",
                "7          ",
                "8          ",
                "9          ",
            };
    
    Clrscr();
    
    for(P=0;P<ELEMENTI;P++)
    {
        Gotoxy(Col,5+P);
        printf("%s%",Opzioni[P]);
    }
    
    P=0;
    do
    {
        TextColor(0xFC);    Gotoxy(Col,5+P);    printf("%s    ",Opzioni[P]);
        
        if ((Tasto = _getch()) == 224) Tasto = _getch();
        
        TextColor(0xCF);    Gotoxy(Col,5+P);    printf("%s    ",Opzioni[P]);
        
        if(Tasto == 80) P++ ;
        if(Tasto == 72) P-- ;
        
        if(P<0)             P = ELEMENTI-1 ;
        if(P>ELEMENTI-1)    P = 0 ;
        
    }
    while(Tasto!=13);
    
    Clrscr();
    
    return P ;
}
