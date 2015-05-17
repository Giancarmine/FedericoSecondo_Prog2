/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Stampa Lista
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Stampa_Lista(Nodo* Head){

    cout<< Head->info <<"\t";

    if(Head->link!=NULL){
        Stampa_Lista(Head->link);
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Aggiungi in coda alla lista
Data    		: 29/04/2015

-----------------------------------------------------------------------------------------------------*/

Nodo* Aggiungi_Lista(Nodo* Head){

    Nodo *NewNodo;

    if (Head != NULL){
        if (Head->link == NULL){
            NewNodo = new Nodo;
            NewNodo->link = NULL;
            Head->link = NewNodo;
            cout<<"Inserisci il campo info: ";
            cin>>NewNodo->info;
        }
        else{
            Head->link = Aggiungi_Lista(Head->link);
        }
    }
    else{
        Head = new Nodo;
        Head->link = NULL;
        cout<<"La Lista e` vuota\n";
        cout << "Inserisci il campo info: ";
        cin >> Head->info;
    }
    return Head;
}


/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Elimina Nodo Key
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

Nodo* Elimina_Lista(Nodo* Head, int Key, int &Trovato){

    Nodo* App;
    App = NULL;
    App = new Nodo;

    if(Head->info == Key){
        App = Head->link ;
        delete Head;
        cout << "Elemento ELIMINATO!";
        Trovato = 1;
		return App;
    }

    if(Head->link != NULL || Trovato == 0){
        Head->link = Elimina_Lista(Head->link, Key, Trovato);
		return Head;
    }
}
/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Aggiungi Lista key
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

Nodo* Add_Key_Lista(Nodo* Head, int Key, int &Trovato){

    Nodo* NewNodo;

    NewNodo = NULL;

    if(Head->info == Key){
        Trovato = 1;
        NewNodo = new Nodo;
        NewNodo->link = Head->link;
        Head->link = NewNodo;
        cout<<"Inserisci il campo info: ";
        cin>>NewNodo->info;
        cout << "Elemento AGGIUNTO!";
    }
    else{
        Trovato = 0;
    }

    if(Head->link != NULL || Trovato != 0){
        Head->link = Add_Key_Lista(Head->link, Key, Trovato);
    }

    return Head ;
}
/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Aggiungi elemento in ordine
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

Nodo* Aggiungi_Lista_Ordinata_Ricorsivo(Nodo* Head, int Key){

    Nodo* NewNodo;
    Nodo* Successivo;

    NewNodo = NULL;
    Successivo = NULL;
    Successivo = new Nodo;


    if (Head != NULL){
        if (Head->info >= Key){
            Successivo = Head->link;
            if ( Successivo == NULL || Successivo->info < Key){
                NewNodo = new Nodo;
                NewNodo->info = Key;
                NewNodo->link = Head->link;
                Head->link = NewNodo;
                cout << "Elemento AGGIUNTO!";
            }
            else {
                if (Head->link != NULL){
                    Head = Aggiungi_Lista_Ordinata_Ricorsivo(Head->link, Key);
                }
            }
        }
        else{
            if (Head->link != NULL){
                Head = Aggiungi_Lista_Ordinata_Ricorsivo(Head->link, Key);
            }
        }
    }
    else {
        Head = new Nodo;
        Head->link = NULL;
        Head->info = Key;
        cout << "Elemento AGGIUNTO!";
    }
    return Head ;
}
