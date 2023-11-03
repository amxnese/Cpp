/*
Vector Iterator

Containers:
    Arrays
    Vector
    List

What is Iterator:
    The Iterator is Used To Point At a Certain Element in The Container

Why We Use Iterator:
    Slice The Container To Deal With The Part We Want Only
    Helps in Algorithms Like Sorting And Finding
    Allow Us To Deal With One Element Without The Need To Load The Full List
    Reduces The Complexity
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {10, 20, 30, 40, 50};

    //Declaring An Iterator That Points To The First Element Of The Vector
    vector<int>::iterator iter = nums.begin();

    //or
    auto iter1 = nums.begin();

    //Dereferencing The Iterator
    cout << "nums's First Element is: " << *iter << endl; // 10

    cout << "nums's Last Element is: "<< *(iter + nums.size() - 1)<< endl; // 50

    //Erasing a Slice Of The Vector
    nums.erase(iter,iter+2);
    cout << "nums's First Element After Erasing is: " << *iter << endl; // 30

    return 0;
}