
typedef struct nodo{
    int info;
    struct nodo *link;
} Nodo;

void Stampa_Lista(Nodo* Head);
Nodo* Aggiungi_Lista(Nodo* Head);
Nodo* Elimina_Lista(Nodo* Head, int Key, int &Trovato);
