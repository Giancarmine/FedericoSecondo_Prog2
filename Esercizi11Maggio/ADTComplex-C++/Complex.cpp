#include "Complex.h"

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Somma Complex
Data    		: 19/04/2015

-----------------------------------------------------------------------------------------------------*/

void SommaComplex (Complex &X, Complex &Y, Complex &Z){
    //Sommo la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re+Y.Re;
    Z.Im = X.Im+Y.Im;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Sottrazione Complex
Data    		: 19/04/2015

-----------------------------------------------------------------------------------------------------*/

void SottrazioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Sottraggo la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re-Y.Re;
    Z.Im = X.Im-Y.Im;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Moltiplicazione Complex
Data    		: 19/04/2015

-----------------------------------------------------------------------------------------------------*/

void MoltiplicazioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Moltiplico la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re*Y.Re;
    Z.Im = X.Im*Y.Im;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Divisione Complex
Data    		: 19/04/2015

-----------------------------------------------------------------------------------------------------*/

void DivisioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Divido la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re/Y.Re;
    Z.Im = X.Im/Y.Im;
}
