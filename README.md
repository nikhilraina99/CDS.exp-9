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
1.Character Pointer-

![Screenshot 2024-09-02 093329](https://github.com/user-attachments/assets/f34c08cd-566d-4ff6-bc39-40615fc70f01)

2.Pointer Access Array Elements-

![Screenshot 2024-09-02 093410](https://github.com/user-attachments/assets/9e50d683-d18b-4334-9c4d-d76de3522167)

3.Float Pointer-

![Screenshot 2024-09-02 093432](https://github.com/user-attachments/assets/31b3ae4c-e641-49c8-b327-d34b093635ff)

4.Integer Pointer-

![Screenshot 2024-09-02 093540](https://github.com/user-attachments/assets/52352ac0-77b3-413d-9103-b6db89fb9eb4)

5.No Pointer-

![Screenshot 2024-09-02 093457](https://github.com/user-attachments/assets/4e417f9a-b627-4c31-8dcf-0dc800960ec2)

## Conclusion
- We learned how to initialize pointers of various data types.
- We explored how to access array elements using pointers.
- We also examined how to access array elements without using pointer variables.










