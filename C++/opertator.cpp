#include<iostream>
using namespace std;
class operators
{
	int a, b;
    public: 
        operators()
		{
			a=0;
			b=0;
		}
     	void input (int x, int y)
     	{
     		a=x;
     		b=y;
		 }
		 void display()
		 {
		 	cout << a << endl << b;
		 }
		 friend void operator -(operators &d);
};

void operator -(operators &d)
{
	d.a=-d.a;
	d.b=-d.b;
}

int main()
{
	operators o1;
	o1.input(5,6);
	operator -(o1);
	o1.display();
	return 0;
}