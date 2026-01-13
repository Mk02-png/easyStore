#include <iostream>
#include "client.h"
using namespace std;

int main(){
	Client c1("Bae","Romain");
	Client c2("freeks0","Gon");

	cout<<c1.getprenom()<<" "<<c1.getnom()<<endl;
	cout<<c2.getprenom()<<" "<<c2.getnom()<<endl;
	return 0;

}
