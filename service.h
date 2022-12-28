#ifndef SERVICE
#define SERVICE

#include <iostream>
#include <string>
using namespace std;

// Класс Service(Предоставленная услуга)------------------------------------------------------------------------
class Service {
private:
    string ClientName;
    string MasterName;
    float Price;

public:
    Service(string CName, string MName, float SPrice);
    ~Service();
    string getClientName();
    string getMasterName();
    float getPrice();
};
// Конец класса Service-----------------------------------------------------------------------------------------

#endif // SERVICE

