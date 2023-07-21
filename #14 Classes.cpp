#include<iostream>
using namespace std;


class Employee{
	public:
		string name;
		int salary;
};

int main()
{
	Employee Ash;
	Ash.name = "Aashish";
	Ash.salary = 100000;
	
	cout<<"The name of emp is "<<Ash.name<<" and his salary is "<<Ash.salary<<endl;
}

