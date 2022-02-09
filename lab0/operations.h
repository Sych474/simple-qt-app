#ifndef OPERATIONS_H
#define OPERATIONS_H
/// В этом файле размещены реализации основных функций бизнес-логики приложерия.

#include "appcontext.h"

#define DEFAULT_VALUE 42

void Increment(AppContext *context);

void Decrement(AppContext *context);

void ResetValue(AppContext *context, int newValue);

void InitContext(AppContext *context);

#endif // OPERATIONS_H
