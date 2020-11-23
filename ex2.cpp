/* Exercise 2
The program will display the smallest and greatest of those values.
It also displays the value that occurs the most.
*/

#include <iostream>
#include "header.h"
using namespace std;

void create_array(int* arr){
    cout << "Enter 10 numbers (press Enter afterwards): " << "\n";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
}

void find_min_max_mode(int* arr, int* result){
    result[0] = arr[0];
    result[1] = arr[0];
    int mode = arr[0];
    int mode_count = 0;             //To store how many times a given number is repeated
    int mode_max = 0;               //To store the maximum repetitions of a number
    for (int i=0; i<10; i++){
        if (arr[i] > result[1]){
            result[1] = arr[i];
        } else if (arr[i] < result[0]){
            result[0] = arr[i];
        }
        for (int k=0; k<10; k++){
            if (arr[i]==arr[k]){
                mode_count++;       //Count how many times a number is repeated
            }
        }
        if (mode_count>mode_max){   //Check if it's the number that is repeated the most
            mode_max = mode_count;
            mode = arr[i];
        }
        mode_count = 0;
    }
    result[2] = mode;
}
