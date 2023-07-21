#include<iostream>
using namespace std;


class Employee{
	public:
		string name;
		int salary;
		
		void printDetails(){
			cout<<"The name of emp is "<<this->name<<" and his salary is "<<this->salary<<endl;
		}
};

int main()
{
	Employee Ash;
	Ash.name = "Aashish";
	Ash.salary = 100000;
	
	Ash.printDetails();
}

