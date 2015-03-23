/*===================================================================================================
Dato il puntatore e la lunghezza li alloca

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Alloca Vettore
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
void Alloc_Vett_int (int *a, int N){
   a = new int[N];
}
/*===================================================================================================
Dealloca Array

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Dealloca Vettore
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
void Dealloc_Vett_int (int *a){
    if (a) delete []a;
}
/*===================================================================================================
Dati 2 parametri li inverte

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Swap
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
void Swap (int &a, int &b){
    int App;

    App = a;
    a = b;
    b = App;
}

/*===================================================================================================
Ricevuti 2 Array A-B e la loro lunghezza

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Prodotto Scalare
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
int Prodotto_Scalare (int A[], int B[], int N){
    int Product_Scal;

    return Product_Scal;
}
