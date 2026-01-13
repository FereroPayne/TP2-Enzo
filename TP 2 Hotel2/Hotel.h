#ifndef admin_Hotel_h
#define admin_Hotel_h
#include <string>

class Hotel {
    public:
  Hotel(
    std::string IDhotel,
      std::string nom,
      std::string ville,
      std::string chambre 
  );
  std::string getIDhotel() const;
  std::string getNom() const;
  std::string getVille() const;
  std::string getChambre() const;

  void ajouterchambre();
  void supprimerchambre(); 

  private:
  std::string IDhotel;
  std::string nom;
  std::string ville;
  std::string chambre;


 // Ajouter le code permettant de saisir au clavier le type 
 //de chambre souhaité et créer la fonction permettant de vérifier si une chambre de ce 
 //type est disponible dans l'hôtel à la période donnée et utiliser la pour sélectionner la première chambre possible. 
 //Afficher à l'écran l'identifiant de la chambre sélectionné ainsi que son prix par nuit.
    std::string getTypeChambre() const;
    std::string getNom() const;
    std::string getVille() const;
    std::string getChambre() const;
   
};
#endif

std::cout << "Reservation Chambre:" << getChambre().getNumchambre() 
              << " Date Debut:" << getDateDebut() 
              << " Date Fin:" << getDateFin() 
              << std::endl;
  


