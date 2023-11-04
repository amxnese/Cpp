#include <iostream>
using namespace std;
int main(){
    int nums[] = {20,30,40,50};
    int *ptr = &nums[0];
    cout << "First Element: \n";
    cout << "Value With Index: " << nums[0] << endl; // 20
    cout << "Value With Address: " << *ptr << endl;  // 20

    cout << "Second Element: \n";
    cout << "Value With Index: " << nums[1] << endl; // 30
    cout << "Value With Address: " << *(ptr + 1) << endl; // 30
    
    return 0;
}