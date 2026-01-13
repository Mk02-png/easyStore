#ifndef CLIENT_H
#define CLIENT_H
#include "string.h"
#include <vector>
#include "produit.h"
class Client{
	public:
		Client(std::string nom,std::string prenom);
		std::string getnom()const;
		std::string getprenom() const;

	private:
		std::string nom_;
		std::string prenom_;
		std::vector <Produit> _panier;




};
#endif
