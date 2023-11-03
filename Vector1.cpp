#include <iostream>
#include <vector>
using namespace std;

//Function That Calculates The Sum Of an Array
int sum(int arr[], int size){
    int result = 0;    for(int i = 0; i < size; i++){
        result += arr[i];
    }
    return result;
}

//Overloading The sum() Function So it Can Takes a Vector as a Parameter
//Notice That We Won't Need To Take The Size as a Parameter in This Case
int sum(vector<int> vect){
    int result = 0;
    for(int i = 0; i < vect.size(); i++){
        result += vect.at(i);
    }
    return result;
}

int main(){
    int nums1[] = {1,2,3,4,5};
    vector<int> nums2 = {1,2,3,4,5};
    //With The Array We Need To Pass The Size
    cout << sum(nums1,5) << endl;
    //While Not With The Vector Which Makes it More Dynamic
    cout << sum(nums2) << endl;
    return 0;
}