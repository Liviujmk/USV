#include "stiva.h"

#include <iostream>
#include <fstream>

using namespace std;

myStack::myStack(int _dim)
{
    dim = _dim;
    sp = -1;
    stackArray = new int[dim];
}

myStack::~myStack()
{
    delete[] stackArray;
}

myStack &myStack::operator+(int c)
{
    if (!isFull())
    {
        sp++;
        stackArray[sp] = c;
    }
    return *this;
}

myStack &myStack::operator--()
{
    if (!isEmpty())
    {
        sp--;
    }
    return *this;
}

myStack &myStack::operator--(int)
{
    if (!isEmpty())
    {
        sp--;
    }
    return *this;
}

int myStack::operator!()
{
    if (!isEmpty())
    {
        return stackArray[sp];
    }
    return -1; // Or another appropriate value for an empty stack
}

myStack::operator int()
{
    return dim;
}

std::ostream &operator<<(std::ostream &c, myStack &s)
{
    for (int i = 0; i <= s.sp; i++)
    {
        c << s.stackArray[i] << " ";
    }
    return c;
}

int myStack::isEmpty()
{
    return sp == -1;
}

int myStack::isFull()
{
    return sp == dim - 1;
}
