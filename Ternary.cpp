#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Your Age Please:  "<< endl;
    cin >> age;
    //Normal if Condition
    if(age >= 18){
        cout << "You're Good To Go"<< endl;
    }
    else{cout << "Above 18 Only"<< endl;}
    //Ternary Conditional Operational
    //Syntax: (Condition is True/False) ? in Case True : in Case False;
    (age >= 18) ? cout << "You're Good To Go\n" : cout << "Above 18 Only\n";
    //OR:
    string msg1 = (age >= 18) ? "You're Good To Go" : "Above 18 Only";
    cout << msg1 << endl;
    /*===========================================================*/
    int rank,points;
    string msg2;
    rank = 3;
    points = 150;
    //Normal Nested if Conditional
    if(rank < 5){
        msg2 = "Passed By Rank";
    }else{
        if(points > 100){
            msg2 = "Passed By Points";
        }else{msg2 = "Better Luck Next Time";}
    }
    cout << msg2 << endl;
    //Nested Ternary Conditional Operational
    msg2 = (rank < 5)? "Ok By Rank":(points > 100)?"Ok By Points":"Failed";
    cout << msg2 << endl;
    return 0;
}