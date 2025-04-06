// string 9

#include <iostream>
#include <string>
#include <cstring>
#include<vector>
using namespace std;



int main()
{
    string arr = "what is your name";
    int i;
    string res;
    res.push_back(arr[0]);
    for(i=1;i<arr.length();i++){
        if(arr[i] == ' '){
            res.push_back(arr[i+1]);
        }
        
    }
    res.push_back(' ');
    res.push_back(arr[1]);
    for(i=1;i<arr.length();i++){
        if(arr[i]==' '){
            res.push_back(arr[i+2]);
        }
    }
   
    
    cout << arr << endl;
    cout << res << endl;
    
    return 0;
}