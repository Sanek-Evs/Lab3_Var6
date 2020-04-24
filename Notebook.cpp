#include"Notebook.h"
#include<iostream>
using namespace std;
Notebook::Notebook():ElectronnoeUstroistvo()
{
this->brend="Lenovo";
}
Notebook::Notebook(string const & model,unsigned int const snumber,string const& brend ):
    ElectronnoeUstroistvo(model,snumber)
{
    this->brend=brend;
}
Notebook::Notebook(Notebook const & notebook ):ElectronnoeUstroistvo(notebook)
{
    this->brend=notebook.brend;
}
const string& Notebook::getbrend()const
{
    return brend;
}
void Notebook::setbrend (string const& brend)
{
    this->brend=brend;
}
Notebook& Notebook::operator=(Notebook const& notebook)
{
    ElectronnoeUstroistvo::operator=(notebook);
    this->brend=notebook.brend;
    return *this;
}
void Notebook::print()const
{
    cout<<"\nНоутбук:";
    cout<<"\nМодель - "<<this->model;
    cout<<"\nСерийный номер - "<<this->snumber;
    cout<<"\nБренд - "<<this->brend;
}
