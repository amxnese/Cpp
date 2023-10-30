#include <iostream>
#include <cctype>
using namespace std;
int main(){
    /*Both tolower() and toupper() Return an ASCII Value
    That's Why We Use The char() */
    cout << char(tolower('A')) << endl;
    cout << char(toupper('b')) << endl;
    //Both isupper() And islower() Return a Boolean Value
    cout << isupper('C') << endl;
    cout << islower('D') << endl;
    
    cout << "==========================\n";

    string username = "aNoNyme";
    for(int i = 0;i < size(username);i++){
        if(isupper(username[i])){
            username[i] = char(tolower(username[i]));
        }else{
            username[i] = char(toupper(username[i]));
        }
    }
    cout << username << endl;

    cout << "==========================\n";
    //Removig Spaces From a Name
    
    string name = "f a n g o";
    for(int i = 0;i < size(name);i++){
        if(isspace(name[i])){
            continue;
        }
        cout << name[i];
    }
}
