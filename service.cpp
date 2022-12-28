#include "service.h"
using namespace std;

// Методы класса Service-----------------------------------------------------------------------
Service::Service(string CName, string MName, float SPrice): ClientName(CName), MasterName(MName), Price(SPrice){

}

Service::~Service(){

}

string Service::getClientName(){
    return ClientName;
}

string Service::getMasterName(){
    return MasterName;
}

float Service::getPrice(){
    return Price;
}

// Конец описания методов класса Service-------------------------------------------------------
