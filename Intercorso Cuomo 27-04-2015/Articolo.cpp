/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Aggiungi
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Aggiungi (LISTA_ARTICOLI *List, ARTICOLO *NewArt){
    int N;
    N=List->numero = List->numero+1;

    List->lista[N].nome = NewArt->nome;
    List->lista[N].codice_id = NewArt->codice_id;
    List->lista[N].quantita = NewArt->quantita;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Elimina - Avvalorando a 0
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Elimina (LISTA_ARTICOLI *List){
    int i, N;

    N = List->numero;

    for (i=0; i<N; i++){
        if(List->lista[i].quantita==0){
            List->lista[i].nome = 0;
            List->lista[i].codice_id = 0;
            List->lista[i].quantita = 0;
        }
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Stampa
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Stampa (LISTA_ARTICOLI *List){
    int i, N;

    N = List->numero;

    for (i=0; i<N; i++){
        if(List->lista[i].nome==0 && List->lista[i].codice_id==0 && List->lista[i].quantita==0){
            cout << "Nome Articolo: " << List->lista[i].nome << endl;
            cout << "Codice_id Articolo: " << List->lista[i].codice_id << endl;
            cout << "Quantita` Articolo: " << List->lista[i].quantita << endl;
            cout << "\n\n";
        }
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Numero elementi con quantità magg di 10
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

int Numero_magg_di_10 (LISTA_ARTICOLI *List, int i){
    int NumArt;
    if (i==0){
        NumArt=0;
    }

    if (List->lista[i].quantita>9){
        NumArt++;
        NumArt = Numero_magg_di_10 (List, i+1);
    }
    else{
        NumArt = Numero_magg_di_10 (List, i+1);
    }
    return NumArt;
}
