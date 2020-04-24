#pragma once
#include<string>
#include"ElectronnoeUstroistvo.h"
using namespace std;
class Planshet:public ElectronnoeUstroistvo
{
protected:
    int diagonal;
public:
    Planshet();
    Planshet(string const& model,unsigned int const snumber,int const& diagonal );
    Planshet(Planshet const & planshet);

    const int& getdiagonal()const;
    void setdiagonal (int const& diagonal);
    void print();
    Planshet& operator=(Planshet const& planshet);
}  ;

