// string 6

#include <iostream>
#include <string>
#include <cstring>
using namespace std;




int main()
{
    string str = "what is your name";
    int i;
    int left = 0;
    while(i < str.length()-1){
        if(str[i] != ' ' && str[i+1] != ' '){
            swap(str[i],str[i+1]);
            i+=2;
        }
        else{
            i++;
        }
        
    }
    cout << str << endl;
    
    return 0;
}