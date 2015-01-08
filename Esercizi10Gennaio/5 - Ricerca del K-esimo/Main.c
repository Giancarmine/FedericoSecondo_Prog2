#include <stdio.h>
#include <stdlib.h>


/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Ricerca del K-esimo (4.6 di Dromey)
Data    		: 07/01/2015
-----------------------------------------------------------------------------------------------------*/

    void Partiziona  (int Array[],int N, int x);
    int  RicercaPart (int Array[],int N, int x, int k);
main ()
{
    //Dichiarazione
    int 		*Array ;
    int 		i,  //indice
				N,  //Lunghezza Array
				k,  //elemento da cercare
				min,//K-esimo minimo trovato
				x;  //Discriminante

    //Inizializzazione del array da invertire
    printf	("Inserisci il numero di elementi del array: ");
    scanf	("%d",&N);


    Array = (int *) malloc (N*sizeof(int ));

    for (i=0; i<N; i++){
        printf("\nInserisci il valore della cella[%d]: ", i);
        scanf("%d",&Array[i]);
    }

    //Inizializzazione Discriminante X
    printf	("\nInserisci il numero del discriminante X: ");
    scanf	("%d",&x);

    //Chiamata della function per partizionare l`Array
    Partiziona ( Array, N, x);

    //Stampo del risultato
    printf("\n L`Array e` stato partizionato:");
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }

    //Inizializzazione Discriminante X
    printf	("\nInserisci il k-esimo minore da cercare: ");
    scanf	("%d",&k);

    //Chiamata della function per trovare il K-esimo minimo
    min = RicercaPart ( Array, N, x, k);

    //Stampo se lo ho trovato e dove


}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 06/01/2015
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

/*==============================================================================
Autore : Carmine Cuofano
Data   : 07/01/2015
            Ricerca al interno del Array già partizionat
------------------------------------------------------------------------------*/

int  RicercaPart (int Array[],int N, int x, int k)
{
    int i,
        j,
        l,  //Estremo inf della partizione <= x
        u,  //Estremo sup della partizione <= x
        min;

    l=i=0;
    u=j=N-1;
    printf("Entri nella funzione ok");
    //posiziono gli indici di partizione interni
    while(Array[i]<=x)  i++;
    while(Array[j]>x)   j--;

    //posiziono gli indici di partizione interni
    if (k<x)    u=i;
    if (k>x)    l=j;

    for(i=0; k>0; i++)
    {
        if(Array[i]<min)
        {
            min=Array[i];
            k--;
        }
    }
    return min;

}


/*
https://robot.bolink.org/ebooks/How%20To%20Solve%20It%20By%20Computer%20By%20R%20G%20Dromey.pdf
*/
