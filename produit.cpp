#include "produit.h"

Produit::Produit( std::string nom, std::string description, float prix, int quantite)
    : nom_(nom), description_(description), prix_(prix), quantite_(quantite) {}

std::string Produit::getNom() const {
    return nom_; 
}

std::string Produit::getDescription() const {
    return description_; 
}

float Produit::getPrix() const {
    return prix_; 
}

int Produit::getQuantite() const {
    return quantite_; 
}

void Produit::setQuantite(int quantite) {
   quantite_= quantite; 
}
