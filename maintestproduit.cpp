#include <iostream>
#include "produit.h"
using namespace std;


int main(){
	Produit PC("PC","UN ordinateur portable trés puissant",300,25);
	cout<<PC.getNom()<<endl;
	cout<<PC.getDescription()<<endl;
	cout<<PC.getPrix()<<endl;
	cout<<PC.getQuantite()<<endl;


	return 0;
}
