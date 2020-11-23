/* Exercise 1
The program will prompt the user to choose the operation choice (from 1 to 5).
Then it asks the user to input two integer vales for the calculation.
*/

#include <iostream>
#include "header.h"
using namespace std;
#include <cmath>

void calculator(){
    bool cont = true;   //To mantain the while loop
    int oper;
    float num1;
    float num2;
    float c;

    while(cont==true){
    cout << "MENU\n\n1. Add\n2. Substract\n3. Multiply\n4. Divide\n5. Modulus\n\n";
    cout << "Enter your choice: ";
    // To check that the user input is a number
    while (!(cin >> oper)) {
        cout << "Please, enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
}
    cout << "Enter the 1st number: ";
    // To check that the user input is a number
    while (!(cin >> num1)) {
        cout << "Please, enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
}
    cout << "Enter the 2nd number: ";
    // To check that the user input is a number
    while (!(cin >> num2)) {
        cout << "Please, enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
}
    c = operate(oper, num1, num2);
    cout << "\nThe result is: " << c;
    cout << "\n\nDo you want to perform another operation? (1 (Y) or 0 (N)): ";
    while (!(cin >> cont)) {
        cout << "Please, enter a valid number (either 0 or 1): ";
        cin.clear();
        cin.ignore(100, '\n');}
}
}

float operate(int oper, float a, float b){
    float c;
    switch(oper){
case 1:
    c = a + b;
    break;
case 2:
    c = a - b;
    break;
case 3:
    c = a * b;
    break;
case 4:
    c = a / b;
    break;
case 5:
    c = sqrt(pow(a,2) + pow(b,2));
    break;
default:
    cout << "\nInvalid number for operation entered.";
    return 0;
    }
    return c;
}
