#include <iostream>
#include <chrono>
#include "Bank.h"

using namespace std::chrono;

int main(){

    std::vector<Account> accounts;

    Bank testBank(accounts);
    testBank.loadCSV("accountData.csv");
    int choice;

    do {

        std::cout << "Welcome to the Bank Management System." << std::endl;
        std::cout << "We will test the sorting and searching algorithms." << std::endl;
        std::cout << "Choose an option\n1 - Search\n2 - Sort\n3 - Exit";
        std::cout << std::endl;
        std::cin >> choice;

        switch(choice){

            // Searching algorithms
            case 1:
            {

                // Linear Search

                auto begin = high_resolution_clock::now();
                int result = testBank.linearSearchByNumber(357958);
                std::cout << "--------------------------------------------" << std::endl;
                std::cout << "Starting Linear Search..." << std::endl << std::endl;
                auto finish = high_resolution_clock::now();

                std::cout << "Account number 357958 found at index: " << result << std::endl;
                std::cout << "Lookup time: " << duration_cast<microseconds>(finish-begin).count()
                          << " microseconds" << std::endl << std::endl;

                // Jump and Binary Search require already sorted vector
                // Use Quick Sort to sort the vector prior to Jump/Binary Search

                // Jump Search
                testBank.quickSortByNumber();

                auto begin1 = high_resolution_clock::now();
                int result1 = testBank.jumpSearchByNumber(357958);
                std::cout << "--------------------------------------------" << std::endl;
                std::cout << "Starting Jump Search..." << std::endl << std::endl;
                auto finish1 = high_resolution_clock::now();

                std::cout << "Account number 357958 found at index: " << result1 << std::endl;
                std::cout << "Lookup time: " << duration_cast<microseconds>(finish1-begin1).count()
                          << " microseconds" << std::endl << std::endl;

                // Binary Search
                auto begin2 = high_resolution_clock::now();
                int result2 = testBank.binarySearchByNumber(357958);
                std::cout << "--------------------------------------------" << std::endl;
                std::cout << "Starting Binary Search..." << std::endl << std::endl;
                auto finish2 = high_resolution_clock::now();

                std::cout << "Binary Search:" << std::endl;
                std::cout << "Account number 357958 found at index: " << result2 << std::endl;
                std::cout << "Lookup time: " << duration_cast<microseconds>(finish2-begin2).count()
                          << " microseconds" << std::endl << std::endl;

            break;

            }

            // Sorting algorithms
            case 2:
            {

                testBank.loadCSV("accountData.csv");
                // Insertion sort
                // Very slow -- O(n^2) so 10^12 operations. Didn't even finish overnight.

                /*
                auto begin3 = high_resolution_clock::now();
                testBank.insertionSortByNumber();
                auto finish3 = high_resolution_clock::now();

                std::cout << "Insertion Sort:" << std::endl;
                std::cout << "Time: " << duration_cast<microseconds>(finish3-begin3).count()
                          << " microseconds" << std::endl;
                */

                testBank.loadCSV("accountData.csv");
                // Quick sort
                auto begin4 = high_resolution_clock::now();
                std::cout << "--------------------------------------------" << std::endl;
                std::cout << "Starting Quick Sort..." << std::endl << std::endl;
                testBank.quickSortByNumber();
                auto finish4 = high_resolution_clock::now();

                std::cout << "Quick Sort:" << std::endl;
                std::cout << "Quick Sort completed in: " << duration_cast<microseconds>(finish4-begin4).count()
                          << " microseconds" << std::endl << std::endl;

                testBank.loadCSV("accountData.csv");
                // Merge sort
                auto begin5 = high_resolution_clock::now();
                std::cout << "--------------------------------------------" << std::endl;
                std::cout << "Starting Merge Sort..." << std::endl << std::endl;
                testBank.mergeSortByNumber();
                auto finish5 = high_resolution_clock::now();

                std::cout << "Merge Sort completed in: " << duration_cast<microseconds>(finish5-begin5).count()
                          << " microseconds" << std::endl << std::endl;

                break;
            }

            case 3:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice... Try again." << std::endl;

        }
    } while (choice != 3);
}
