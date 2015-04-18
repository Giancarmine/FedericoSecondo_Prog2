/*==============================================================================
Crea una maschera grafica per il programma dandogli un'intestazione.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 05/04/2012
------------------------------------------------------------------------------*/

void Maschera 
(   char Titolo [],     //Vettore per inserimento titolo
    int  Colore        //Variabile per scelta del colore
)
{   int  X        ;   //Variabile per posizionamento del titolo
    
    Clrscr();
    
    TextColor(Colore);
    
    Gotoxy (0, 0);   printf ("%80s", " ");
    Gotoxy (0,24);   printf ("%80s", " ");
    
    X = 40 - strlen(Titolo)/2 ; //Calcolo Posizione Titolo
    
    Gotoxy(X , 0);   printf(Titolo);
    Gotoxy(32,24);   printf("Created by Martin De Luca");
    
    Gotoxy(1,3);
    TextColor(0x0F);
}
    
    
