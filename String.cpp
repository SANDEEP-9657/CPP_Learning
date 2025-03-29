/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
       int i;
       string str;
       for(i=0;i<s.length();i++){
            s[i]=(char)tolower(s[i]);
            if((int)s[i]>=97 && (int)s[i]<=122){
                str.push_back(s[i]);
            }

       }
        cout << str << endl;
       int f = 0 , last = str.length()-1;
       while(f<last){
            if(str[f]!=str[last]){
                return false;
            }
            
            f++;
            last--;
       }

       return true;
    }

int main()
{
    if(isPalindrome("A man, a plan, a canal: Panama")) {
        cout << "pal" << endl;
    }
    else{
        cout << "n" << endl;
    }
        

    return 0;
}