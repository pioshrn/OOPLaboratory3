//
// Created by tudor on 3/14/2024.
//
#include <cstring>
#include "BankAccount.h"
BankAccount::BankAccount(char n[], double nr, double b) {
    this->balance=b;
    this->number=nr;
    strcpy(this->name,n);
}

int BankAccount::deposit_funds(int x) {
    /*if(balance<x)
        std::cout<<"Inscufficient funds"<<std::endl;
    else*/
        balance+=x;
        return balance;
    }

int BankAccount::withdraw_funds(int x) {
    if(balance < x)
        std::cout<<"Inscufficient funds"<<std::endl;
    else
        balance -= x;
    return balance;
}
    std::ostream& operator<<(std::ostream& os, const BankAccount& account) {
    os << "Account Holder's Name: " << account.name<< std::endl;
    os << "Account Number: " << account.number << std::endl;
    os << "Balance: $" << account.balance << std::endl;
    return os;}

