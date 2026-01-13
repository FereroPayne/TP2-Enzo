#ifndef admin_Reserve_h
#define admin_Reserve_h
#include <string>
#include "Chambre.h"

class Reserve {
public:
    Reserve(
        std::string nbrNuits,
        double prixTotal,
        std::string IDhotel,
        std::string IDClient,
        std::string IDchambre
    );
    Reserve(Chambre chambre, std::string dateDebut, std::string dateFin);
    Chambre getChambre() const;
    std::string getDateDebut() const;
    std::string getDateFin() const;

    Reserve calculerPrixTotal(); 
    {
        double prixparNuit=chambre.getPrix();
        double total=prixparNuit*std::stod(nbrNuits);
        prixTotal=total;
        return *this;
    }
    void ModifDateDebut(std::string dateDebut);
    void ModifDateFin(std::string dateFin);

private:
    Chambre chambre;
    std::string dateDebut;
    std::string dateFin;
    std::string nbrNuits;
        double prixTotal;
        std::string IDhotel;
        std::string IDClient;
        std::string IDchambre;
};

#endif