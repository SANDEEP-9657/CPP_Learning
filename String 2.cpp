// String 2

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(string& str , int left , int right){
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
}

int main()
{
    string str = " My name is Vurimundara Sandeep Reddy ";
    int i ;
    int start = 0;
    for(i=0 ; i< str.length();i++){
        if(str[i] != ' '){
            continue;
        }
        else{
            reverse(str,start , i-1);
            start = i;
        }
    }
    
    cout << str << endl;
    

    return 0;
}