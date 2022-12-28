#include "userinterface.h"


// Методы класса UserInterface - Главный класс приложения-------------------------------------
UserInterface::UserInterface() {
    PtrServiceList = new ServiceList;
    PtrExpenseList = new ExpenseList;
}

UserInterface::~UserInterface(){
    delete PtrServiceList;
    delete PtrExpenseList;
}

void UserInterface::interact() {
    while (true) {
        cout << "Press 'w' to enter service" << endl;
        cout << "Press 'e' to display service list" << endl;
        cout << "Press 'r' to enter expense" << endl;
        cout << "Press 't' to display all expenses" << endl;
        cout << "Press 'y' to display financial result" << endl;
        cout << "Press 'q' to quit" << endl;
        cin >> ch;
        system("cls");

        if (ch == 'w')
        {
            PtrServiceInputScreen = new ServiceInputScreen(PtrServiceList);
            PtrServiceInputScreen->setService();
            delete PtrServiceInputScreen;
            system("pause");
            system("cls");
        }
        else if (ch == 'e')
        {
            PtrServiceList->displayService();
            system("pause");
            system("cls");
        }
        else if (ch == 'r')
        {
            PtrExpenseInputScreen = new ExpenseInputScreen(PtrExpenseList);
            PtrExpenseInputScreen->setExpense();
            delete PtrExpenseInputScreen;
            system("pause");
            system("cls");
        }
        else if (ch == 't')
        {
            PtrExpenseList->displayExp();
            system("pause");
            system("cls");
        }
        else if (ch == 'y')
        {
            //PtrResult = new Result(PtrServiceList, PtrExpenseList);
            //PtrResult->displayResult();
            //delete PtrResult;
            system("pause");
            system("cls");
        }
        else if (ch == 'q') return;
    }
}

//--------------------------------------------------------------------------------------------

