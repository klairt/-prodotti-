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

void view(prodotto v[], int d)
{
	cout<<"\n\nTabella prodotti\n";
	for(int i=0;i<d;i++)
	{	
		cout<<"prodotto "<<i+1<<": ";
		cout<<"             ";
		cout<<v[i].nome_prod;
		cout<<"             ";
		cout<<v[i].categoria;
		cout<<"             ";
		cout<<v[i].prezzo<<endl;
	}
	cout<<endl<<endl;
	
}

int search(prodotto p, prodotto v[], int d)
{
	//restituisce la posizione del prodotto
	
	for(int i=0;i<d;i++)
	{
		if(v[i].nome_prod==p.nome_prod)
		{
			return i; // il return funzione come il break. Se lo trova, esce dalla funzione
		}
	}
	
	return -1;//se non lo trova, finisce il ciclo e fa return -1
	
	
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
                
                cout<<"\n\n\n";
                }
                break;
                
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
                
				view(supermercato,dim);
                
                }
                
            case 5:
            	{
				//Ricerca
				cout<<"Inserire il nome del prodotto da ricercare: ";
				getline(cin,p.nome_prod);
                int pos=search(p,supermercato,dim);
                if(pos==-1)
                {
                cout<<"\n\nProdotto non trovato.";		
                }else
                {
                	cout<<"Il prodotto si trova in posizione "<<pos<<endl<<endl;
 				}
                break;
                }

            default: //Nel caso in cui l'utente sceglie un numero diverso
            cout<<"\nOpzione non valida.\n\n";
        }
    }while(opzione=!0);


	return 0;
}
