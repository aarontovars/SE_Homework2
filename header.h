#ifndef HEADER_H
#define HEADER_H
// -------------------------------------------------
// in a header file we only find prototype of the
// function not the definition.
// you have to place the definition in cpp file
// -------------------------------------------------

//Functions for exercise 1
void calculator();
float operate(int, float, float);

//Functions for exercise 2
void create_array(int*);
void find_min_max_mode(int*, int*);

//Functions for exercise 3
void pascal(int);

//Functions for exercise 4
int* find_max(int, int);
void enter_data();

//Functions for exercise 5
void create_print_array(int*);

//Functions for exercise 6
int* sort_asc(int*, int);


#endif // HEADER_H
