#include "Account.h"

Account::Account(int acc, int bal, std::string fName, std::string lName)
    : accountNumber(acc), balance(bal), first(fName), last(lName){}

int Account::getBalance() const {
    return balance;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

std::string Account::getFirstName() const {
    return first;
}

std::string Account::getLastName() const {
    return last;
}

void Account::withdraw(int amount) {
    if(detectError(amount)) return;

    balance -= amount;
}

void Account::deposit(int amount) {
    if (amount <= 0) {
        std::cout << "Amount has to be greater than 0." << std::endl;
        return;
    }
    balance += amount;
}

void Account::transfer(int amount, Account& receiver) {

    if (detectError(amount)){
        return;
    }
    withdraw(amount);
    receiver.deposit(amount);
}

bool Account::detectError(int amount) {
    if (amount <= 0) {
        std::cout << "Amount has to be greater than 0." << std::endl;
        return true;
    }

    if(getBalance() < amount) {
        std::cout << "Inadequate funds for transaction. " << std::endl;
        return true;
    }

    return false;
} 
