#include<iostream>
using namespace std;

int main(){
	int i,j;
	int arr[2][3] = {{1,2,3}, {4,5,6}};
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout<<"The value at "<<i<<","<<j<<" is: "<<arr[i][j]<<endl;
		}
	}
	return 0;
}
