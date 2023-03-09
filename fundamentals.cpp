#include <iostream>
#include <typeinfo>
using namespace std;
// #define days 9
// using bignum = long long int;
// typedef long long int LLI;
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
    cout << "what is it that you want to convert? 'i' for int 'c' for char:   ";
    char input;
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
        cout << "your character has been converted to:  "<<int(ch);
    }else{cout <<"invalid input";}
    *//*
    bignum big = 68567836285689234;
    cout << big;
    *//*
    double a = 4.4; 
    int b = a; // Compiler Will Convert Double To Int Then Assign
    *//*
    //TYPE CASTING
    float x = 4.5;
    cout << (int)x << endl;
    cout << 20 + (int)30.4;
    */
    int likes = 0;
    ++likes; // pre_increment
    likes++; // post_increment


    return 0;
}