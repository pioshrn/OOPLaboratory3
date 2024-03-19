//
// Created by tudor on 3/14/2024.
//
#include <iostream>
#ifndef OOPLABORATORY3_BANKACCOUNT_H
#define OOPLABORATORY3_BANKACCOUNT_H


class BankAccount {
private:
    char name[50];
    double number;
    double balance;
public:
    BankAccount(char n[], double nr, double b);

    int deposit_funds(int x);

    int withdraw_funds(int x);
    friend  std::ostream& operator<<(std::ostream& os, const BankAccount& account);

};
// Overloaded stream insertion operator to display account details


#endif //OOPLABORATORY3_BANKACCOUNT_H
