#include <iostream>
#include <string>
#include "Chambre.h"
#include "date.h"
#include "Client.h"
#include "Hotel.h"
#include "Reserve.h"

int Reservation() {
  
    Hotel h("H85","El Alamain","Oran","2000");
    std::cout << "Hotel ID: " << h.getIDhotel() << h.getNom()<< h.getVille()<< h.getChambre()<< std::endl;

     Chambre ch1("C101", "Single", 100.0, true);
     Chambre ch4("C104", "Double", 125.0, true);
     Chambre ch9("C109", "Suite", 210.0, true);

 std::cout << "Chambre Num: " << ch1.getNumchambre() << " Type: " << ch1.getType() << " Prix: " << ch1.getPrix() << " Disponible: " << ch1.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch4.getNumchambre() << " Type: " << ch4.getType() << " Prix: " << ch4.getPrix() << " Disponible: " << ch4.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch9.getNumchambre() << " Type: " << ch9.getType() << " Prix: " << ch9.getPrix() << " Disponible: " << ch9.getEstDisponible() << std::endl;

 //Afficher le type de chambre souhaité
   std::string typeSouhaite;
   std::cout << "Entrez le type de chambre souhaite (Single, Double, Suite): ";
   std::cin >> typeSouhaite;
   std::cout << "Type de chambre souhaiter"<< typeSouhaite << std::endl;
   

   std::string typeSouhaite;
   std::cout << "Entrez le type de chambre souhaite (Single, Double, Suite): ";
   std::cin >> typeSouhaite;
   std::cout << "Type de chambre souhaiter"<< typeSouhaite << std::endl;
if (typeSouhaite == ch1.getType() && ch1.getEstDisponible()) {
       std::cout << "Chambre disponible: " << ch1.getNumchambre() << " Prix par nuit: " << ch1.getPrix() << std::endl;
   } else if (typeSouhaite == ch4.getType() && ch4.getEstDisponible()) {
       std::cout << "Chambre disponible: " << ch4.getNumchambre() << " Prix par nuit: " << ch4.getPrix() << std::endl;
   } else if (typeSouhaite == ch9.getType() && ch9.getEstDisponible()) {
       std::cout << "Chambre disponible: " << ch9.getNumchambre() << " Prix par nuit: " << ch9.getPrix() << std::endl;
   } else {
       std::cout << "Aucune chambre disponible pour le type souhaite." << std::endl;
   }
//calculer prix total
   Reserve r1_calculé = r1.calculerPrixTotal();
   Reserve r2_calculé = r2.calculerPrixTotal();

   std::cout << "Prix total reservation 1: " << r1_calculé.getChambre().getPrix() * 4 << std::endl; // 4 nuits
   std::cout << "Prix total reservation 2: " << r2_calculé.getChambre().getPrix() * 5 << std::endl; // 5 nuits

//modifier dates
   r1.ModifDateDebut("2024-07-02");
   r1.ModifDateFin("2024-07-06");

   std::cout << "Nouvelle Date Debut reservation 1: " << r1.getDateDebut() << std::endl;
   std::cout << "Nouvelle Date Fin reservation 1: " << r1.getDateFin() << std::endl;

    std::cin.get();
//gestion
//Affiche reservations
  Reserve::affiche();{
    std::cout << "Reservation Chambre:" << getChambre().getNumchambre() 
              << " Date Debut:" << getDateDebut() 
              << " Date Fin:" << getDateFin() 
              << std::endl;          
    }
  Reserve::numres();{
    std::cout << "Numero de la reservation est :" << numres() <<std::endl;
    if (numres()==0){
        std::cout << "Aucune reservation n'existe." <<std::endl;
    } else {
        std::cout << "La reservation existe." <<std::endl;
    }
    }

    Reserve::clientres();{
        if (clientres() != nullptr || clientres()==  getClientID()) {
    std::cout << "Client de la reservation est :" << clientres() <<std::endl;
    }
    else {
        std::cout << "Aucun client n'est associe a cette reservation." <<std::endl;
    }
    }




  Reserve::supprimerres();{
    //supprimer une reservation

    std::cout << "Suppression de la reservation numero :" << numres() <<std::endl;
    if (numres() != 0)
    {
        std::cout << "Reservation supprimee." <<std::endl;
    } else {
        std::cout << "La reservation n'existe pas." <<std::endl;
    }
    return 0;   
}