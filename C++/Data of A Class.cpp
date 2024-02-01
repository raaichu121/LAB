#include<iostream>
using namespace std;
class A
{
	protected:
    	float a;
	public:
	    A(){
	    	a= 0.0;
	    	
		}	
		A(float n1)
		{
			a=n1;
		}
		void showdata()
		{
			cout << "Data of A Class is" << a << endl;
		}
	};
	
class B
{
	protected:
    	float b;
	public:
	    B(){
	    	b= 0.0;
	    	
		}	
		B(float n2)
		{
			b=n2;
		}
		void showdata()
		{
			cout << "Data of B Class is" << b << endl;
		}
	};	
	
class C : public A, public B
{
	protected:
    	float c;
	public:
	    C(){
	    	a= 0.0;
	    	
		}	
		C(float n, float nb, float na) : A(a),B(b)
		{
			c=n;
			b=nb;
			a=na;
		}
		void showdata()
		{
			cout << "Data of C Class is" << a << endl;
		}
	};
	
int main()
{
	C c (20, 10, 15);
	c.showdata();
	c.A :: showdata();
}