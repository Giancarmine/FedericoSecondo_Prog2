#include <stdio.h>
#include <stdlib.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Ordinamento di un array mediante il metodo di insertion sort
Data    		: 02/01/2015

To Do:
-----------------------------------------------------------------------------------------------------*/

    void insertionSort (int Array[],int N);

main ()
{
    //Dichiarazione
    int 		*Array ;
    int 		i,
				N;

    //Inizializzazione del array da ordinare
    printf ("Inserisci il numero di elementi del array: ");
    scanf ("%d",&N);


    Array = (int *) malloc (N*sizeof(int ));

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]: ", i);
        scanf("%d",&Array[i]);
    }

    //Chiamata delle function
    insertionSort ( Array, N);

    //Stampo del risultato
    printf("\n L`Array e` ordinato:");
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							InsertionSort
------------------------------------------------------------------------------*/
void insertionSort (int Array[],int N)
{
    int i  ,     //Indice
        j  ,	 //Cella successiva a quella puntata
        App;     //Variabile di Appoggio

    for(i=1 ; i < N ; i++)
    {
        App = Array[i];
        j = i-1;
        while (j>=0 && Array[j]>App) {
            Array[j+1] = Array[j];
            j--;
        }
        Array[j+1] = App;
    }
}
