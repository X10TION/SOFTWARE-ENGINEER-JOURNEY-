#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {

	cout<<"*****   Welcome to the backbone office   *********** "  <<endl;
	cout<< "Please options:\n 1. Create Account\n 2. login\n 3.exist"<<  endl;
	cout<< endl;
	int y;
	int option;
	cout<<">>backbone office >>";
	cin>>  option;
	if(option == 1){
		cout<<"**** Terms and Condition  ********"<< endl;
		cout<<"new to backbone office? please type y to agre to term and conditions,"<< endl;
	
		cin>>y;
		if(y == 1){
			cout<<"Thank you for accepting out term and conditions please fill in the form"<<endl;
			string firstName;
			string lastName;
			cin>> firstName;
		}
			
		}else{
			cout<< "logout out"<< endl;
		}
	
		
	return 0;
}
