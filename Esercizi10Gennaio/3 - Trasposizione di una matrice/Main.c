#include <stdio.h>
#include <stdlib.h>

/*===================================================================================================


Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: trasposizione di una matrice
Data    		: 02/01/2015

To Do:
-----------------------------------------------------------------------------------------------------*/

    void trasposizione (int **Matrice, int **Trasposta, int Mc);

main ()
{
    //Dichiarazione
    int 	**Matrice,
            **Trasposta;
    int 	i,
            j,
            Mc;  //Colonne

    //Inizializzazione righe e colonne della Matrice
    printf  ("\nInserisci il numero righe e colonne della Matrice (Quadrata): ");
    scanf   ("%d",&Mc);

    //allocazione della matrice originale
    Matrice = (int **)malloc(Mc * sizeof(int *));
    for (i=0; i<Mc; i++)
    {
        Matrice[i] = (int *)malloc(Mc * sizeof(int));
    }
    //allocazione della matrice trasposta
    Trasposta = (int **)malloc(Mc * sizeof(int *));
    for (i=0; i<Mc; i++)
    {
        Trasposta[i] = (int *)malloc(Mc * sizeof(int));
    }



    for (i=0; i<Mc; i++){
        for (j=0; j<Mc; j++){
            printf  ("\nInserisci il valore della cella[%d][%d]: ", i, j);
            scanf   ("%d",&Matrice[i][j]);
        }
    }

    //Stampo la matrice del
    printf("\n Matrice caricata:\n");
    for (i=0; i<Mc; i++){
        for (j=0; j<Mc; j++){
            printf("%4d", Matrice[i][j]);
        }
        printf("\n");
    }
    _getch();

    //Chiamata delle function
    trasposizione ( Matrice, Trasposta, Mc);

    //Stampo del risultato
    printf("\n Matrice risultante:\n");
    for (i=0; i<Mc; i++){
        for (j=0; j<Mc; j++){
            printf("%4d", Trasposta[i][j]);
        }
        printf("\n");
    }
    _getch();
    //Dealloco la matrice
    for (i=0; i<Mc; i++)
        free(Matrice[i]);
    free(Matrice);

    //Dealloco la trasposta
    for (i=0; i<Mc; i++)
        free(Trasposta[i]);
    free(Trasposta);
}


/*==============================================================================
Autore : Carmine Cuofano
Data   : 02/01/2015
							trasposizione
------------------------------------------------------------------------------*/

void trasposizione (int **Matrice, int **Trasposta, int Mc)
{
    int i,
        j;

    for(i=0; i<Mc; i++)
    {
        for(j=0; j<Mc; j++)
        {
            Trasposta[j][i]=Matrice[i][j];
        }
    }
}
