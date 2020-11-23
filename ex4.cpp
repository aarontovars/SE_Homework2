/* Exercise 4
By using C++ pointer, find the max of an integral data set.
The user inputs the number of data values in the set and each value.
Then the max of the data set is shown.
*/

#include <iostream>
#include "header.h"
using namespace std;

int* find_max(int arr[], int num_v){
    int max = arr[0];
    for (int i=1;i<num_v;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    int *pr = &max;
    return pr;
}

void enter_data(){
    int num_v;
    cout << "Enter number of data values: ";
    cin >> num_v;
    int arr[num_v];
    for (int i=0; i<num_v; i++){
        cout << "Enter value " << i << ": ";
        cin >> arr[i];
    }
    int* max = find_max(arr, num_v);
    cout << "\nThe maximum is: " << *max;
}


