
// Encode
#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter the number"<<endl;
    cin >> n ;
    int encode=0;
    while(n !=0){
        int rem = n % 10;
        if(rem % 2 ==0){
            encode = encode * 10 + 1;
        }
        else{
            encode = encode * 10 + 0;
        }
    
        n = n / 10;
    }
    
    int result=0;
    while(encode !=0){
        result = result*10 + encode%10;
        encode=encode/10;
    }
    
    cout << "The encode is" << result<< endl;
    
    
}