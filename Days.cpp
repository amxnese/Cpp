#include <iostream>
using namespace std;
int main(){
    int Day;
    do{
        cout << "Chose a number From 1 To 7:  "<< endl;
        cin >> Day;
    }while(Day < 1 || Day >7);
    switch(Day){
        case 1:cout << "Monday" <<endl;   break;
        case 2:cout << "Tuesday" <<endl;  break;
        case 3:cout << "Wednesday" <<endl;break;
        case 4:cout << "Thursday" <<endl; break;
        case 5:cout << "Friday" <<endl;   break;
        case 6:cout << "Saturday" <<endl; break;
        case 7:cout << "Sunday" <<endl;   break;
        default: cout <<"invalid";//Not Necessary Because of The Do While Loop
    }
}