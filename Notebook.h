#pragma once
#include<string>
#include"ElectronnoeUstroistvo.h"
using namespace std;
class Notebook:public ElectronnoeUstroistvo
{
protected:
    string brend;
public:
    Notebook();
    Notebook(string const & model,unsigned int const snumber,string const& brend );
    Notebook(Notebook const & notebook );

    const string& getbrend()const;
    void setbrend (string const& brend);
    void print()const;
    Notebook& operator=(Notebook const& notebook);
}  ;
