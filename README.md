# Experiment-9

# AIM
To use pointers for accessing elements of arrays and finding the addresses of different data types.

## Software Used
VS Code

## Problem Statements
1. Write a C++ program to initialize pointers of different data types and print their values.
2. Write a C++ program to access elements of an array using pointers.
3. Write a C++ program to access elements of an array without using pointer variables.

## Theory
Pointers are symbolic representations of memory addresses. They enable programs to simulate call-by-reference and to create and manipulate dynamic data structures. One of the primary uses of pointers is to iterate over elements in arrays or other data structures.

## Program Codes 

```

// Nikhil 
// 23070123093
// experiment 9
#include <iostream>
using namespace std;

int main() {
    char b = 's';
    char*ptr = &b;
   
    cout<<"The value pointed by *ptr is  "<<b;
    cout<<"\nThe value in b is " <<b;
    cout<<"\nValue of pointer variable *ptr is  "<<(void*) ptr;
    cout<<"\nAddress variable of b is   "<<(void*)&b;
    ptr++;
    cout<<"\nIncrement value of ptr is "<<(void*)ptr;

    return 0;
}
```
```
// Nikhil
// 23070123093
// experiment 9
#include <iostream>
using namespace std;
int main() {
   
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr;
    ptr=&arr[0];
    cout<<"Accessing array elements using pointer-\n";
    for(int i=0;i<5;i++)
    {
    cout <<"Element "<<i<<"- " << *ptr << endl;
    ptr++;
    }
    return 0;
}
```
