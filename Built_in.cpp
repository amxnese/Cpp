#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float num = 9.5;
    cout << num << " Floored ==> " <<floor(num) <<endl; 
    cout << num << " Ceiled ==> " <<ceil(num) <<endl; 
    cout << num << " Power of Two ==> " <<pow(num,2) <<endl;
    cout << num << " square rooted ==> " <<sqrt(num) << endl; 
    cout << num << " % 2 ==> " <<fmod(num,2) <<endl; 
    cout << num << " Truncated ==> " <<trunc(num) <<endl; 
    cout << num << " Rounded ==> " <<round(num) <<endl; 
    return 0;
}