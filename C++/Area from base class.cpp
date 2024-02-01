#include<iostream>
using namespace std;
class A
{
   protected:
	int l , b;
	public:
		int area(int a, int c){
	
		 l=a;
		 b=c;
		 cout << "Area from base class:" << endl;
		 cout <<  l*b;
	}
};

class B : public A
{
   protected:
	int len , bre;
	public:
		void area(int n, int m)
	{
		 len=n;
		 bre=m;
		 cout << "Area from drived class:" << endl;
		 cout <<  len*bre;
	}
};

int main()
{
	B b;
	b.area(4,5);
	b.A :: area(4,5);
}

//	second s(10,15);
//	s.showdata();
//	s.first::showdata();
	

