#include <iostream>

using namespace std;

int main() {
	
	char ch;
	int ASCII;
	
	cout<<"Enter the Character:";
	cin>>ch;
	ASCII=ch;
	
	if(ASCII>=65 && ASCII<=90){
		cout<<"Character is capital(A-Z)";
	}
	
	else if(ASCII>=97 && ASCII<=122){
		cout<<"Character is small(a-z)";
	}
	else if(ASCII>=48 && ASCII<=57){
		cout<<"Character is a number(0-9)";
	}
	else if((ASCII>=0 && ASCII<=47 ) || (ASCII>=58 && ASCII<=64)||(ASCII>=91 && ASCII<=97)||(ASCII>=123 && ASCII<=127))
	{
		cout<<"Character is a special symbol";
	}
	return 0;
}
