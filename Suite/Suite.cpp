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
Ricevuti 2 Array A-B e la loro lunghezza ne ricava il prodetto scalare

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Prodotto Scalare
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
int Prodotto_Scalare (int A[], int B[], int N){
    int i;
    int Prod=0;

    for(i=0; i < N; i++) {
        Prod += A[i]*B[i];
    }
    return Prod;
}
/*===================================================================================================
Ricevuti 2 Array A-B e la loro lunghezza ne ricava il prodetto scalare

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: [C++] Prodotto Scalare
Data    		: 23/03/2015
-----------------------------------------------------------------------------------------------------*/
void Prodotto_Matrice_Array (int **M, int A[], int B[], int X, int Y, int N){
    int i, j;

    for (i=0; i<X; i++){
        B[i]=0;
        for (j=0; j<Y; j++){
            B[i]+= (M[i][j]*A[j]);
        }
    }
}
