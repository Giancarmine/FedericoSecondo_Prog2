

#ifndef _console
#define _console
    #define  ESC        27
    #define  INVIO      13
    //Struttura Dati
    typedef struct playlist{
        string CD;
        int Durata_CD;
        string Nome_Brano;
        int Durata;
        struct playlist* Link;
    } Playlist;
#endif


//Protoripi
void Stampa_PLAYLIST(Playlist* Head);
Playlist* My_Music (string NomeFile, Playlist* Head);
void Reproduction_time (Playlist* Head, int &Costo);
