#include "client.h"

	Client::Client(std::string nom,std::string prenom){
		nom_=nom;
		prenom_=prenom;

	}

	std::string Client::getnom()const{
		return nom_;

	}
	std::string Client::getprenom() const{
		return prenom_;
	}
