#include <iostream> 
#include <string>
#include "BanckAccount.h"
using namespace std;

int main()
{
	BankAccount account;
	int choice;
	string name;
	int accNum;
	double amount;

	do
	{
		cout << "\nMENU\n";
		cout << "1. Create Account\n";
		cout << "2. Deposit\n";
		cout << "3. Withdraw\n";
		cout << "4. Display Account\n";
		cout << "5. Exit\n";
		cout << "Choose an option: "; 
		cin >> choice;

		switch (choice)
		{ 
		case 1:
			cout << "Enter name: ";
			cin.ignore();
			getline(cin, name);

			cout << "Enter account number: ";
			cin >> accNum;

			cout << "Eneter initial balance: ";
			cin >> amount;

			account.createAccount(name, accNum, amount);
			break;

		case 2:
			cout << "Enter amount to deposit: ";
			cin >> amount;
			account.deposit(amount);
			break;

		case 3:
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			account.withdraw(amount);
			break;

		case 4:
			account.displayAccount();
			break;

		case 5:
			cout << "Eciting program...\n";
			break;

		default:
			cout << "Invalid option.\n";
		}
	} while (choice != 5);

	return 0;
}