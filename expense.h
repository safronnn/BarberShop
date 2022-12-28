#ifndef EXPENSE
#define EXPENSE

#include <iostream>
#include <string>
using namespace std;

// Класс Expense(затраты)---------------------------------------------------------------------------------------
class Expense{
public:
    int Month, Day;
    string Type;
    float Cost;
    Expense(int m, int d, string t, float c):
        Month(m), Day(d), Type(t), Cost(c)
    {

    }
};
// Конец класса Expense------------------------------------------------------------------------------------------

#endif // EXPENSE

