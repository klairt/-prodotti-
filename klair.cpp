#include <iostream>
#include <string>
using namespace std;

//struct
struct prodotto
{
	string nome_prod;
	string categoria;
	float prezzo;
};


//funzioni	
void add(prodotto p, prodotto v[], int d)
{
	//aggiunge un prodotto
}

prodotto view(prodotto v[], int d)
{
	//visualizza un prodotto
}

int search(prodotto p, prodotto v[], int d)
{
	//restituisce la posizione del prodotto
}

bool erase(prodotto p, prodotto v[], int d)
{
	//restituisce un booleano
}

bool edit(prodotto p, prodotto v[], int d)
{
	//restituisce un booleano
}

int main(int argc, char** argv) {
	
	prodotto p;
	prodotto supermercato[100];
	int dim=sizeof(supermercato)/sizeof(supermercato[0]);
	int opzione=0;
	
	 do
    {
        cout<<"0 - Ferma programma\n";
        cout<<"1 - Inserimento\n";
        cout<<"2 - Cancellazione\n";
        cout<<"3 - Modifica\n";
        cout<<"4 - Visualizzazione\n";
        cout<<"5 - Ricerca\n";
        cout<<"Scegli opzione: ";

        cin>>opzione;

        switch(opzione)
        {
            case 0: break;
            case 1: //Inserimento
                add(p,supermercato,dim);
                break;
            case 2://Cancellazione
                erase(p,supermercato,dim);
                break;
            case 3://Modifica
                edit(p,supermercato,dim);
                break;
            case 4://Visualizzazione
                view(supermercato,dim);
                break;
            case 5://Ricerca
                search(p,supermercato,dim);
                break;

            default: //Nel caso in cui l'utente sceglie un numero diverso
            cout<<"\nOpzione non valida.\n\n";
        }

	return 0;
}
