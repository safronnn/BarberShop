#include <iostream>
#include "result.h"

using namespace std;

// Методы класса Result(Отчет прибыли)--------------------------------------------------------
Result::Result(ServiceList *pServ, ExpenseList *pEx):PtrServ(pServ), PtrEx(pEx) // Конструктор с параметрами
{

}

void Result::displayResult()
{
    cout << "Financial Report" << endl;
    cout << "----------------" << endl;
    cout << "Income" << endl;
    cout << "\tServices:\t\t";
    amount = PtrServ->getSum();
    cout << amount << endl;
    cout << "Expenses" << endl;
    expenses = PtrEx->displaySumExp();
    cout << endl;
    cout << "Total expenses:\t\t";
    cout << expenses << endl;
    cout << "Balance:\t\t\t" << (amount - expenses) << endl;
}

// Конец описания методов класса Result-------------------------------------------------------
