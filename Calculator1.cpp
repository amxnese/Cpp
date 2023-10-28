#include <iostream>
using namespace std;

int calculator(int num1,int num2,char op = '+'){
    int result;
    if(op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else if(op == '/'){
        if(num2 != 0)
            result = num1 / num2;
    }
    return result;
    }

int main(void){
    cout << calculator(6,3) << endl;
    cout << calculator(6,3,'-') << endl;
    cout << calculator(6,3,'*') << endl;
    cout << calculator(6,3,'/') << endl;
    cout << calculator(6,0,'/') << endl;
    return 0;
}