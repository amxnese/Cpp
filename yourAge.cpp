//c<alculate your age
#include <iostream>
using namespace std;
int main(void){
    cout << "=======================================";
    cout << "\n<<<Welcome To The Age Calculator App>>>\n";
    cout << "=======================================\n";
    int birthYear,birthMonth,birthDay,TodayYear,todayMonth,todayDay;
    //getting the values from user
    cout <<"Enter The Year You Were Born In:  ";
    cin >>birthYear;
    cout <<"Enter The month You Were Born In:  ";
    cin >>birthMonth;
    cout <<"Enter The day You Were Born in:  ";
    cin >>birthDay;
    cout <<"Enter The Year of Today:  ";
    cin >>TodayYear;
    cout <<"Enter The month of Today:  ";
    cin >>todayMonth;
    cout <<"Enter The day of Today:  ";
    cin >>todayDay;
    //-1 in case his birthday hasn't arrived yet
    int yearAge = TodayYear - birthYear -1;
    //checking if he celebrated his birthday this year
    if(birthMonth < todayMonth){
        yearAge++;//he celebrated it so we gave him an extra year
    }
    int monthAge = yearAge*12;
    /*adding the months we missed when we just calculated the years
    first we have to check if his birthday has passed again*/
    if(birthMonth < todayMonth){
        //his birthday has passed so we just need to add (birthMonth-todayMonth)
        monthAge += todayMonth - birthMonth;
    /*his birthday has not passed so we need to add 
    (12 - the months that are left till his birthday)*/
    }else{monthAge += 12 - (birthMonth-todayMonth);}
    //same thing here we add the days that (monthAge) didn't catch
    int daysAge = monthAge * 30 + todayDay-birthDay;
    cout << "Your Age in Years is: "<<yearAge;
    cout << "\nYour Age in Months is: "<<monthAge;
    cout << "\nYour Age in Days is: "<<daysAge;
    return 0;
}