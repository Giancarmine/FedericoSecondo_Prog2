#include <stdio.h>

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
void Partiziona (int x[],int n,int x){
    int i;
    int j;
    int t;

    i=0;
    j=n-1;

    while (i<j)
    {
        if(x[i]>x && x[j]<x){
            t=x[i];
            x[i]=x[j];
            x[j]=t;
            i=i+1;
            j=i-1;
        }
        if(x[i]<=x)
        {
            i=i+1;
        }
        if(x[j]>x)
        {
            j=j-1;
        }
    }
}

/*
http://www.careercup.com/question?id=13424669
*/
