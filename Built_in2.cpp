#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int nums[6] = {42,23,74,23,75};
    // max() Function Returns The Max Value From an Array
    cout << "max num is: " << max({42,23,74,23,75}) <<endl;
    
    // Implementing The max() Function
    int iter = size(nums);
    int max_num = nums[0];
    for(int i = 1; i < iter; i++){
        if(nums[i] > max_num)
            max_num = nums[i];
    }
    cout << "max num is: "<< max_num << endl;

    // min() Function Returns The Min Value From an Array
    cout << "min num is: " << min({42,23,74,23,75}) <<endl;

    //Implementig min() Function
    int nums1[6] = {2,1,4,1,4,59};
    int iter1;
    int minimum = nums1[0];
    for(int n = 0; n < size(nums1); n++){
        if(nums1[n] < minimum)
            minimum = nums1[n];
    }
    cout << "min num is: " << minimum <<endl;

    //count() Function Returns How Many Times a Value Has Repeated

    //Implementing count() Function
    int dup = 0;
    int myNum = 23;
    for(int i = 0;i < iter;i++){
        if(nums[i] == 23)
            dup++;
    }
    cout << "num occurance is: " << dup << endl;

    return 0;
}
