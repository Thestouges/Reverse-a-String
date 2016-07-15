#include <iostream>
#include <string>

using namespace std;

void main(){
	string input, result = "";
	
	cout<<"Enter string to be reversed: ";
	getline(cin,input);

	for(int i = input.length()-1; i >= 0; i--){
		result += input[i];
	}

	cout<<"Reversed string: "<<result<<endl;
}