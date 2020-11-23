/* Exercise 6
The function will accept two arguments: a pointer that points to the array and the array size.
The function returns a pointer that points to the sorted array.
*/

#include <iostream>
#include "header.h"
using namespace std;

int* sort_asc(int* arr, int dim){
    int* sorted = arr;
    int temp_val;
    for (int i=0; i<dim; i++){
        for (int j=(i+1); j<dim; j++){
            if (*(sorted+j)<*(sorted+i)){
                temp_val = *(sorted+i);
                *(sorted+i) = *(sorted+j);
                *(sorted+j) = temp_val;
            }
        }
    }
    return sorted;
}
