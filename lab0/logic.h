#ifndef LOGIC_H
#define LOGIC_H
/// В этом файле размещена точка входа в модуль бизнес-логики и необходимые для нее служебные структура и enum

#include "appcontext.h"
#include "operations.h"

// сделали исключение из правила "в бизнес-логике не должно быть Qt" ради удобного отладочного вывода.
#include <QDebug>


enum OperationType {
    OperationInitContext,
    OperationIncrement,
    OperationDecrement,
    OperationReset
};

struct AppParameters
{
    int newValue;
};

void DoOperation(OperationType operation, AppContext *context, AppParameters *parameters);

#endif // LOGIC_H
