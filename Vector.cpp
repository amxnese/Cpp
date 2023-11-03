#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Declaring a Vector
    vector<int> nums1 = {10,20,30,40};
    //OR
    vector<int> nums2{50,60,70,80};
    //OR
    vector<int> nums3(4,50); // {40,40,40,40}

    //Printing The Elements of a Vector
    for(int i = 0;i < nums1.size();i++){
        cout << nums1.at(i) << " | " << nums2.at(i) << " | " << nums3.at(i) <<endl;
    }

    //Adding an Element at The End Of The Vector
    nums1.push_back(50); // {10,20,30,40,50}
    
    //Changing The Value Of an Element
    nums1.at(0) = 60; // {60,20,30,40,50}

    //Deleting The Last Element of a Vector
    nums1.pop_back(); // {60,20,30,40}

    //Checking The Max Size That a Vector Can Contain
    cout << "Max Size is:  " << nums1.max_size() << endl; // Very Large Number 

    //First Element in a Vector
    cout << "First Element: "<< nums1.front() << endl; // nums1.at(0) ==> 60

    //Last Element in a Vector
    cout << "Last Element: "<<nums1.back() << endl; // 40

    //Deleting all Elements of a Vector
    nums1.clear();
    cout << "nums1 Size is: " << nums1.size() << endl; // 0

    //Checking if a Vector is Empty
    if(nums1.empty()){
        cout << "Vector is Empty" << endl;
    }

    return 0;
}