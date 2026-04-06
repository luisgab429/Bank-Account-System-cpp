#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount
{
private:
	string name;
	int accountNumber;
	double balance;

public:
	BankAccount()
	{
		name = "";
		accountNumber = 0;
		balance = 0.0;
	}

	void createAccount(string n, int accNum, double initialBalance)
	{
		name = n;
		accountNumber = accNum;
		balance = initialBalance;
	}

	void deposit(double amount)
	{
		if (amount > 0)
		{
			balance += amount;
			cout << "Deposit successful.\n";
		}
		else
		{
			cout << "Invalid amount.\n";
		}
	}

	void withdraw(double amount)
	{
		if (amount > 0 && amount <= balance)
		{
			balance -= amount;
			cout << "Withdrawal successful.\n";
		}
		else
		{
			cout << "Invalid or insufficient funds.\n";
		}
	}

	void displayAccount() const
	{
		cout << "\nAccount Information\n";
		cout << "Name: " << name << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: $" << balance << endl;
	}
};

#endif


