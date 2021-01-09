#include<iostream>
using namespace std;
class Student
{
	int roll_no;
	string name;
	public:
		void getData(int x,string y)
		{
			roll_no=x;
			name=y;
		}
		void putData()
		{
			cout<<"Name :: "<<name<<endl;
			cout<<"Roll No.::  "<<roll_no<<endl;
		}
};




















int main()
{
	Student s1;
	s1.getData(10,"abc");
	s1.putData();
	return 0;	
}
