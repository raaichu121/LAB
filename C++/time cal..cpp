#include<iostream>
using namespace std;
class Time
{
	private:
		int min, sec;
	public:
		Time()
		{
			min = 0;
			sec = 0;
		}
		Time (float hour)
		{
			min = hour*60;
			sec = (hour*60-min)*60;
		}
		void display()
		{
			cout<< min << "min"<<"\n" << sec << "sec"; 
		}
	};
	
int main()
{
	float hour;
	cout << "Enter the hour:";
	cin >> hour;
	Time t;
	t=hour;
	t.display();
	return 0;
	
}		