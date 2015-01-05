#include <stdio.h>
#include <stdlib.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Inversione di un array
Data    		: 02/01/2015

To Do:
-----------------------------------------------------------------------------------------------------*/

    void trasposizione (int Matrice[100][100], int Mc);

main ()
{
    //Dichiarazione
    int 		Matrice [100][100];
    int 		i,
                j,
				Mr,  //righe
				Mc;  //Colonne

    //Inizializzazione righe e colonne della Matrice
    printf  ("\nInserisci il numero di righe della Matrice: ");
    scanf   ("%d",&Mr);
    printf  ("\nInserisci il numero di colonne della Matrice: ");
    scanf   ("%d",&Mc);

    for (i=0; i<Mr; i++){
        for (j=0; j<Mc; j++){
            printf  ("\nInserisci il valore della cella[%d][%d]: ", i, j);
            scanf   ("%d",&Matrice[i][j]);
        }
    }

    //Stampo la matrice del
    printf("\n Matrice caricata:\n");
    for (i=0; i<Mr; i++){
        for (j=0; j<Mc; j++){
            printf("\t%d", Matrice[i][j]);
        }
        printf("\n");
    }
    _getch();

    //Chiamata delle function
    trasposizione ( Matrice, Mc);

    //Stampo del risultato
    printf("\n Matrice risultante:\n");
    for (i=0; i<Mr; i++){
        for (j=0; j<Mc; j++){
            printf("\t%d", Matrice[i][j]);
        }
        printf("\n");
    }
    _getch();
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							trasposizione
------------------------------------------------------------------------------*/

void trasposizione (int Matrice[100][100], int Mc)
{
    int i , j , f , App;

    for(i=0; i<Mc; i++)
        for(j=0, f=Mc-1; j<f; j++, f--)
        {   App            = Matrice [i][j];
            Matrice [i][j] = Matrice [i][f];
            Matrice [i][f] = App           ;
        }
}
