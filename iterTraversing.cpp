#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end() - 1;

    cout << "First Element is: " << *first << endl; // 10
    cout << "Second Element is: " << first[1] << endl; // 20
    cout << "Third Element is: " << first[2] << endl; // 30

    cout << "Last Element is: " << *last << endl; // 90
    cout << "Element Before Last: " << *(last-1) << endl; // 80

    //Traversing
    advance(first,2);
    cout << "<first> Iterator is Pointing To: " << *first << endl; // 30
    advance(last,-2);
    cout << "<last> Iterator is Pointing To: " << *last << endl; // 70

    cout << "nums Before Erasing: \n";
    for(int i = 0;i < nums.size(); i++){
        cout << nums.at(i) << " "; // {10, 20, 30, 40, 50, 60, 70, 80, 90}
    }

    //Erasing a Slice of The Vector Using The Iterators
    nums.erase(first,last);

    cout << "\nnums After Erasing: \n";
    for(int i = 0;i < nums.size(); i++){
        cout << nums.at(i) << " "; // {10, 20, 70, 80, 90}
    }

    return 0;
}