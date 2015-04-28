#define  ESC        27
#define  INVIO      13

typedef struct{
    char nome [100];
    char codice_id [100];
    int quantita;
} ARTICOLO;

typedef struct{
    ARTICOLO lista [30];
    int numero;     //Numero articoli nella lista
} LISTA_ARTICOLI;


//Prototipi di funzione
void Aggiungi (LISTA_ARTICOLI *List, ARTICOLO *NewArt);
void Elimina (LISTA_ARTICOLI *List);
void Stampa (LISTA_ARTICOLI *List);
int Numero_magg_di_10 (LISTA_ARTICOLI *List, int i);
