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
void Smartwatch::setbattory (int const& battory)
{
    this->battory=battory;
}
Smartwatch& Smartwatch::operator=(Smartwatch const& smartwatch)
{
    ElectronnoeUstroistvo::operator=(smartwatch);
    this->battory=smartwatch.battory;
    return *this;
}
void Smartwatch::print()
{
    cout<<"\nСмарт-часы: ";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nБаттарея (MAh) - "<<this->battory;
}
