#include "expenselist.h"
#include <iostream>

using namespace std;

// Методы класса ExpenseList------------------------------------------------------------------
ExpenseList::~ExpenseList() // Деструктор
{
    while(!VectPtrsExpenses.empty())
    {
        iter = VectPtrsExpenses.begin();
        delete *iter;
        VectPtrsExpenses.erase(iter);
    }
}

void ExpenseList::insertExp(Expense* PtrExp)
{
    VectPtrsExpenses.push_back(PtrExp);
}

void ExpenseList::displayExp()
{
    cout << "|";
    cout.width(15);
    cout << "Date" << "|";
    cout.width(15);
    cout << "Cost" << "|";
    cout.width(15);
    cout << "Type" << "|" << endl;
    cout << "-------------------------------------------------" << endl;
    if(VectPtrsExpenses.size() == 0) // Если в векторе нет расходов
        cout << "No expenses." << endl;
    else
    {
        iter = VectPtrsExpenses.begin();
        while (iter != VectPtrsExpenses.end())
        {
            cout << "|";
            cout.width(12);
            cout << (*iter)->Month << "/" << (*iter)->Day << "|";
            cout.width(15);
            cout << (*iter)->Cost << "|";
            cout.width(15);
            cout << (*iter)->Type << "|" << endl;
            iter++;
        }
        cout << endl;
    }
}

float ExpenseList::displaySumExp()
{
    float TotalExpenses = 0;

    if (VectPtrsExpenses.size() == 0)
    {
        cout << "All Categories\t0" << endl;
        cout << "------------------------------";
        return 0;
    }

    iter = VectPtrsExpenses.begin();
    while (iter != VectPtrsExpenses.end())
    {
        cout << "\t" << (*iter)->Type;
        cout << "\t\t" << (*iter)->Cost<< endl;
        TotalExpenses += (*iter)->Cost;
        iter++;
    }
    return TotalExpenses;
}
// Конец описания методов класса ExpenseList--------------------------------------------------
