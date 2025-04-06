// Replace Vowels

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter the String" << endl;
    getline(cin,str);
    
    for(auto i : str){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i=='u'){
            continue;
        }
        cout << i << " ";
    }
}