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
Programma   	: Aggiungi Lista
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
        App->link = Head->link ;
        delete Head;
        cout << "Elemento ELIMINATO!";
        Trovato = 1;
		return App;
    }

    if(Head->link != NULL || Trovato == 0){
        Head = Elimina_Lista(Head->link, Key, Trovato);
		return Head;		
    }

    return Head;
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
        NewNodo = new Nodo;
        NewNodo->link = Head->link;
        Head->link = NewNodo;
        cout<<"Inserisci il campo info: ";
        cin>>NewNodo->info;
        cout << "Elemento AGGIUNTO!";
        Trovato = 1;
    }
    if(Head->link != NULL || Trovato == 0){
        Head = Add_Key_Lista(Head->link, Key, Trovato);
    }

    return Head ;
}


