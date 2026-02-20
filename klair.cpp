#include <iostream>
#include <string>
using namespace std;

struct prodotto
{
	string nome_prod;
	string categoria;
	float prezzo;
};
	
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

bool canc(prodotto p, prodotto v[], int d)
{
	//restituisce un booleano
}

bool modify(prodotto p, prodotto v[], int d)
{
	//restituisce un booleano
}

int main(int argc, char** argv) {
	
	prodotto p;
	prodotto supermercato[100];
	int dim=sizeof(supermercato)/sizeof(supermercato[0]);
	
	
	return 0;
}
