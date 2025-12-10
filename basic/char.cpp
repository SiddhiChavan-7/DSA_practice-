#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;

    if (ch>='a' && ch<='z'){
        cout<<"The character is a lowercase letter.";

    }else{
        cout<<"The character is in uppercase letter.";
    }
    return 0;
}