#include <iostream>
#include <typeinfo>
#include <array>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

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

    *//*

    //SWITCH
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

    *//*

    //ARRAYS
    int nums[] = {1,2,3};
    cout << "Element 1: "<< nums[0]<<endl;
    cout << "Element 2: "<< nums[1]<<endl;
    cout << "Element 3: "<< nums[2]<<endl;

    cout <<"Location: "<<&nums[0]<<endl;
    cout <<"Location: "<<&nums[1]<<endl;
    cout <<"Location: "<<&nums[2]<<endl;
    
    
    nums[0] = 4;
    nums[1] = 5;
    nums[2] = 6;
    cout << "Element 1: "<< nums[0] <<endl;
    cout << "Element 2: "<< nums[1] <<endl;
    cout << "Element 3: "<< nums[2] <<endl;

    int sizeArr = sizeof(nums)/sizeof(nums[0]); // 12 / 4 = 3
    cout << sizeArr <<endl;

    *//*

    //Two Dimensional Array

    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int arr3[3] = {7,8,9};

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout <<"row 1 column 2 has:  " <<arr[0][1]<<endl; // 2
    cout <<"row 2 column 3 has:  " <<arr[1][2]<<endl; // 6
    cout <<"row 3 column 1 has:  " <<arr[2][0]<<endl; // 7

    *//*

    //Class Array

    // We Use Class Array Because There Are Some Safety Threats
    // That comes From Using The Normal C-Style Array.
    // Syntax: Template<Type, Size> Identifier

    array<int, 9> numbers = {1,2,3,4,5,6,7,8,9};
    cout << numbers[0]<< endl;
    cout << numbers[4]<< endl;
    cout << numbers[7]<< endl;

    //size() Function: Returns The Number Of Elements In The Array
    cout << "Number Of Elements:  "<< numbers.size()<< endl;


    //front() Function: Returns The First Element in Array
    cout << numbers.front()<< endl; //numbers[0]

    //back() Function: Returns The Last Element in Array
    cout << numbers.back()<< endl; //numbers[-1]

    //at(index) Function: Returns The numbre 'index' Element in Array
    cout << numbers.at(4)<< endl; //numbers[index]

    //empty() Function: Checks if An Array is Empty
    cout <<numbers.empty()<< endl; // 0 ==> False

    //fill(value) Function: Sets All The Elements To a Specific Value
    numbers.fill(0);
    cout << numbers[0]<< endl; // 0
    cout << numbers[4]<< endl; // 0

    *//*

    //STRINGS

    //C-Style String
    char name1[5] = "amin"; //name[4] == \0 ==> NULL

    char name2[5] = {'a','m','i','n','\0'};

    //String Class
    string name3 = "amin";
    cout << name1 << "\n" << name2 << "\n" << name3 << endl;

    *//*

    //CONCATENATING

    //C Style
    char fname1[] ="jon ";
    char lname1[] ="snow";
    cout << fname1 << lname1 << endl;
    cout << strcat(fname1,lname1) << endl;

    //String Style
    string fname2 = "jon ";
    string lname2 = "snow";
    cout << fname2 + lname2 << endl;
    cout << fname2.append(lname2) << endl;

    *//*

    //For Loop

    for (int index = 0; index < 11; index++){
        if (index % 2 == 0)
            cout << index << " is even"<< endl;
        else
            cout << index << " is odd"<< endl;
    }

    int nums[2][4] ={{1,2,3,4},
                    {5,6,7,8},
                    };
    for (int i = 0;i<2;i++)
    {
        for (int n = 0;n<4;n++)
        {
            cout << nums[i][n] << endl;
        }
    }

    *//*

    //While and Do While Loops 

    //Don't Forget To Include The <cstdlib> Library
    int secret_num = 1 + rand()%10;
    int number_given;
    int guess_count = 3;
    cout << "guess a number from 1 to 10:   " ;
    do{
        cin >> number_given;
        }while(number_given < 0 || number_given > 10);
    while (number_given != secret_num){
        cout << "Wrong Guess,You Have "<<guess_count--<<" Tries Left:  ";
        cin >> number_given;
        if (guess_count == 0){
            cout << "You're Out Of Guesses.. The Number is: "<<secret_num;
            break;
        }
        if (number_given == secret_num){
            cout << "Correct!!!";
            break;
        }
    }

    *//*
    
    vector<int> vect = {1,5,3,2,6};
    sort(vect.rend(),vect.rbegin());
    for(int i : vect){
        cout << i << " ";
    }
    */
    
    return 0;
}

    
    
