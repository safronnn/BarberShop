#include <iostream>
#include "serviceinputscreen.h"

using namespace std;

// Методы класса ServiceInputScreen------------------------------------------------------------
void ServiceInputScreen::setService(){
    cout << "Enter client name: " << endl;
    cin >> CName;
    cout << "Enter master name: " << endl;
    cin >> MName;
    cout << "Enter price of service: " << endl;
    cin >> SPrice;
    Service* PtrService = new Service(CName, MName, SPrice);
    cout << "The service has been successfully entered" << endl;
    PtrServiceList->insertService(PtrService);

}

// Конец описания методов класса ServiceInputScreen--------------------------------------------
