/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Scambia valori
Data    		: 7/04/2015

-----------------------------------------------------------------------------------------------------*/

void Scambia_Array_int (int Array [] , int Pos1 , int Pos2)
{
    int App ;

    App     = Array[Pos1];
    Array[Pos1] = Array[Pos2];
    Array[Pos2] = App ;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Genera Random un Array di integer
Data    		: 29/04/2015

-----------------------------------------------------------------------------------------------------*/
void Array_Random_Int (int Array[], int N, int Da, int A)
{
    int i;
    //NOTA : Intervallo di Random = da "A" ad "A-Da"
    srand((unsigned)time(0));

    for(int i=0; i<N; i++){
        Array[i] = (rand()%A)+Da;
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Stampa Array
Data    		: 27/04/2015

-----------------------------------------------------------------------------------------------------*/

void Stampa_Array_int (int Array[], int N)
{
    int I;

    for (I = 0; I < N; I++){
        cout << Array[I] << "\t";
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: QuickSort
Data    		: 17/05/2015

-----------------------------------------------------------------------------------------------------*/

void QuickSort_Ricorsivo (int Array[] , int Inizio , int Fine)
{
    int Pivot ;
    int I , J ;

    if(Fine>Inizio){
        I = Inizio ;
        J = Fine ;
        Pivot = Array[(Inizio+Fine)/2] ;
        while (I<=J){
            while(Array[I] < Pivot){
                I++; //Conto gli elementi minori del pivot
            }
            while(Array[J] > Pivot){
                J--; //Conto gli elementi maggiori del pivot
            }
            /*================================================
            Se I è <= J cioè se l'elemento puntato da I
            è maggiore del pivot , e di conseguenza quello
            puntato da J è minore del pivot ...
            ------------------------------------------------*/
            if(I<=J){
                Scambia_Array_int(Array,I,J);//...scambiali
                I++;
                J--;
            }
        }
        //Ripeti per gli elementi minori del pivot poi per quelli maggiori del pivot
        if (Inizio<J){
            QuickSort_Ricorsivo(Array,Inizio,J);
        }
        if (I<Fine){
            QuickSort_Ricorsivo(Array,I,Fine);
        }
    }
}
