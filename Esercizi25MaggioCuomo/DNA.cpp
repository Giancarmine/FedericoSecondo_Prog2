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

-----------------------------------------------------------------------------------------------------*/

Dna* Pop_Dna(Dna* Head){
    Dna* App;

    cout << "L`Elemento e`: " << Head->info << endl;
    App = Head->link ;
    delete Head;
    cout << "Elemento ELIMINATO!";
	return App;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Conta le sequenze nello Stack in modo
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Conta_Seq_ATT(Dna* Head, int &Count){
    Dna* Successivo;

    Successivo = Head->link;
    if (Head->info == 'A' || Head->info == 'a'){
        if (Successivo->info == 'T' || Successivo->info  == 't'){
            if (Successivo->link->info == 'T' || Successivo->link->info  == 't'){
                Count++;
            }
        }
    }
    if (Successivo->link == NULL){
        Conta_Seq_ATT (Successivo, Count);
    }
}
