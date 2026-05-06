#pragma once
#include <string>
#include <iostream>

class Account {
public:
    Account(int accountNumber, int balance, std::string first, std::string last);

    int getBalance() const;

    int getAccountNumber() const;

    std::string getFirstName() const;

    std::string getLastName() const;

    void withdraw(int amount);

    void deposit(int amount);

    void transfer(int amount, Account& receiver);

    bool detectError(int amount);

private:

    int accountNumber;
    int balance;
    std::string first;
    std::string last;
};
