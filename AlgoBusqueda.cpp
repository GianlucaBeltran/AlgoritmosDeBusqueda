#include <iostream>
#include <stdlib.h>   
#include <time.h>  
#include <vector>
#include <algorithm>
#include "mytimer.h"
#include "AlgoBusqueda.h"

using namespace std;

int main()
{
    srand (time(NULL));

    int size = 100000, number = 20, step = 1000;
    // cout << "List size: " << endl;
    // cin >> size;
    // cout << "Number to find: " << endl;
    // cin >> number;
    // cout << "Step for sorted sequential search 2: " << endl;
    // cin >> step;

    vector <int> arr;
    for (int i = 0; i < size; i++)
    {
        arr.push_back(rand() % size);
    }

    Search <int> test(arr, number);

    // DECLARE_TIMING(t);
    // START_TIMING(t);
    // cout << "Sequential Search: " << test.sequentialSearch() << endl;
    // STOP_TIMING(t);
    // SHOW_TIMING(t, "My timer");

    DECLARE_TIMING(t1);
    START_TIMING(t1);
    cout << "Sorted Sequential Search 1: " << test.sortedSequentialSearch1() << endl;
    STOP_TIMING(t1);
    SHOW_TIMING(t1, "My timer");

    DECLARE_TIMING(t2);
    START_TIMING(t2);
    cout << "Sorted Sequential Search 2: " << test.sortedSequentialSearch2(step) << endl;
    STOP_TIMING(t2);
    SHOW_TIMING(t2, "My timer");

    DECLARE_TIMING(t3);
    START_TIMING(t3);
    cout << "Binary Search: " << test.binarySearch(0, size) << endl;
    STOP_TIMING(t3);
    SHOW_TIMING(t3, "My timer");
    
    return 1;
}