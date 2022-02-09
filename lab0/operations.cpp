#include "operations.h"

void Increment(AppContext *context)
{
    context->currentValue++;
}

void Decrement(AppContext *context)
{
    context->currentValue--;
}

void ResetValue(AppContext *context, int newValue)
{
    context->currentValue = newValue;
}

void InitContext(AppContext *context)
{
    context->currentValue = DEFAULT_VALUE;
    context->clickCount = 0;
}
