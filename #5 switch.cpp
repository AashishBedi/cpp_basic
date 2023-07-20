#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter age: "<<endl;
	cin>>age;
	
	switch(age){
	case 12:
		cout<<"You are a child"<<endl;
		break;
		
	case 17:
	cout<<"You are a teen";
	break;
	default:

		break;
	}
	return 0;
}
