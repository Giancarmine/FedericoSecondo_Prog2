#include "Complex.h"

void SommaComplex (Complex &X, Complex &Y, Complex &Z){
    //Sommo la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re+Y.Re;
    Z.Im = X.Im+Y.Im;
}

void SottrazioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Sottraggo la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re-Y.Re;
    Z.Im = X.Im-Y.Im;
}

void MoltiplicazioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Moltiplico la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re*Y.Re;
    Z.Im = X.Im*Y.Im;
}

void DivisioneComplex (Complex &X, Complex &Y, Complex &Z){
    //Divido la parte reale con la parte reale e la parte immaginaria con la stessa
    Z.Re = X.Re/Y.Re;
    Z.Im = X.Im/Y.Im;
}
