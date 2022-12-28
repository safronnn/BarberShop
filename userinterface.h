#ifndef USERINTERFACE
#define USERINTERFACE

#include <iostream>
using namespace std;

// Главный класс для запуска приложения. По своей сути представляет меню взаимодействия с пользователем
class UserInterface{
private:
    //ServiceList* PtrServiceList;
    //ServiceInputScreen* PtrServiceInputScreen;
    //ExpenseList* PtrExpenseList;
    //ExpenseInputScreen* PtrExpenseInputScreen;
    //Result* PtrResult;
    char ch;

public:
    UserInterface();
    ~UserInterface();
    void interact();
};
//--------------------------------------------------------------------------------------------------------------


#endif // USERINTERFACE

