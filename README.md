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

```javascript

// Nikhil 
// 23070123093
// experiment 9a
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
```javascript
// Nikhil
// 23070123093
// experiment 9b
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
```javascript
// Nikhil 
// 23070123093
// experiment 9c
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}
```
```javascript
//Nikhil
//23070123093
//experiment 9d
#include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "The address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
```javascript
// Nikhil 
// 23070123093
// experiment 9e
#include <iostream>
using namespace std;
int main()
{
    int a = 50;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "The address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
## Outputs:









