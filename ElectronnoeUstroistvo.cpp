#include "ElectronnoeUstroistvo.h"
using namespace std;
ElectronnoeUstroistvo::ElectronnoeUstroistvo()
{
    this->model="Test model";
    this->snumber=1234;
}
ElectronnoeUstroistvo::ElectronnoeUstroistvo(string const & model,int const snumber)
{
    this->model=model;
    this->snumber=snumber;
}
ElectronnoeUstroistvo::ElectronnoeUstroistvo(ElectronnoeUstroistvo const & electr_ust)
{
    this->model=electr_ust.model;
    this->snumber=electr_ust.snumber;
}
const string& ElectronnoeUstroistvo::getmodel()const
{
    return model;
}
const int ElectronnoeUstroistvo::getserialnumber()const
{
    return snumber;
}
 void ElectronnoeUstroistvo::setmodel (string const& model)
{
    this->model=model;
}
void ElectronnoeUstroistvo::setserialnumber(int const snumber)
{
    this->snumber=snumber;
}
ElectronnoeUstroistvo& ElectronnoeUstroistvo::operator=(ElectronnoeUstroistvo const& electr_ust)
{
    this->model=electr_ust.model;
    this->snumber=electr_ust.snumber;
    return *this;
}
