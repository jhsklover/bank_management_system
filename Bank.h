#pragma once

#include "Account.h"
#include <vector>

class Bank {
public:
    Bank(std::vector<Account>& bank);

    void createCSV();

    void loadCSV(const std::string& file);

    void updateCSV(const std::string& fileName);

    //Search
    int binarySearchByNumber(int accountNumber);

    int binarySearchByBalance(int accountNumber);

    int jumpSearchByNumber(int targetAccountNumber);

    int jumpSearchByBalance(int targetBalance);

    int linearSearchByBalance(int targetValue);

    int linearSearchByNumber(int targetValue);

    //Sort
    void insertionSortByBalance();

    void insertionSortByNumber();

    void swap_function(Account& A1, Account& A2);

    int partitionByNumber(int low, int high);

    int partitionByBalance(int low, int high);

    void merge(int left, int middle, int right, bool compare);

    void mergeSort(int left, int right, bool compare);

    void mergeSortByNumber();

    void mergeSortByBalance();

    void quickSortByBalance();

    void quickSortByBalance(int, int);

    void quickSortByNumber();

    void quickSortByNumber(int, int);


    //Operations

    void withdrawB(int& accountNumber, int amount);

    void depositB(int& accountNumber, int amount);

    void transferB(int& sender, int amount, int& receiver);

    int getBankSize();

private:

    std::vector<Account> accountList;
};
