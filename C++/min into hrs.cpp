#include<iostream>
using namespace std;
class Time
{
	private:
		float min, sec;
	public:
		Time()
		{
			min=0;
			sec=0;
		}
		operator float()
		{
			float hour;
			hour =(min/60) + (sec/3600);
			return hour;
		}
		void input ()
		{ 
		 cout << "Enter min and sec:";
		 cin>> min >>sec ;
		}
};
int main()
{
	Time t1;
	float hour;
	t1.input();
	hour = t1;
	cout << hour << "hour";
	return 0;
}