/* Exercise 3
By using two-dimensional array, write C++ program to display
a table that represents a Pascal triangle of any size.
*/

#include <iostream>
#include "header.h"
using namespace std;

void pascal(int dim){
    int Tr[dim][dim];
    for (int i=0; i<dim; i++){
        for (int j=0; j<=(i+1); j++){
            if (j>i){
                Tr[i][j] = 0;
            } else if (i<2 || j==0){
                Tr[i][j] = 1;
            } else {
                Tr[i][j] = Tr[i-1][j] + Tr[i-1][j-1];
            }
        }
    }
    for (int i=0; i<dim; i++){
        for (int j=0; j<=i; j++){
            cout << Tr[i][j] << "\t";
        }
        cout << "\n";
    }
}
