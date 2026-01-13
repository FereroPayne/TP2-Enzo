 #include <iostream>
#include <string>
#include "Chambre.h"
#include "date.h"
#include "Client.h"
#include "Hotel.h"
#include "Reserve.h"


Date d1(1, 7, 2024);
    Date d2(5, 7, 2024);
    Date d3(10, 8, 2024);
    Date d4(15, 8, 2024);

   std::cout << "Date debut1:" << d1.toString() << std::endl;
   std::cout << "Date fin1:" << d2.toString() << std::endl;
  std::cout << "Date debut2:" << d3.toString() << std::endl;
  std::cout << "Date fin2:" << d4.toString() << std::endl;
 
    Reserve r1(ch1, "2024-07-01", "2024-07-05");
  Reserve r2(ch4, "2024-08-10", "2024-08-15");