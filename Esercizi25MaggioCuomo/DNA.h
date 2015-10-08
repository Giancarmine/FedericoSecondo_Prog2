
typedef struct dna{
    char info;
    struct dna *link;
} Dna;


//Protoripi
void Stampa_DNA(Dna* Head);
Dna* Push_DNA(Dna* Head, char Key);
Dna* Pop_Dna(Dna* Head);
void Conta_Seq_ATT(Dna* Head, int &Count);
