#ifndef admin_Client_h
#define admin_Client_h
#include <string>

class Client {
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
};
#endif



