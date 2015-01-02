#include <stdio.h>
#include <stdlib.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Inversione di un array
Data    		: 02/01/2015
-----------------------------------------------------------------------------------------------------*/

    void inversione (int Array[],int N);

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
    inversione ( Array, N);

    //Stampo del risultato
    printf("\n L`Array e` stato invertito:");
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							inversione
------------------------------------------------------------------------------*/
void inversione (int Array[],int N)
{
    int i  ,     //Indice
        j  ,	 //Cella speculare a quella puntata
        App;     //Variabile di Appoggio

    for(i=0, j=N-1; i < N/2 ; i++, j--)
    {
        App=Array[i];
        Array[i]=Array[j];
        Array[j]=App;
    }
}
