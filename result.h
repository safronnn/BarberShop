#ifndef RESULT
#define RESULT

#include <iostream>
#include "servicelist.h"
#include "expenselist.h"

using namespace std;

// Класс Result-------------------------------------------------------------------------------------------------
class Result
{
private:
    ServiceList* PtrServ;
    ExpenseList* PtrEx;
    float expenses, amount;

public:
    Result(ServiceList*, ExpenseList*);
    void displayResult();
};

// Конец класса Result------------------------------------------------------------------------------------------

#endif // RESULT

