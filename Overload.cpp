#include <iostream>
using namespace std;
    void add(int a,int b){
        cout << a + b << endl;
    }
    void add(string a,string b){
        cout << a << " " << b << endl;
    }
    void add(int a, int b, int c){
        cout << a + b + c << endl;
    }
int main(){
    add(4,5);
    add("amine", "sdrt");
    add(4,5,6);

    return 0;
}