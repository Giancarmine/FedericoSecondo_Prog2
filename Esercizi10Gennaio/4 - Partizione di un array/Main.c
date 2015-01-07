#include <stdio.h>
#include <stdlib.h>


/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Partizione di un array (4.5 di Dromey)
Data    		: 04/01/2015
-----------------------------------------------------------------------------------------------------*/

    void Partiziona (int Array[],int N, int x);

main ()
{
    //Dichiarazione
    int 		*Array ;
    int 		i,
				N,
				x;

    //Inizializzazione del array da invertire
    printf	("Inserisci il numero di elementi del array: ");
    scanf	("%d",&N);


    Array = (int *) malloc (N*sizeof(int ));

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]: ", i);
        scanf("%d",&Array[i]);
    }

    //Inizializzazione Discriminante X
    printf	("Inserisci il numero del discriminante X: ");
    scanf	("%d",&x);

    //Chiamata delle function
    Partiziona ( Array, N, x);

    //Stampo del risultato
    printf("\n L`Array e` stato partizionato:");
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							Partiziona
------------------------------------------------------------------------------*/
void Partiziona (int Array[],int N,int x){
   int  i,
        j,
        App;

    i=0;
    j=N-1;

    //Salto la parte già partizionata
    while(Array[i]<=x)  i++;    //i minori del discriminante
    while(Array[j]>x)   j--;    //e i maggiori

    while (i<j) //Se non è già partizionato
    {
        //Scambia e avanza
        App=Array[i];
        Array[i]=Array[j];
        Array[j]=App;


        //Salto la parte già partizionata
        while(Array[i]<=x)  i++;    //i minori del discriminante
        while(Array[j]>x)   j--;    //e i maggiori
    }
}

/*
https://robot.bolink.org/ebooks/How%20To%20Solve%20It%20By%20Computer%20By%20R%20G%20Dromey.pdf
*/
