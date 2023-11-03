#include <iostream>
using namespace std;

//Forward Declaration
int sum(int arr[], int size);

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arrSize = size(arr1);
    cout << sum(arr1, arrSize);
    return 0;
}

//Declaration
int sum(int arr[], int size){
    int result;
    for(int i = 0; i < size; i++){
        result += arr[i];
    }
    return result;
}
