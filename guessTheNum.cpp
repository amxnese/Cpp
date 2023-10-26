#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    // int secret_num = 1 + rand()%10;
    int secret_num = 2;
    int number_given;
    int guess_count = 3;
    cout << "guess a number from 1 to 10:   " ;
    do{
        cin >> number_given;
        }while(number_given < 0 || number_given > 10);
    while (number_given != secret_num){
        do{
            cin >> number_given;
            }while(number_given < 0 || number_given > 10);
        cout << "Wrong Guess,You Have "<<guess_count--<<" Tries Left:  ";
        cin >> number_given;
        if (guess_count == 0){
            cout << "You're Out Of Guesses.. The Number is: "<<secret_num;
            break;
        }
        }
        if (number_given == secret_num)
            cout << "Correct!!!";
}