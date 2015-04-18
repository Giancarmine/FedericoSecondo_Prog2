/*===============================ATTESA=========================================

Il programma attende che gli venga premuto il tasto ESC (Codice ASCII 27) oppure
il tasto 'r' (ASCII : 114) o il tasto 'R' (ASCII : 82) , leggendo ad ogni ciclo 
la tastiera, ed attendendo che venga premuto un tasto, che se corretto permette 
l'uscita dal ciclo, se sbagliato fa ripetere il ciclo.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 05/04/2012
------------------------------------------------------------------------------*/

void _Attesa (int Tasto)
{
    #define ESC 27
    
    do
    {   TextColor(0xF);
        Tasto = _getch();
        Clrscr();
    }
    while (Tasto != ESC && Tasto != 'r' && Tasto != 'R') ;
}
