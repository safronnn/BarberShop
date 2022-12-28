#ifndef SERVICEINPUTSCREEN
#define SERVICEINPUTSCREEN

#include "servicelist.h"
#include <iostream>
#include <string>
using namespace std;

// Класс ServiceInputScreen(Экран ввода предоставленной услуги)--------------------------------------------------
class ServiceInputScreen {
private:
    ServiceList* PtrServiceList;
    string CName;
    string MName;
    float SPrice;
public:
    ServiceInputScreen(ServiceList* PtrSL): PtrServiceList(PtrSL){

    }
    void setService();
};
// Конец класса ServiceInputScreen-------------------------------------------------------------------------------

#endif // SERVICEINPUTSCREEN

