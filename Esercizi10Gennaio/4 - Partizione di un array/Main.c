#include <stdio.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Partizione di un array (4.5 di Dromey)
Data    		: 04/01/2015
-----------------------------------------------------------------------------------------------------*/

    void Partizione (int Array[],int N, int x);

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
    Partizione ( Array, N, x);

    //Stampo del risultato
    printf("\n L`Array e` stato partizionato:");
    for (i=0; i<N; i++){
        printf("\nArray[%d]:\t%d", i, Array[i]);
    }
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							Partizione
------------------------------------------------------------------------------*/
void Partizione (int Array[],int N, int x)
{
    int i=0  ,     //Indice
        j=N-1  ,	 //Cella speculare a quella puntata
        App;     //Variabile di Appoggio

    while (i<j&& Array[i]<=x)
    {
        i++;

    }
    for(i=0, j=N-1; i<j; )
}

https://robot.bolink.org/ebooks/How%20To%20Solve%20It%20By%20Computer%20By%20R%20G%20Dromey.pdf
http://codereview.stackexchange.com/questions/17523/partitioning-array-elements-into-two-subsets
http://www.laureateci.it/Public/data/contact/2007110195715_Fusione-PartizOrdinamentiavanzati.pdf.pdf

begin
i := 1; j := n;
while (i < j) AND (a[i] <= x) do i := i + 1;
while (i < j) AND (a[j] > x) do j := j – 1;
if a[j] > x then j := j – 1;
while i < j do
begin
t := a[i]; a[i] := a[j]; a[j] := t;
i := i + 1; j := j –
1;
while (a[i] <= x) do i := i + 1;
while (a[j] > x) do j := j –
1;
end;
p := j;
end;
