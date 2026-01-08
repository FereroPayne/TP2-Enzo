#ifndef admin_Date_h
#define admin_Date_h
#include <string>
   
class Date {
    public:
        Date(int day, int month, int year);
        std::string toString() const;
    private:
    int day;
    int month;
    int year;
        
};
#endif