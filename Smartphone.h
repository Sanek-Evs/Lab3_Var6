#pragma once
#include<string>
#include"ElectronnoeUstroistvo.h"
using namespace std;
class Smartphone:public ElectronnoeUstroistvo
{
protected:
    int diagonal;
public:
    Smartphone();
    Smartphone(string const & model,unsigned int const snumber,int const& diagonal );
    Smartphone(Smartphone const & smartphone );

    const int& getdiagonal()const;
    void setdiagonal (int const& diagonal);
    void print()const;
    Smartphone& operator=(Smartphone const& smartphone);
}  ;
