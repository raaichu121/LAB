#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(int r,int c)
		{
			real=r;
			img=c;
		}
		void display()
		{
			cout<<real<<endl;
			cout<<img;
		}
		complex operator -();
};
complex complex::operator -()
{
	complex a;
	a.real=-real;
	a.img=-img;
	return a;
}
int main()
{
	complex a(2,5),b;
	b=-a;
	b.display();
	return 0;
}
