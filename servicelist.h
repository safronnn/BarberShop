#ifndef SERVICELIST
#define SERVICELIST

#include "service.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

// Класс ServiceList(Список предоставленных услуг)--------------------------------------------------------------
class ServiceList{
private:
    list <Service*> SetPtrsServs;
    list <Service*>::iterator iter;

public:
    ~ServiceList();
    void insertService(Service*);
    void displayService();
    float getSum();
};
// Конец класса ServiceList-------------------------------------------------------------------------------------
#endif // SERVICELIST

