#include <iostream>
#include <typeinfo>
using namespace std;
// #define days 9
int main(){
    /*
    cout<<"this line has been printed with cout";
    printf("that line has been printed with printf");

    *//*

    int price;
    price = 100;
    cout<<"price is: "<<price<<" are you buying?";

    *//*

    int a, b, c;
    a = b = c = 10;
    cout << a+b+c;

    *//*

    int age;
    cout << "Please Insert Your Age:  ";
    cin >> age;
    cout << "your age in months is:  " << age * 12 << "  month";
    cout << "\nyour age in days is:  " << age *12*30 << "  days";
    cout << "\nyour age in hours is:  " << age*12*30*24 << "  hours";
    cout << "\nyour age in minutes is:  " << age*12*30*24*60 << "  minute";
    cout << "\nyour age in seconds is:  " << age*12*30*24*60*60 << "  seconds";

    *//*

    float KB;
    cout << "insert the size in kilobytes:  ";
    cin >> KB;
    double Bytes,Bits;
    Bytes = KB *1024;
    Bits = Bytes *8;
    cout <<KB <<" KiloBytes equals "<<Bytes<<" Bytes\n";
    cout <<KB <<" KiloBytes equals "<<Bits<<" Bits";

    *//*

    float flt = 10.5f + 4.4f;
    cout << flt << endl;
    cout << sizeof(flt) << endl;

    *//*

    auto letter = 'A';
    cout << int(letter) <<endl;
    cout << char(65) <<endl;

    *//*

    char input;
    cout << "what is it that you want to convert? 'i' for int 'c' for char:   ";
    cin >> input;
    if(input == 'i'){
        int num;
        cout << "enter the number that you want to convert:  ";
        cin >> num;
        cout << "your number has been converted to:  "<<char(num);
    }else if (input == 'c'){
        cout << "enter the character that you want to convert:  ";
        char ch;
        cin >>ch;
        cout << "The ASCII Number of Your Char is:  "<<int(ch);
    }else{cout <<"invalid input";}

    *//*

    using bignum = long long int;
    bignum big = 68567836285689234;
    cout << big << endl;
    typedef long long LL;
    LL num = 99768972304957968;
    cout << num <<endl;

    *//*

    //TYPE CASTING: Implicit Conversion
    double a = 4.4; 
    int b = a;             // Compiler Will Convert a To an INT Then Assign

    char c = 'C';
    int b = 20;
    cout <<  b + c <<endl; //Compiler will convert 'C' To 67 Then Operates

    int e = 20;
    double f = 20.5;
    cout << e + f <<endl;  //Compiler Will Convert e To Double Then Operates

    *//*

    //TYPE CASTING: Explicit Convertion 
    float x = 4.5;
    cout << (int)x << endl;        //Output ==> 4
    cout << int(20.5) + (int)30.4; //Output ==> 50

    *//*

    //Pre/Post Increment/Decrement
    int likes1,likes2;
    likes1 = likes2 = 0;
    cout << likes1++ <<endl; // Output: 0, likes=1, Post Increment
    cout << ++likes2 <<endl; // Output: 1, likes=1, Pre Increment

    *//*

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

    //====================================================//

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

    */
    
    return 0;
}