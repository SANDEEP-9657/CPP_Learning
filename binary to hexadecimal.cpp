// binary to hexadecimal

#include<bits/stdc++.h>
using namespace std;

int BinToDec(int n){
    int dec = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 10;
        dec = dec + rem * pow(2,len);
        n /= 10;
        len++;
    }
    
    return dec;
}

string BinToHex(long int n){
    string res;
    
    while(n!=0){
        int rem = n % 10000;
        
        int dec = BinToDec(rem);
        
        if(dec > 9){
            if( dec == 10){
                res.push_back('A');
            }
            else if(dec == 11){
                res.push_back('B');
            }
            else if(dec == 12){
                res.push_back('C');
            }
            else if(dec == 13){
                res.push_back('D');
            }
            else if(dec == 14){
                res.push_back('E');
            }
            else {
                res.push_back('F');
            }
        }
        else{
            res.append(to_string(dec));
        }
        
        n = n / 10000;
        
       
        
        
    }
     reverse(res.begin(),res.end());
     
     return res;
    
}

int main(){
    long int n;
    cout << "Enter the binary number" << endl;
    cin >> n ;
    string ans = BinToHex(n);
    cout << ans ;
    
    
}