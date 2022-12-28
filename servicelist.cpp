#include "servicelist.h"

using namespace std;

// Методы класса ServiceList-------------------------------------------------------------------
ServiceList::~ServiceList(){  // Деструктор
    while(!SetPtrsServs.empty()){
        iter = SetPtrsServs.begin();
        delete *iter;
        SetPtrsServs.erase(iter);
    }
}

void ServiceList::insertService(Service* PtrS){
    SetPtrsServs.push_back(PtrS); // вставка новой услуги в конец списка
}


void ServiceList::displayService(){
    cout << "|";
    cout.width(15);
    cout << "Client Name" << "|";
    cout.width(15);
    cout << "Master Name" << "|";
    cout.width(15);
    cout << "Price" << "|" << endl;
    cout << "-------------------------------------------------" << endl;
    iter = SetPtrsServs.begin();
    while (iter != SetPtrsServs.end()){
        cout << "|";
        cout.width(15);
        cout << (*iter)->getClientName() << "|";
        cout.width(15);
        cout << (*iter)->getMasterName() << "|";
        cout.width(15);
        cout << (*iter)->getPrice() << "|" << endl;
        *iter++;
    }
}

float ServiceList::getSum() {
    float sumPrice = 0.0;
    iter = SetPtrsServs.begin();
    while (iter != SetPtrsServs.end()){
        sumPrice += (*iter)->getPrice();
        iter++;
    }
    return sumPrice;
}

// Конец описания методов класса ServiceList---------------------------------------------------
