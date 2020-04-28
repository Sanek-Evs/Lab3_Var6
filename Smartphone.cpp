#include"Smartphone.h"
#include<iostream>
using namespace std;
Smartphone::Smartphone():ElectronnoeUstroistvo()
{
this->diagonal=6;
}
Smartphone::Smartphone(string const & model,unsigned int const snumber,int const& diagonal ):
ElectronnoeUstroistvo(model,snumber)
{
    this->diagonal=diagonal;
}
Smartphone::Smartphone(Smartphone const & smartphone ):ElectronnoeUstroistvo(smartphone)
{
    this->diagonal=smartphone.diagonal;
}
const int& Smartphone::getdiagonal()const
{
    return diagonal;
}
bool Smartphone::setdiagonal (int const& diagonal)
{
    if (diagonal > 0)
    {
    this->diagonal=diagonal;
    return true;
    }
    else
    {return false;}
}
Smartphone& Smartphone::operator=(Smartphone const& smartphone)
{
    ElectronnoeUstroistvo::operator=(smartphone);
    this->diagonal=smartphone.diagonal;
    return *this;
}
void Smartphone::print() const
{
    cout<<"\nСмартфон:  ";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nДиагональ - "<<this->diagonal;
}
