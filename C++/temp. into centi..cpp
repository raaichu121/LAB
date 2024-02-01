#include<iostream>
using namespace std;
class centigrade
{
	float cel;
	public:
		void get()
		{
			cout << "Enter[ the temp.";
			cin >> c;
		}
	float getc ()
	{
	return c;
	}
};

class fahrenheit
{
	private:
		float fahr;
	public:	 
	    fahrenheit()
		{
			fahr =0;
		fahrenheit (float t)
		{
			fahr = t;

		}
		fahrenheit (centigrade C)
		{
			fahr=cel*9/5 +32;
        
}

		void display()
		{
			cout<< t;
		}
};

int main()
{
	celsius c(100);
	fahrenheit f;
	f=c;
	f.display();
	return 0;
}
