#include<iostream>
using namespace std;
class vehicle
{
	int mfg_year;
	public:
	vehicle()
	{
		cout<<"Class-Vehicle"<<endl;
	}
	void fun1()
	{
		cout<<"Function in the vehicle class"<<endl;
	}
};
class car
{
	int mfg_year;
	public:
		car()
		{
			cout<<"Class -Car"<<endl;
		}
		
		void fun2()
		{
			cout<<"Function in the car class"<<endl;
		}

};
class sports_car:public vehicle,public car
{
	int mfg_year;
	public:
		sports_car()
		{
			cout<<"Class-Sports_car"<<endl;
		}
		void fun3()
		{
			cout<<"Function in the sports car class"<<endl;
		}
		
};
int main()
{
	cout<<"Creating Object of Class Sports_car"<<endl;
	sports_car a;
	cout<<endl<<endl<<"Creating Object of Class Car"<<endl;
	car b;
	cout<<endl<<endl<<"Creating Object of Class Vehicle"<<endl;
	vehicle c;
	
	cout<<endl;
	a.fun1();
	a.fun2();
	a.fun3();
	b.fun2();
	c.fun1();
	
	return 0;
}
