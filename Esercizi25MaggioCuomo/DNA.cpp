/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Stampa DNA
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Stampa_DNA(Dna* Head){

    cout<< Head->info <<"\t";

    if(Head->link!=NULL){
        Stampa_DNA(Head->link);
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Aggiungi in coda alla lista
Data    		: 29/04/2015

-----------------------------------------------------------------------------------------------------*/

Dna* Push_DNA(Dna* Head, char Key){

    Dna *NewDna;

    if (Head != NULL){
        NewDna = new Dna;
        NewDna->link = Head;
        NewDna->info = Key;
        cout << "Elemento AGGIUNTO!";
        Head = NewDna;
    }
    else{
        Head = new Dna;
        Head->link = NULL;
        cout<<"La Lista e` vuota\n";
        Head->info = Key;
        cout << "Elemento AGGIUNTO!";
    }
    return Head;
}


/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Elimina Nodo in testa
Data    		: 27/04/2015


Dna* Pop_Dna(Dna* Head){

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
-----------------------------------------------------------------------------------------------------*/
