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

    cout<<"\n\n1 - �������� �������������� ��������� honor\n";
    cout<<"2 - ������ ���� �������������� ���������\n";
    cout<<"3 - �������� �������������� �������� Lenovo\n";
    cout<<"4 - ������ ���� �������������� ��������\n";
    cout<<"5 - �������� �������������� �������� Prestigio\n";
    cout<<"6 - ������ ���� �������������� ��������\n";
    cout<<"7 - �������� �������������� ����� ����� �� Apple\n";
    cout<<"8 - ������ ���� �������������� ����� �����\n";
    cout<<"9 - ���������� �������� � �� ���������\n";
    cout<<"10 - ���������� ������� � �� ���������\n";
    cout<<"11 - ���������� ������� � �� ���������\n";
    cout<<"12 - ���������� ����� ���� � �� ���������\n";
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
    cout<<"������� ������:  ";
    cin>>model;
    smart.setmodel(model);
    cout<<"������� �����:  ";
    cin>>snumber;
    smart.setserialnumber(snumber);
    cout<<"������� ���������:  ";
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
    cout<<"������� ������:  ";
    cin>>model;
    nout.setmodel(model);
    cout<<"������� �����:  ";
    cin>>snumber;
    nout.setserialnumber(snumber);
    cout<<"������� �����:  ";
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
    cout<<"������� ������:  ";
    cin>>model;
    tabl.setmodel(model);
    cout<<"������� �����:  ";
    cin>>snumber;
    tabl.setserialnumber(snumber);
    cout<<"������� ���������:  ";
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
    cout<<"������� ������:  ";
    cin>>model;
    watch.setmodel(model);
    cout<<"������� �����:  ";
    cin>>snumber;
    watch.setserialnumber(snumber);
    cout<<"������� ����� ��������:  ";
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
