#include <iostream>
#include"ElectronnoeUstroistvo.h"
#include"Smartphone.h"
#include"Notebook.h"
#include"Planshet.h"
#include"Smartwatch.h"
using namespace std;

int main()
{
    string model;
    int snumber;
    int diagonal;
    string brend;
    int battory;
    Smartphone s1;
    Notebook n1;
    Planshet p1;
    Smartwatch sm1;



    setlocale(0, "");

    int k;
    for (;1;)
    {

    cout<<"\n\n1 - исходные характеристики смартфона honor\n";
    cout<<"2 - ввести свои характеристики смартфона\n";
    cout<<"3 - исходные характеристики ноутбука Lenovo\n";
    cout<<"4 - ввести свои характеристики ноутбука\n";
    cout<<"5 - исходные характеристики планшета Prestigio\n";
    cout<<"6 - ввести свои характеристики планшета\n";
    cout<<"7 - исходные характеристики смарт часов от Apple\n";
    cout<<"8 - ввести свои характеристики смарт часов\n";
    cout<<"9 - копировать смартфон с эл утройства\n";
    cout<<"10 - копировать ноутбук с эл утройства\n";
    cout<<"11 - копировать планшет с эл утройства\n";
    cout<<"12 - копировать смарт часы с эл утройства\n";
    cin >> k;

   switch(k)
        {
case(1):
    {
    Smartphone honor("honor",1111,6);
    honor.print();
    break;
    }
case(2):
    {
    Smartphone smart;
    cout<<"¬ведите модель:  ";
    cin>>model;
    smart.setmodel(model);
    cout<<"¬ведите номер:  ";
    cin>>snumber;
    smart.setserialnumber(snumber);
    cout<<"¬ведите диагональ:  ";
    cin>>diagonal;
    smart.setdiagonal(diagonal);
    smart.print();
    break;
    }
case(3):
    {
    Notebook Lenovo ("ideapad S130",2222,"Lenovo");
    Lenovo.print();
    break;
    }
case(4):
    {
    Notebook nout;
    cout<<"¬ведите модель:  ";
    cin>>model;
    nout.setmodel(model);
    cout<<"¬ведите номер:  ";
    cin>>snumber;
    nout.setserialnumber(snumber);
    cout<<"¬ведите бренд:  ";
    cin>>brend;
    nout.setbrend(brend);
    nout.print();
    break;
    }
    case(5):
    {
    Planshet Prestigio ("Prestigio",3333,10);
    Prestigio.print();
    break;
    }
case(6):
    {
    Planshet tabl;
    cout<<"¬ведите модель:  ";
    cin>>model;
    tabl.setmodel(model);
    cout<<"¬ведите номер:  ";
    cin>>snumber;
    tabl.setserialnumber(snumber);
    cout<<"¬ведите диагональ:  ";
    cin>>diagonal;
    tabl.setdiagonal(diagonal);
    tabl.print();
    break;
    }
    case(7):
    {
    Smartwatch apple("Apple Watch",4444,440);
    apple.print();
    break;
    }
case(8):
    {
    Smartwatch watch;
    cout<<"¬ведите модель:  ";
    cin>>model;
    watch.setmodel(model);
    cout<<"¬ведите номер:  ";
    cin>>snumber;
    watch.setserialnumber(snumber);
    cout<<"¬ведите объем баттареи:  ";
    cin>>battory;
    watch.setbattory(battory);
    watch.print();
    break;
    }
    case(9):
    {
    Smartphone s2(s1);
    s2.print();
    break;
    }
    case(10):
    {
    Notebook n2;(n1);
    n2.print();
    break;
    }
    case(11):
    {
    Planshet p2(p1);
    p2.print();
    break;
    }
    case(12):
    {
    Smartwatch sm2(sm1);
    sm2.print();
    break;
    }
    }
    }
    return 0;
}
