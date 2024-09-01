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