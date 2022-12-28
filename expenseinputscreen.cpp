#include <iostream>
#include "expenseinputscreen.h"

using namespace std;

// Методы класса ExpenseInputScreen-----------------------------------------------------------
ExpenseInputScreen::ExpenseInputScreen(ExpenseList* per):PtrExpenseList(per) // Конструктор с параметрами
{

}

void ExpenseInputScreen::setExpense()
{
    int Month, Day;
    string Type;
    float Cost;

    cout << "Enter month(1-12): " << endl;
    cin >> Month;
    cout << "Enter day(1-31): " << endl;
    cin >> Day;
    cout << "Enter expense category: " << endl;
    cin >> Type;
    cout << "Enter total(50.25): " << endl;
    cin >> Cost;
    // Создаем новую затрату
    Expense* PtrExpense = new Expense(Month, Day, Type, Cost);
    cout << "The expense has been successfully entered" << endl;
    // Добавляем в список затрат
    PtrExpenseList->insertExp(PtrExpense);
}

// Конец описания методов класса ExpenseInputScreen-------------------------------------------
