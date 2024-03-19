//
// Created by tudor on 3/18/2024.
//
#include <exception>
#include "BankAccount.h"

BankAccount::BankAccount(char name[50], float acc_number, float balance)
{
    strcpy(this->holder_name , name);
    this->acc_number = acc_number;
    this->balance = balance;
}