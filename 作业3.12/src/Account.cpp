#include<iostream>
#include "Account.h"

using namespace std;

Account::Account(double initialBalance)
{
    balance=0;
    if(initialBalance>0)
        balance=initialBalance;
    if(initialBalance<0)
        cout<<"Error:initial balance can not be negative.\n"<<endl;
}
void Account::credit(double amount)
{
    balance=balance+amount;
}
void Account::debit(double amount)
{
    if(balance<amount)
        cout<<"Debit amount exceeded account balance.\n"<<endl;
    if(balance>=amount)
        balance=balance-amount;
}
double Account::getBalance()
{
    return balance;
}

