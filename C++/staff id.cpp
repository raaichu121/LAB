#include<iostream>
using namespace std;
class staff
{protected:
	int staffid;
	public:
		
		int id()
		{
			cout<<"Enter staff id"<<endl;
			cin>>staffid;
		}
		
};
class lecturer: public staff
{
    public:
	char a[50];
	int sub()
		{
			cout<<"Enter subject"<<endl;
			cin>>a;
		}
		void lec()
		{
		
		cout<<"Id="<<staffid<<"Subject="<<a<<endl;;
}
};
class admin:public staff
{public:
	char b[50];
	int post()
		{
			cout<<"Enter post"<<endl;
			cin>>b;
		}
		void ad()
		{
		
		cout<<"Id="<<staffid<<"Post="<<b<<endl;
}
	
};
class librarian:public staff
{
public:
	char b[50];
	int s()
		{
			cout<<"Enter shift"<<endl;
			cin>>b;
		}
		void dis()
		{
		
		cout<<"Id="<<staffid<<"Shift="<<b<<endl;
}
	
};
int main()
{
	lecturer l;
	admin a;
	librarian s;
	l.id();
	l.sub();
	a.id();
	a.post();
    s.id();
	s.s();
	l.lec();
	a.ad();
	s.dis();
	return 0;
}