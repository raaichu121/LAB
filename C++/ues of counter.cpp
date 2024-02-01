#include<iostream>
using namespace std;
class counter
{
private:
    int count;
public:
    counter()
    {
        count=0;
    }
    counter(int c )
    {
        count=c;
    }
    int returncount()
    {
        return (count);
    }
    friend counter operator ++(counter &c);
};
counter operator ++(counter &c)
{
    return (++c.count);
}
int main ()
{
    counter c1,c2;
    cout<<"c1="<<c1.returncount()<<endl;
    cout <<"c2+"<<c2.returncount()<<endl;
    ++c1;
    ++c2;
    cout <<"c1+"<<c1.returncount()<<endl;
    cout<<"c2+"<<c2.returncount()<<endl;
    return 0;
}

