// String Palindrome

#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    int left = 0;
    int right = s.length()-1;
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    getline(cin , str);
    
    if(isPalindrome(str)){
        cout << "it is Palindrome" << endl;
    }
    else {
        cout << "It is not Palindrome" << endl;
    }

    return 0;
}