// Magic Number

#include<iostream>
using namespace std;
int  Magic(int n){
    int magic = 0;
    while(n!=0){
        int rem = n % 10;
        magic += rem;
        n = n / 10;
    }
    
    if(magic <=9){
        return magic;
    }
    else{
        magic = Magic(magic);
    }
    
    return magic;
    
}

int main(){
    int n;
    cout << "Enter the Number" << endl;
    cin >> n ;
    
    if(Magic(n)==1){
        cout << " it is Magic Number" << endl;
    }
    else{
        cout << " it is not a magic number" << endl;
    }
    
}