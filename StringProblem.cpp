// string

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter the String" << endl;
    getline(cin,str);
    
    int index = 0;
    int i;
    for(i=0;i<str.length();i++){
        if((int(str[i])>=65 && int(str[i]) <=90) || (int(str[i]) >=97) && (int(str[i])<=122) ){
            
        }
        else{
        index += str[i]-'0' ;
        }
        
    }
    
    cout << index ;
}