/* Exercise 5
The five values will be stored in an array using a pointer.
Then print the elements of the array on the screen.
*/

#include <iostream>
#include "header.h"
using namespace std;

void create_print_array(int* arr){
    cout << "Enter 5 numbers (press Enter afterwards): " << "\n";
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr+i);
    }
    cout << "\nPrinting array:\n";
    for (int i=0; i<5; i++){
        cout << *(arr+i) << "\t";
    }
}
