#include <iostream>
using namespace std;
int main(){
    int num = 10;
    //Creating a Pointer That Points To num
    int* ptr = &num;

    cout << "Value: " << num << endl;
    cout << "Address: " << &num << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    //Using The Pointer To Change a Value
    *ptr = 20;
    cout << num; // 20
    return 0;
}