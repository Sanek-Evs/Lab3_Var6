#pragma once
#include<string>
using namespace std;
class ElectronnoeUstroistvo
{
protected:
    string model;
    int snumber;
public:
    ElectronnoeUstroistvo();
    ElectronnoeUstroistvo(string const & model,int const snumber );
    ElectronnoeUstroistvo(ElectronnoeUstroistvo const & electr_ust );

    const string& getmodel()const;
    const int getserialnumber()const;
    void setmodel (string const& model);
    void setserialnumber(int const snumber);

    virtual void print()=0;
    ElectronnoeUstroistvo& operator=(ElectronnoeUstroistvo const& electr_ust);


};
