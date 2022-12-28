#ifndef EXPENSELIST
#define EXPENSELIST

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Класс ExpenseList(Список затрат)------------------------------------------------------------------------------
class ExpenseList{
private:
    vector<Expense*> VectPtrsExpenses;
    vector<Expense*>::iterator iter;
public:
    ~ExpenseList();
    void insertExp(Expense*);
    void displayExp();
    float displaySumExp();
};
// Конец класса ExpenseList-------------------------------------------------------------------------------------

#endif // EXPENSELIST

