#include <iostream>
#include <string>
using namespace std;

int main ()
{
	//variable declaration
	string name;
	int choice, choice2, quantity1, quantity2;
	char anything, order2;
	double bill1, bill2, price1, price2, TotalBill, payment, change;
	
	//Enter  (Name);
	cout << "Enter your Name: ";
	getline (cin, name);
	system ("cls");
	
	//Display Menu
	start:
	cout << "***********Welcome to the Restaurant*********** \n";
	   cout << "Hello " << name << "!";
	   cout << endl;
	   cout << endl;
	cout << "=====================Food Menu=====================\n" << endl;
	cout << "[1] Burger.................................P30.50\n";
	cout << "[2] Fried Chicken..........................P50.00 \n";
	cout << "[3] Pizza..................................P199.00 \n";
	cout << "[4] Spaghetti..............................P70.00 \n";
	cout << "[5] Fries..................................P45.50 \n";
	cout << "[6] Quit";
	cout << endl;
	
	//Input Order
	do{
	cout << "\nEnter your choice: ";
	cin >> choice;
		switch (choice){
			case 1:
			price1 = 30.50;
			break;
			case 2:
			price1 = 50;
			break;
			case 3:
			price1 = 199;
			break;
			case 4:
			price1 = 70;
			break;
			case 5:
			price1 = 45.50;
			break;
			default:
			price1 = 0;
		}
	if (choice > 6 ){
	cout << "\nInvalid";
	}
	if  (choice == 6){
		cout << "\n============Thank you. Have a nice day!============\n";
		return 0;
	}
	}while (choice > 6);
	
	cout << "Enter Quantity: ";
	cin >> quantity1;
	bill1 = quantity1 * price1;
	
	//Take another order or not
	cout << "\nWant anything else? Y/N : ";
	cin >> anything;
	if (anything == 'Y' || anything == 'y'){
		do{
		cout << "\nEnter your second order: ";
		cin >> choice2;
		switch (choice2){
			case 1:
			price2 = 30.50;
			break;
			case 2:
			price2 = 50;
			break;
			case 3:
			price2 = 199;
			break;
			case 4:
			price2 = 70;
			break;
			case 5:
			price2 = 45.50;
			break;
			case 6:
			cout << "\n============Thank you. Have a nice day!============\n";
			return 0;
			break;
			default:
			cout << "Invalid Order!\n";
			price2 = 0;
			
		}}
		while (choice2 > 6);}
		if (anything == 'Y' || anything == 'y'){
		cout << "Enter Quantity: ";
		cin >> quantity2;
		bill2 = quantity2 * price2;
		}
		
		//Calculate Total bill
		TotalBill = bill1 + bill2;

		//Display Bill
		system ("cls");
		cout << "=====================Total Bill====================\n\n";
		cout << name << endl;
		cout << "Total Bill: P" << TotalBill;
		do{
		cout << "\nPAYMENT: ";
		cin >> payment;
		if (payment < TotalBill){
			cout << "The amount is too low!\n";
		}
		}while (payment < TotalBill);
		change = payment - TotalBill;
		cout << "\nThank you for buying. ";
		cout << "\nYour change is: P" << change << endl;
		
		cout << "\nWould you like to order again? Y/N: ";
		cin>> order2;
		if (order2 == 'Y' || order2 == 'y'){
			system ("cls");
			goto start;
		}
		else{
			cout << "\n============Thank you. Have a nice day!============\n";
		} 
	
	return 0;
}