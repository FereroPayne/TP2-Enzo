#include <iostream>
#include <string>
#include "Chambre.h"
#include "date.h"
#include "Client.h"
#include "Hotel.h"
#include "Reserve.h"

int main() {
  
    Hotel h("H85","El Alamain","Oran","2000");
    std::cout << "Hotel ID: " << h.getIDhotel() << h.getNom()<< h.getVille()<< h.getChambre()<< std::endl;

     Chambre ch1("C101", "Single", 100.0, true);
     Chambre ch2("C102", "Single", 100.0, true);
     Chambre ch3("C103", "Single", 100.0, true);
      Chambre ch4("C104", "Double", 125.0, true);
     Chambre ch5("C105", "Double", 125.0, true);
      Chambre ch6("C106", "Double", 125.0, true);
       Chambre ch7("C107", "Double", 125.0, true);
        Chambre ch8("C108", "Double", 125.0, true);
     Chambre ch9("C109", "Suite", 210.0, true);
     Chambre ch10("C110", "Suite", 210.0, true);

 std::cout << "Chambre Num: " << ch1.getNumchambre() << " Type: " << ch1.getType() << " Prix: " << ch1.getPrix() << " Disponible: " << ch1.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch2.getNumchambre() << " Type: " << ch2.getType() << " Prix: " << ch2.getPrix() << " Disponible: " << ch2.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch3.getNumchambre() << " Type: " << ch3.getType() << " Prix: " << ch3.getPrix() << " Disponible: " << ch3.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch4.getNumchambre() << " Type: " << ch4.getType() << " Prix: " << ch4.getPrix() << " Disponible: " << ch4.getEstDisponible() << std::endl;
 std::cout << "Chambre Num: " << ch5.getNumchambre() << " Type: " << ch5.getType() << " Prix: " << ch5.getPrix() << " Disponible: " << ch5.getEstDisponible() 	<< std::endl;
 std::cout 	<< 	"Chambre Num: 	" 	<< 	ch6.getNumchambre() 	<< 	" Type: 	" 	<< 	ch6.getType() 	<< 	" Prix: 	" 	<< 	ch6.getPrix() 	<< 	" Disponible: 	" 	<< 	ch6.getEstDisponible()
   			<<  	std::endl;
    std::cout   <<"Chambre Num:"  		  			<<  	ch7.getNumchambre()
   			          <<" Type:"  		  			<<  	ch7.getType()
   			          <<" Prix:"  		  			<<  	ch7.getPrix()
   			          <<" Disponible:"  		  			<<  	ch7.getEstDisponible()
   			          <<" Chambre Num:"  		  			<<  	ch8.getNumchambre()
   			          <<" Type:"  		  			<<  	ch8.getType()
   			          <<" Prix:"  		  			<<  	ch8.getPrix()
   			          <<" Disponible:"  		  			<<  	ch8.getEstDisponible()
   			          <<" Chambre Num:"  		  			<<  	ch9.getNumchambre()
   			          <<" Type:"  		  			<<  	ch9.getType()
   			          <<" Prix:"  		  			<<  	ch9.getPrix()
   			          <<" Disponible:"  		<<  	ch9.getEstDisponible()
   <<  	std::endl;
                      
 Client c1("Dupont", "Jean", "CL001");
    Client c2("Martin", "Sophie", "CL002");
    Client c3("Jasdin", "Khamatsu", "CL003");           
    std::cout << "Client Nom: " << c1.getNom() << " Prenom: " << c1.getPrenom() << " ID: " << c1.getClientID() << std::endl;
    std::cout << "Client Nom: " << c2.getNom() << " Prenom: " << c2.getPrenom() << " ID: " << c2.getClientID() << std::endl;
    std::cout << "Client Nom: " << c3.getNom() << " Prenom: " << c3.getPrenom() << " ID: " << c3.getClientID() << std::endl;

    std::cin.get();
    return 0;

    Date d1(1, 7, 2024);
    Date d2(5, 7, 2024);
    Date d3(10, 8, 2024);
    Date d4(15, 8, 2024);

   std::cout << "Date debut1:" << d1.toString() << std::endl;
   std::cout << "Date fin1:" << d2.toString() << std::endl;
  std::cout << "Date debut2:" << d2.toString() << std::endl;
  std::cout << "Date fin2:" << d2.toString() << std::endl;
 

  Reserve r1(ch1, "2024-07-01", "2024-07-05");
  Reserve r2(ch4, "2024-08-10", "2024-08-15");

    std::cout << "Reservation Chambre: " << r1.getChambre().getNumchambre() << " Date Debut: " << r1.getDateDebut() << " Date Fin: " << r1.getDateFin() << std::endl;
    std::cout << "Reservation Chambre: " << r2.getChambre().getNumchambre() << " Date Debut: " << r2.getDateDebut() << " Date Fin: " << r2.getDateFin() << std::endl;



}


