#include <iostream>
using namespace std;
int main(){
    int *ptr1; //Wild Pointer
    int *ptr2 = NULL;
    int *ptr3 = nullptr;

    cout << ptr1 << endl; // Garbage Value
    cout << ptr2 << endl; // 0
    cout << ptr3 << endl; // 0

    int num = 4;
    void *ptr = &num;

    cout << ptr << endl; //Address of a
    // cout << *ptr << endl; // Error


    //Casting
    // C-Style
    cout << *(int *)ptr; << endl // 4

    // Modern
    cout << *static_cast<int *>(ptr); // 4

    return 0;
}