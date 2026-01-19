#ifndef Produit_h
#define Produit_h  
#include <string> 
class Produit {
private:
    std::string nom_;
    std::string description_;
    float prix_;
    int quantite_;
    int idP_;
public:
    Produit( std::string nom, std::string description, float prix, int quantite,int &idP);
    std::string getNom() const;
    std::string getDescription() const;
    float getPrix() const;
    int getQuantite() const;
    void setQuantite(int quantite);
    void afficherProduit()const;
};

#endif
