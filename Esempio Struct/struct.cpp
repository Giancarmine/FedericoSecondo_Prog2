#include <iostream>
#include <String>
using namespace std;

typedef struct{
	int giorno;
	int mese;
	int anno;
} data_1;

struct data_2{
	int giorno;
	int mese;
	int anno;
};

typedef struct{
	string cognome;
	string nome;
	data_1 data_nascita;
} persona;

int main()
{
	cout << "Definizione di 2 variabili strutturate\n";
	data_1 a;
	struct data_2 b;
	persona persona_a;
	persona *persone;
	persone = new persona[10];

	cout << "Record definito con typdef.\n";
	cout << "Inserire il giorno: ";
	cin >> a.giorno;
	cout << "Inserire il mese: ";
	cin >> a.mese;
	cout << "Inserire l'anno: ";
	cin >> a.anno;

	cout << "Record definito senza typdef.\n";
	cout << "Inserire il giorno: ";
	cin >> b.giorno;
	cout << "Inserire il mese: ";
	cin >> b.mese;
	cout << "Inserire l'anno: ";
	cin >> b.anno;

	cout << "Stampa del record definito con typdef.\n";
	cout<<"Giorno: "<<a.giorno<<endl;
	cout<<"Mese: "<<a.mese<<endl;
	cout<<"Anno: "<<a.anno<<endl;

	cout << "Stampa del record definito senza typdef.\n";
	cout<<"Giorno: "<<b.giorno<<endl;
	cout<<"Mese: "<<b.mese<<endl;
	cout<<"Anno: "<<b.anno<<endl;

	cout << "Lettura dati persona.\n";
	cout << "Inserire il cognome: ";
	cin >> persona_a.cognome;
	cout << "Inserire il mese: ";
	cin >> persona_a.nome;
	cout << "Inserire il giorno di nascita: ";
	cin >> persona_a.data_nascita.giorno;
	cout << "Inserire il mese di nascita: ";
	cin >> persona_a.data_nascita.mese;
	cout << "Inserire l'anno di nascita: ";
	cin >> persona_a.data_nascita.anno;

	cout << "Stampa dei dati della persona.\n";
	cout<<"Cognome: "<<persona_a.cognome<<endl;
	cout<<"Nome: "<<persona_a.nome<<endl;
	cout<<"Giorno di nascita: "<<persona_a.data_nascita.giorno<<endl;
	cout<<"Mese di nascita: "<<persona_a.data_nascita.mese<<endl;
	cout<<"Anno di nascita: "<<persona_a.data_nascita.anno<<endl;

	for (int i=0; i<3; i++){
		cout << "Lettura dati della "<<i+1<< " persona.\n";
		cout << "Inserire il cognome: ";
		cin >> persone[i].cognome;
		cout << "Inserire il mese: ";
		cin >> persone[i].nome;
		cout << "Inserire il giorno di nascita: ";
		cin >> persone[i].data_nascita.giorno;
		cout << "Inserire il mese di nascita: ";
		cin >> persone[i].data_nascita.mese;
		cout << "Inserire l'anno di nascita: ";
		cin >> persone[i].data_nascita.anno;
  }

	for (int i=0; i<3; i++){
		cout << "Stampa dei dati della "<<i+1<< " persona.\n";
		cout<<"Cognome: "<<persone[i].cognome<<endl;
		cout<<"Nome: "<<persone[i].nome<<endl;
		cout<<"Giorno di nascita: "<<persone[i].data_nascita.giorno<<endl;
		cout<<"Mese di nascita: "<<persone[i].data_nascita.mese<<endl;
		cout<<"Anno di nascita: "<<persone[i].data_nascita.anno<<endl;
  }
}
