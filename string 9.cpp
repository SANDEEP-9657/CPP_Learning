// string 9

#include <iostream>
#include <string>
#include <cstring>
#include<vector>
using namespace std;

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u'){
        return true;
    }
    
    return false;
}


vector<char> ls = {'a','e','i','o','u'};


int returni(char c){
    int i = 0;
    for(i =0  ; i < ls.size()-1;i++){
        if(c == ls[i]){
            return i+1;
        }
    }
    return 0;
    
}

int main()
{
    string arr = "what is your name";
    int i;
    for(i=0;i<arr.length();i++){
        if(isVowel(arr[i])){
            arr[i]=ls[returni(arr[i])];
        }
    }
   
    
    cout << arr << endl;
    
    return 0;
}