/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str = "My name is Vurimundara Sandeep Reddy";
    int i;
    int len = 0;
    for ( i = 0 ; i < str.length();i++){
        if(str[i] ==' ' ){
            str[i-1] = char(len + '0');
            len = -1;
        }
        len++;
    }
    str[i-1] = char(len + '0');
    cout << str << endl;
    return 0;
}