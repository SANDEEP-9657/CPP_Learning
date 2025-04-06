// String 3

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string arr = "What is your name";
    int i ;
    arr[0]='@';
    for(i=1;i<arr.length();i++){
        if(arr[i+1] == ' '){
            arr[i]='#';
        }
        if(arr[i-1] == ' '){
            arr[i]='@';
        }
    }
    arr[i-1] = '#';
    
    cout << arr << endl;
    

    return 0;
}