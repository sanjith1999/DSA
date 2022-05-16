#include <stdio.h>
//Indirect Recursion
void funA(int n);
void funB(int n);

//Nested Recursion
void nested_recursion(int n);

int main() { return 0; }

void funA(int n)
{
    if (n > 0)
        funB(n - 1);
}

void funB(int n)
{
    if (n > 1)
        funA(n / 2);
}

void nested_recursion(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}