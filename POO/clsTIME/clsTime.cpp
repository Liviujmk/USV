#include<iostream>
#include<cstring>

#include "clsTime.h"

using namespace std;

clsTIME::clsTIME(const char time[9])
{
    char *token;
    char temp[9];
    strcpy(temp, time); // Copy the input time to avoid const issues

    token = strtok(temp, ":");
    _ore = atoi(token);

    token = strtok(NULL, ":");
    _minute = atoi(token);

    token = strtok(NULL, ":");
    _secunde = atoi(token);
}

clsTIME::clsTIME(int h, int m, int s) : _ore(h), _minute(m), _secunde(s) {}

ostream& operator<<(ostream &c, clsTIME &d)
{
    c<<d._ore<<":"<<d._minute<<":"<<d._secunde<<endl;
}

istream& operator>>(istream &c, clsTIME &d)
{
    c>>d._ore>>d._minute>>d._secunde;
}

clsTIME& clsTIME::operator+(int nrSec)
{
    int totalSeconds = _ore * 3600 + _minute * 60 + _secunde + nrSec;

    // Update time components
    _ore = totalSeconds / 3600;
    _minute = (totalSeconds % 3600) / 60;
    _secunde = totalSeconds % 60;

    return *this;
}

int clsTIME::operator-(clsTIME &d)
{
    int totalSeconds = _ore * 3600 + _minute * 60 + _secunde;
    int totalSeconds2 = d._ore * 3600 + d._minute * 60 + d._secunde;
    return totalSeconds-totalSeconds2;
}

int clsTIME::operator==(clsTIME &d)
{
    int totalSeconds = _ore * 3600 + _minute * 60 + _secunde;
    int totalSeconds2 = d._ore * 3600 + d._minute * 60 + d._secunde;
    return totalSeconds==totalSeconds2;
}

clsTIME& clsTIME::operator()(int nr, char *element)
{
    int totalSeconds = _ore * 3600 + _minute * 60 + _secunde;

    if (strcmp(element, "seconds") == 0)
    {
        totalSeconds += nr;
    }
    else if (strcmp(element, "minutes") == 0)
    {
        totalSeconds += (nr * 60);
    }
    else if (strcmp(element, "hours") == 0)
    {
        totalSeconds += (nr * 3600);
    }

    _ore = totalSeconds / 3600;
    _minute = (totalSeconds % 3600) / 60;
    _secunde = totalSeconds % 60;

    return *this;

}

int clsTIME::operator()(char *element)
{
    if (strcmp(element, "seconds") == 0)
    {
        return _secunde;
    }
    else if (strcmp(element, "minutes") == 0)
    {
        return _minute;
    }
    else if (strcmp(element, "hours") == 0)
    {
        return _ore;
    }
}
