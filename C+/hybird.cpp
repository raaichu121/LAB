
//Hybrid Inheritance in C++ Programming

#include<iostream>
using namespace std;          
class grandfather
{
public:
    void house()
    {
        cout<<"3BHK House."<<endl;
    }
};
class father:public grandfather
{
public:
    void land()
    {
        cout<<"5Arcs of Land."<<endl;
    }
};
class mother
{
public:
    void gold()
    {
        cout<<"25g of Gold."<<endl;
    }
};
class son:public father,public mother
{
  public:
    void car()
    {
        cout<<"Audi Car."<<endl;
    }
};
 
 
int main()
{
    son o;
    o.house();
    o.land();
    o.car();
    o.gold();
    return 0;
}