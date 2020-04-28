#include"Smartwatch.h"
#include<iostream>
using namespace std;
Smartwatch::Smartwatch():ElectronnoeUstroistvo()
{
this->battory=440;
}
Smartwatch::Smartwatch(string const & model,unsigned int const snumber,int const& battory):
    ElectronnoeUstroistvo(model,snumber)
{
    this->battory=battory;
}
Smartwatch::Smartwatch(Smartwatch const & smartwatch ):ElectronnoeUstroistvo(smartwatch)
{
    this->battory=smartwatch.battory;
}
const int& Smartwatch::getbattory()const
{
    return battory;
}
bool Smartwatch::setbattory (int const& battory)
{
    if (battory > 0)
    {
    this->battory=battory;
    return true;
    }
    else
    {return false;}
}
Smartwatch& Smartwatch::operator=(Smartwatch const& smartwatch)
{
    ElectronnoeUstroistvo::operator=(smartwatch);
    this->battory=smartwatch.battory;
    return *this;
}
void Smartwatch::print() const
{
    cout<<"\nСмарт-часы: ";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nБаттарея (MAh) - "<<this->battory;
}
