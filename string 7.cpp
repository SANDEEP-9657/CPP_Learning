// string 7

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u'){
        return true;
    }
    
    return false;
}



int main()
{
    string arr = "what is your name";
    int i;
    for(i=0;i<arr.length();i++){
        if(isVowel(arr[i])){
            arr[i]= arr[i]-32 ;
        }
        
    }
    
    
    cout << arr << endl;
    
    return 0;
}