#include <iostream>
#include "produit.h"
using namespace std;


int main(){
	int dernierIdp=0;
	Produit PC("PC","UN ordinateur portable trés puissant",300,5,dernierIdp);
	cout<<PC.getNom()<<endl;
	cout<<PC.getDescription()<<endl;
	cout<<PC.getPrix()<<endl;
	cout<<PC.getQuantite()<<endl;

	PC.afficherProduit();
	


	return 0;
}
