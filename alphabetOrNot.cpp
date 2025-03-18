// A character is an alphabet or not

#include<bits/stdc++.h>
using namespace std;


int main(){
    char c;
    cout << "Enter the character" << endl;
    cin >> c;
    if((int(c)>=65 && int(c)<=90) || (int(c)>=97 && int(c)<=122)){
        cout << "it is alphabet" << endl;
    }
    else{
        cout << "it is not alphabet" << endl;
    }
}