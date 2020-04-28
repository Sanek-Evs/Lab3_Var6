#include"Planshet.h"
#include<iostream>
using namespace std;

Planshet::Planshet():ElectronnoeUstroistvo()
{
this->diagonal=10;
}
Planshet::Planshet(string const & model,unsigned int const snumber,const& diagonal ):
    ElectronnoeUstroistvo(model,snumber)
{
    this->diagonal=diagonal;
}
Planshet::Planshet(Planshet const & planshet ):ElectronnoeUstroistvo(planshet)
{
    this->diagonal=planshet.diagonal;
}
const int& Planshet::getdiagonal()const
{
    return diagonal;
}
bool Planshet::setdiagonal (int const& diagonal)
{
    if (diagonal > 0)
    {
    this->diagonal=diagonal;
    return true;
    }
    else
    {return false;}
}
Planshet& Planshet::operator=(Planshet const& planshet)
{
    ElectronnoeUstroistvo::operator=(planshet);
    this->diagonal=planshet.diagonal;
    return *this;
}
void Planshet::print() const
{
    cout<<"\nПланшет:";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nДиагональ - "<<this->diagonal;
}
