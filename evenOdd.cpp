#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter the num..";
	cin>>num;
	if(num==0){
		cout<<"Number is neither even nor odd:";
	}
	else{
		(num%2==0)?cout<<"Even":cout<<"Odd";
	}
	
	return 0;
}
