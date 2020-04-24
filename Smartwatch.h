#pragma once
#include<string>
#include"ElectronnoeUstroistvo.h"
using namespace std;
class Smartwatch:public ElectronnoeUstroistvo
{
protected:
    int battory;
public:
    Smartwatch();
    Smartwatch(string const & model,unsigned int const snumber,int const& battory );
    Smartwatch(Smartwatch const & smartwatch );

    const int& getbattory()const;
    void setbattory(int const& battory);
    void print() const;
    Smartwatch& operator=(Smartwatch const& smartwatch);
}  ;
