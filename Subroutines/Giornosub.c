/*==============================================================================
Programma che inserita una data dice quanti giorni sono passati dall'inizio 
dell'anno fino alla data inserita.

Autori               : Martin De Luca - Giancarmine Cuofano
Data Ultima Modifica : 06/04/2012
------------------------------------------------------------------------------*/

int Giorno (int Gio,int Mese,int Anno)
{
    int  B,
         Tot;


    Tot = Gio ;
    B   = (Anno%4!=0)? 0 : 1; //Controllo per anni bisestili con l'operatore ternario
         
    switch(Mese)
    {
        case 1 : Tot = Gio ;          break;
        case 2 : Tot =  31 + Gio;     break;
        case 3 : Tot =  59 + Gio + B; break;
        case 4 : Tot =  89 + Gio + B; break;
        case 5 : Tot = 120 + Gio + B; break;
        case 6 : Tot = 151 + Gio + B; break;
        case 7 : Tot = 181 + Gio + B; break;
        case 8 : Tot = 212 + Gio + B; break;
        case 9 : Tot = 248 + Gio + B; break;
        case 10: Tot = 273 + Gio + B; break;
        case 11: Tot = 304 + Gio + B; break;
        case 12: Tot = 334 + Gio + B; break;
    }

    return Tot;

}
