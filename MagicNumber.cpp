// Magic NUmber

#include<iostream>
using namespace std;

int magicNum(int n){
    int magic = 0;
    while(n!=0){
        int rem = n % 10;
        magic += rem ;
        n = n / 10;
    }
    
    if(magic <=9){
        return magic;
    }
    else{
        magic =   magicNum(magic);
    }
    
    return magic;
}

int main(){
    int n;
    cout << "Enter the number"<<endl;
    cin >> n;
    
    cout << "The magic number is" << magicNum(n)<<endl;
    
}