#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    vector<int>::iterator iter;
    array<int,5> nums1 = {10, 30, 50 ,70, 80};

    //Loop With Iterator
    for(iter = nums.begin();iter < nums.end();iter++){
        cout << *iter << " ";
    }

    cout << "\n============\n";

    //Ranged Loop on Vector
    for(int i : nums){
        cout << i << " ";
    }

    cout << "\n============\n";

    //Ranged Loop on Array
    for(int i : nums1){
        cout << i << " ";
    }
    
    return 0;
}