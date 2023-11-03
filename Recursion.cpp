#include <iostream>
using namespace std;
int sum(int num){
    if(num == 1){
        return 1;
    }
    return num + (sum(num - 1));
}
int main(){
    cout << sum(5) << endl; // 15
    /*
    sum(5)
    5 + sum(4)
    5 + ( 4 + sum(3))
    5 + ( 4 + ( 3 + sum(2) ) )
    5 + ( 4 + ( 3 + (2 + sum(1) ) ) )
    5 + ( 4 + ( 3 + (2 + 1) ) )
    5 + 4 + 3 + 2 + 1 = 15
    
    */
}