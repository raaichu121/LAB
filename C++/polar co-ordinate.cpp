//c++ wap to convert polar co-ordinate into rectangular coordinates in source

#include<iostream>
#include<math.h>
using namespace std;
class polarClass
{
public:
	float r,th;
	polarClass();
	polarClass(float a,float b)
	{
		r=a;
		th=b;
	}
	void show()
	{
		cout<<"In polar form:\n\t r="<<r<<" and theta="<<th;
		
	}
};

//rectangular class
class rectangularClass
{
float x,y;
public:
	rectangularClass();
	
	rectangularClass(polarClass p)
	{
		x=p.r*cos(p.th);
		y=p.r*sin(p.th);
	}
	void show()
	{
		cout<<"\n\n Rectangular form :\n\tx="<<x<<"and y="<<y;
		
	}
};

int main()
{
polarClass p(15.5,13.14/2);
p.show();
rectangularClass r;
r=p;
r.show();

return 0;	
}