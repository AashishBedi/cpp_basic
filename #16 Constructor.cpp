#include<iostream>
using namespace std;


class Employee{
	public:
		string name;
		int salary;
		
		Employee(string name, int salary){
			this->name = name;
			this->salary = salary;
		}
		
		void printDetails(){
			cout<<"The name of emp is "<<this->name<<" and his salary is "<<this->salary<<endl;
		}
};

int main()
{
	Employee Ash("Aashish", 3000);
	
	Ash.printDetails();
}

