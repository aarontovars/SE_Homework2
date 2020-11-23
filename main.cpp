#include <iostream>
using namespace std; //--> don't use this instruction. We usually explicitely the namespace that we choose.
#include "header.h"

int main(){
    cout << "....... Exercise 1 .......\n\n";
    calculator();
    cout << "\n\n....... End of Exercise 1 .......\n\n";


    cout << "....... Exercise 2 .......\n\n";
    int arr_10[10];
    create_array(arr_10);
    int result[3];                          //Array containing [min, max, mode]
    find_min_max_mode(arr_10, result);
    cout << "\nThe min is: " << result[0];
    cout << "\nThe max is: " << result[1];
    cout << "\nThe mode is: " << result[2];
    cout << "\n\n....... End of Exercise 2 .......\n\n";


    cout << "....... Exercise 3 .......\n\n";
    int dim_3;
    cout << "Enter the dimension for Pascal's Triangle: ";
    cin.clear();                            //To avoid previous input if in Exercise 2
    cin.ignore(100, '\n');                  //more than 10 numbers are given as input
    cin >> dim_3;
    pascal(dim_3);
    cout << "\n\n....... End of Exercise 3 .......\n\n";


    cout << "....... Exercise 4 .......\n\n";
    enter_data();
    cout << "\n\n....... End of Exercise 4 .......\n\n";


    cout << "....... Exercise 5 .......\n\n";
    int arr_5[5];
    create_print_array(arr_5);
    cout << "\n\n....... End of Exercise 5 .......\n\n";


    cout << "....... Exercise 6 .......\n\n";
    int arr[10] = {6, 8, 98, 0, 43, 2, 54, -2, 3, -23};
    int dim = 10;
    cout << "\nThis is the original array:\n";
    for (int i=0; i<dim; i++){
        cout << arr[i] << "\t";
    }
    int* sorted = sort_asc(arr, dim);
    cout << "\nThis is the sorted array:\n";
    for (int i=0; i<dim; i++){
        cout << sorted[i] << "\t";
    }
    cout << "\n\n....... End of Exercise 6 .......\n\n";

    return 0;
}
