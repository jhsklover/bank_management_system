### Bank Management System ###

## Core Information ##
**Team Members:** Jack Sklover, Angel Echeverry

**Programming Languages:** C++

**Libraries Required:**
- For CSV parsing: fstream, sstream
- For input/output: iostream
- For strings: string
- For vectors: vector
- To use square root (jump search): cmath
- For CSV creation: algorithm (to shuffle accounts randomly), random
- To time algorithms: chrono

## Instructions ##
1. Download accountData.csv (or alternatively, use the CreateCSV function in `Bank.cpp` to make your own sample data)
2. Download `Account.h`, `Account.cpp`, `Bank.h`, `Bank.cpp`, and `main.cpp` and load them into your compiler of choosing that runs C++.
3. Make a selection in the options menu: Transactions (1), Sort/Search (2), Exit (3)
4. If you select Transactions, select which Transaction: Deposit (1), Transfer (2), Withdraw (3). Enter the necessary account number(s) to carry out these transactions.
5. If you choose Sort/Search, select either Sort (1), or Search (2). Choose your target value for searching. Choosing Sort will run all three sorting algorithms and display the time each of them took to complete. Choosing Search will run all three searching algorithms and display the time each of them took to complete. Note that before Binary and Jump searches, the vector must be sorted. Before each sorting algorithm, the data should be re-loaded via the CSV to ensure unsorted data.
6. If you choose exit, the program will terminate.

## Sample Input and Output ##
`Output:` Welcome to the Bank Management System. Choose an option: 1. Search 2. Sort 3. Exit
`Input:` 1
`Output:` --------------------------------------------
Starting Linear Search...

Account number 357958 found at index: 453
Lookup time: 2206 microseconds

--------------------------------------------
Starting Jump Search...

Account number 357958 found at index: 63
Lookup time: 564 microseconds

--------------------------------------------
Starting Binary Search...

Binary Search:
Account number 357958 found at index: 63
Lookup time: 317 microseconds


## Algorithms ##
1. **Binary Search**:
2. **Jump Search**:
3. **Linear Search**:
4. **Insertion Sort**:
5. **Merge Sort**:
6. **Quick Sort**:
