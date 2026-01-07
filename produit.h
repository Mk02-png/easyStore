#ifndef Produit_h
#define Produit_h  
#include <string.h> 
class Produit {
private:
    std::string nom;
    std::string description;
    float prix;
    int quantite;
public:
    Produit( std::string nom, std::string description, float prix, int quantite);
    std::string getNom() const;
    std::string getDescription() const;
    float getPrix() const;
    int getQuantite() const;
    void setQuantite(int quantite);
};

#endif
