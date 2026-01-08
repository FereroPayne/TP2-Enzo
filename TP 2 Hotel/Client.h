#ifndef admin_Client_h
#define admin_Client_h
#include <string>

class Client {
    public:
  Client(
      std::string nom,
      std::string prenom,
      std::string IDclient
  );
  std::string getNom;
  std::string getPrenom;
  std::string getClientID() const;

  private:
  std::string nom;
  std::string prenom;
  std::string IDclient;

};
#endif