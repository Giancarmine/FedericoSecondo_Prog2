/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Stampa PLAYLIST
Data    		: 25/05/2015

-----------------------------------------------------------------------------------------------------*/

void Stampa_PLAYLIST(Playlist* Head){
    cout<< "CD: " << Head->CD <<"\n";
    cout<< "Durata CD: " << Head->Durata_CD <<" Secondi\n";
    cout<< "Brano: " << Head->Nome_Brano <<"\n";
    cout<< "Durata: " << Head->Durata <<" Secondi\n";

    if(Head->Link!=NULL){
        Stampa_PLAYLIST(Head->Link);
    }
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: My Music
Data    		: 25/05/2015

-----------------------------------------------------------------------------------------------------*/

Playlist* My_Music (string NomeFile, Playlist* Head){
    Playlist* App;

    //Prendo una riga dal file
    ifstream Music("Music.txt");
    string S, New_string;
    if(!Music) {
        cerr << "Il file non esiste!";
    }
    App = Head;
    while(Music.good()){
        getline(Music, S);
        //prendi solo una parte della stringa
        New_string = S.substr(0,2);
        if (New_string == "CD"){
            Head->CD = S;
            getline(Music, S);
            New_string = S.substr(9,4);
            Head->Durata_CD = atoi( New_string.c_str() );
        }
        getline(Music, S);
        Head->Nome_Brano = S;
        New_string = S.substr(9,4);
        Head->Durata = atoi( New_string.c_str() );
        Head->Link = new Playlist;
        Head = Head->Link;
        Head->Link = NULL;
    }
    Music.close();

    cout << "PLAYLIST elaborata con successo" << endl;

    return App;
}

/*===================================================================================================

Autore  	    : Carmine Cuofano											Matricola: N86001700
Programma   	: Reproduction_time
Data    		: 25/05/2015

-----------------------------------------------------------------------------------------------------*/

void Reproduction_time (Playlist* Head, int &Costo){

    Costo = Costo + Head->Durata;

    if(Head->Link!=NULL){
        Reproduction_time (Head->Link, Costo);
    }
}


