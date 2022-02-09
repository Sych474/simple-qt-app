#include "logic.h"

void Log(OperationType operation)
{
    switch (operation) {
    case OperationInitContext:
        qDebug() << "OperationInitContext";
        break;
    case OperationIncrement:
        qDebug() << "OperationIncrement";
        break;
    case OperationDecrement:
        qDebug() << "OperationDecrement";
        break;
    case OperationReset:
        qDebug() << "OperationReset";
        break;
    }
}

void IncrementClickCount(OperationType operation, AppContext *context)
{
    switch (operation) {
    case OperationIncrement:
    case OperationDecrement:
    case OperationReset:
        context->clickCount++;
        break;
    case OperationInitContext:
        break;
    }
}

void DoOperation(OperationType operation, AppContext *context, AppParameters *parameters)
{
    switch (operation) {
        case OperationIncrement:
            Increment(context);
            break;
        case OperationDecrement:
            Decrement(context);
            break;
        case OperationReset:
            ResetValue(context, parameters->newValue);
            break;
        case OperationInitContext:
            InitContext(context);
            break;
    }
    IncrementClickCount(operation, context);
    Log(operation);
}

