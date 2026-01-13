#ifndef admin_chambre_h
#define admin_chambre_h
#include <string>
class Chambre {
     public:
  Chambre(
        std::string Numchambre,
        std::string type,
        double prix,
        bool estDisponible
  );
    std::string getNumchambre() const;
    std::string getType() const;
    double getPrix() const;
    bool getEstDisponible() const;
 void modifPrix(double nouveauPrix);

private:
    std::string Numchambre;
    std::string type;
    double prix;
    bool estDisponible;
};
#endif

    