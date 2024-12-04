#include<iostream>
using namespace std;
int main(){
	int choice, income, expense, balance=1000; //declaring variables
	
	//using do while loop
	
	do{    // Menu
		cout<<"\n***PERSONAL BUDGET TRACKER***\n\n";
		cout<<"***Menu***\n";
		cout<<"1. Add Income\n";
		cout<<"2. Add Expense\n";
		cout<<"3. View Balance\n";
		cout<<"4. Exit\n\n";
		cout<<"\nPlease select an option from the above menu: ";
		cin>> choice;
		
		switch(choice){ 			// using switch case to handle choices
			case 1:
				cout<<"Enter your income: ";
				cin>> income;
				if (income <= 0){
					cout<<"Invalid Amount. Please enter a positive number.\n";
					continue;
				} else {
					balance += income;
					cout<<"Your income is: Rs. "<< income << endl;
				}
				break;
			case 2:
				cout<<"Enter your expense: ";
				cin>> expense;
				if (expense <= 0){
					cout<<"Invalid Amount. Please enter a positive number.\n";
					continue;
				} else if (expense > balance){
					cout<<"Error! Insufficient balance for this expense. Please enter the expense:";
					continue;
				} else {
					balance -= expense;
					cout<<"Your expense is: Rs. "<< expense << endl;
				}
				break;
			case 3:
				cout<<"Your balance is: Rs. "<< balance << endl;
				break;
			case 4:
				cout<<"Exiting the menu...";
				break;
			default:
				cout<<"Invalid selection. Please select an option from the above menu.\n";
		}
	} while (choice!=4);
	
	return 0;
}
