#include <iostream>
#include <string>
using namespace std;

/********struct********/
struct prodotto
{
	string nome_prod;
	string categoria;
	float prezzo;
};


/********funzioni********/	
void add(prodotto p, prodotto v[], int &d)
{
	//aggiunge un prodotto
	
	v[d]=p;//inserisce nell'array nella dimensione d il valore di p
	
	d++; //incrementa la dimensione
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
	int dim=0;
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
		fflush(stdin); //svuota buffer 
        switch(opzione)
        {
            case 0: break;
            case 1:
				{ 
				//Inserimento

				cout<<"\n\nInserire il prodotto.\n";
				//inserisce il nome
				cout<<"Inserire il nome del prodotto: ";
				getline(cin,p.nome_prod);
				//inserisce la categoria
				cout<<"Inserire la categoria del prodotto: ";
				getline(cin,p.categoria);
				//inserisce il prezzo
				do	
				{
					cout<<"Inserire il prezzo del prodotto: ";
		
					cin>>p.prezzo;
				}while(p.prezzo<=0); //se il prezzo è minore di zero, non esce fuori dal ciclo
	
                add(p,supermercato,dim);
                break;
                }
            case 2:
				{
				//Cancellazione
                bool canc=erase(p,supermercato,dim);
                break;
                }
                
            case 3:
				{
				//Modifica
                bool risposta=edit(p,supermercato,dim);
                break;
                }

            case 4:
            	{
				//Visualizzazione
                prodotto visualizzazione=view(supermercato,dim);
                break;
                }
                
            case 5:
            	{
				//Ricerca
                int pos=search(p,supermercato,dim);
                break;
                }

            default: //Nel caso in cui l'utente sceglie un numero diverso
            cout<<"\nOpzione non valida.\n\n";
        }
    }while(opzione=!0);


	return 0;
}
