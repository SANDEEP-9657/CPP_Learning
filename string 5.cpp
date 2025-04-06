// string 5

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
    string str = "what is your name";
    int i;
    int left = 0;
    for(i=0;i<str.length();i++){
        if(str[i+1]==' '){
            swap(str[left],str[i]);
            left = i+2;
        }
        
    }
    cout << str << endl;
    
    return 0;
}