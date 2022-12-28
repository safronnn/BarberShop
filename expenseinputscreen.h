#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include <iostream>
#include "expenselist.h"
#include <string>
using namespace std;

// Класс ExpenseInputScreen(экран ввода затрат)-----------------------------------------------------------------
class ExpenseInputScreen {
private:
    ExpenseList* PtrExpenseList;
public:
    ExpenseInputScreen(ExpenseList*);
    void setExpense();
};
// Конец класса ExpenseInputScreen------------------------------------------------------------------------------

#endif // EXPENSEINPUTSCREEN

