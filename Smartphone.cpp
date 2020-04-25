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
void Smartphone::setdiagonal (int const& diagonal)
{
    int a;
    a=diagonal;
    while (a<=0)
    {
        cout << "Неверное значение, введите еще раз - ";
        cin>>a;
    }
    this->diagonal=a;
}
Smartphone& Smartphone::operator=(Smartphone const& smartphone)
{
    ElectronnoeUstroistvo::operator=(smartphone);
    this->diagonal=smartphone.diagonal;
    return *this;
}
void Smartphone::print()const
{
    cout<<"\nСмартфон:  ";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nДиагональ - "<<this->diagonal;
}
