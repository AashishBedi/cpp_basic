#include<iostream>
using namespace std;

int main(){
	int i;
	int marks[5];
	for(i=0; i<6; i++){
		cout<<"Enter marks: "<<i<<"th student"<<endl;
		cin>>marks[i];
	}
	return 0;
}
