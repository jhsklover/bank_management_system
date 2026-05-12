# Bank Management System #

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

### Scenario 1: Searching ###

`Output`: Welcome to the Bank Management System! Choose an option: 1. Transaction 2. Search/Sort 3. Exit

`Input`: 2

`Output:` Select an option: 1. Sort 2. Search

`Input:` 2

`Output:`

Starting Linear Search...

Account number 357958 found at index: 453

Lookup time: 2206 microseconds

Starting Jump Search...

Account number 357958 found at index: 63

Lookup time: 564 microseconds

Starting Binary Search...

Binary Search:

Account number 357958 found at index: 63

Lookup time: 317 microseconds

### Scenario 2: Sorting ###

`Output`: Welcome to the Bank Management System! Choose an option: 1. Transaction 2. Search/Sort 3. Exit

`Input`: 2

`Output:` Select an option: 1. Sort 2. Search

`Input:` 1

`Output:`

Starting Insertion Sort...

Insertion Sort:

Time: 13768 microseconds

Starting Quick Sort...

Quick Sort:

Quick Sort completed in: 2260 microseconds

Starting Merge Sort...

Merge Sort completed in: 3998 microseconds


## Algorithms ##
1. **Binary Search**: Binary Search operates based on splitting the vector down the middle and comparing the target value to the middle value. If the target value is less than the middle value, the entire right side is discarded. If the target value is more than the middle value, the entire left side is discarded. Binary Search has a time complexity of O(log n) across its average and worst case. In the event the target value is the first middle element, the time complexity is O(1).
2. **Jump Search**: Jump Search has a worst and average case of O(sqrt n). This is because blocks are formed in increments of sqrt(n), where the target value is compared alongside the value at the end of each block. In its best case, the time complexity is O(1) if it is amongst the first block.
3. **Linear Search**: Linear Search is a brute-force algorithm which iterates over the entire vector until it either finds the target value or runs out of elements to check. The best case is O(1), if the target is the first elemeent. In its average and worst cases, Linear Search has a runtime of O(n).
4. **Insertion Sort**: Insertion Sort is an incredibly slow sorting algorithm which iterates across a vector by comparing a key to the previous elements. If the key is less than a previous element, they must be swapped. The key becomes the next rightmost element. The time complexity is O(n) in the best case, but is O(n^2) in the average and worst cases.
5. **Merge Sort**: Merge Sort repeatedly splits up the vector by two until all elements are isolated. Then, split up portions are merged back together in sorted order, eventually merging all of the elements in sorted order. Across the worst, best, and average cases, Merge Sort's runtime is O(n log n).
6. **Quicksort**: Quicksort is based on the idea of partitioning the dataset on the basis of a pivot element; in the case of this project, the pivot element is the last element of the vector. Each piece of data is then compared to the pivot element: all elements less than it are moved to the left of the pivot element, while the greater elements are moved to the right. To finish off the partitioning operation, the pivot element is swapped with the element that is at the partition index. Quicksort is recursive, so it calls itself to repeat the partition operation on both the left and right side; the process continues until each sub-vector has 0 or 1 element, meaning that everything has been sorted. The best and average case results in a runtime of O(n log n), but if the worst possible pivot is chosen each time, the runtime becomes O(n^2).
