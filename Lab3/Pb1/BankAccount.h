//
// Created by tudor on 3/18/2024.
//

#ifndef PB1_BANKACCOUNT_H
#define PB1_BANKACCOUNT_H

#include <cstring>
class BankAccount {
private:
    char holder_name[50];
    float acc_number,balance;
public:
    BankAccount(char name[50], float acc_number, float balance);

    void Add_funds(int suma);

    void Widthraw_funds(int suma);

    
};


#endif //PB1_BANKACCOUNT_H
