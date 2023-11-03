#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vect = {5, 42, 6, -1, 5, -42, 67, 5, 2, 5};
    
    //Finding The Occurance of a Value
    int value = 5;
    int countTimes = count(vect.begin(),vect.end(),value);
    cout << "Number " << value << " Found " << countTimes << " Times"<< endl;

    cout << "=================\n";

    //Sorting a Vector of Numbers
    cout <<"Vector Before Sorting: ";
    for(int i : vect){
        cout << i << " ";
    }
    sort(vect.begin(), vect.end());
    cout << "\nVector After Sorting: ";
    for(int i : vect ){
        cout << i << " ";
    }

    cout << "\n=================";

    //Reversing a Vector
    cout << "\nVector Before Reversing: ";
    for(int i : vect){
        cout << i << " ";
    }
    reverse(vect.begin(),vect.end());
    cout << "\nVector After Reversing: ";
    for(int i : vect){
        cout << i << " ";
    }

    return 0;
}