//
// Created by Alexandro Milanez on 10/4/2022.
//
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) { // this sets the palindrome file for the if statement
    if(s.length()<=1){
        return true;
    }
    else {
        string tmp = s.substr(1, s.length()-2);
        if(s[0]==s[s.length()-1]){
            return isPalindrome(tmp);
        }
        else{
            return false;
        }
    }
}
int main(){ // the main sets the output for the program
    string str;
    string s;
    cout<<"Enter a String to test: ";
    getline(cin, str);
    cin>>s;
    if(isPalindrome(s)){
        cout<<"The string '"<<s<<"' is a palindrome."<<endl;
    }
    else{
        cout<<"The string '"<<s<<"' is not a palindrome."<<endl;
    }
    return 0;
}