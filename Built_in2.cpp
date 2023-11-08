#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string sliceString (string str ,int start,int end);
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
    string word = "abbccc";
    char ltr = 'c';
    int cnt = count(word.cbegin(), word.cend(),ltr);
    cout << "Letter '" << ltr <<"' Reapeated " << cnt << " Times" << endl;


    //Implementing count() Function
    int dup = 0;
    int myNum = 23;
    for(int i = 0;i < iter;i++){
        if(nums[i] == 23)
            dup++;
    }
    cout << "num occurance is: " << dup << endl;

    //substr(start, end) Creates a Sub String From The Original String  
    string str = "Hello World"; 
    string sub_str = str.substr(2, 8);
    cout << sub_str << endl; // "llo Worl"

    cout << sliceString(str,2,8); // "llo Wor"
    return 0;
}

    //Implementing substr() Function
    string sliceString (string str ,int start,int end){
    string result = "";
    for(int i = start;i <= end;i++){
        result += str[i];
    }return result;
    }