
typedef struct nodo{
    int info;
    struct nodo *link;
} Nodo;

void Stampa_Lista(Nodo* Head);
Nodo* Aggiungi_Lista(Nodo* Head);
Nodo* Elimina_Lista(Nodo* Head, int Key, int &Trovato);
Nodo* Add_Key_Lista(Nodo* Head, int Key, int &Trovato);
Nodo* Aggiungi_Lista_Ordinata_Iterativo(Nodo* Head, int Key);
Nodo* Aggiungi_Lista_Ordinata_Ricorsivo(Nodo* Head, int Key);
