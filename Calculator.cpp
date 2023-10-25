#include <iostream>
using namespace std;
int main(){
    int x,y,op;
    cout <<"enter number1:  "<<endl;
    cin >> x ;
    cout <<"enter number2:  "<<endl;
    cin >> y ;
    cout <<"Choose\n[1] : +\n[2] : -\n[3] : *\n[4] : /:   "<<endl;
    cin >> op ;
    switch(op){
        case 1 : cout << x + y;break;
        case 2 : cout << x - y;break;
        case 3 : cout << x * y;break;
        case 4 : (y != 0) ? cout << x/y : cout << "ZeroDivision\n";break;
        default  : cout << "invalid operator";
    }
}