#pragma once
#include <iostream>
using namespace std;
class Bank
{
private:
	string name;
	double money;
public:
	Bank() = default;
	Bank(string name, double money);
	string getName();
	double getMoney();
	void setName(string name);
	void setMoney(double money);

};
#include "Bank.h"

Bank::Bank(string name, double money)
{
	this->name = name;
	if (money < 0)
	{
		this->money = 0;
	}
	else
	{
		this->money = money;

	}
}

string Bank::getName()
{
	return this->name;
}

double Bank::getMoney()
{
	return this->money;
}
void Bank::setName(string name)
{
	this->name = name;
}
void Bank::setMoney(double money)
{
	this->money = money;
}
#include <iostream>
using namespace std;
#include "Bank.h"

int main()
{
    cout << "Bank Application!\n";
    const unsigned int N = 4;
    Bank bank[N] = {
        {"Private Bank", 3e5},
        {"Raifaisen Bank", 2.5e4},
        {"MonoBank", 4.2e3},
        {"VST", 2.6e2} //Написати функцію, яка розшукує банки у яких грошей більше ніж 2.6e2

    };


    
}
