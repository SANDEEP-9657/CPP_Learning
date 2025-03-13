// prime numbers between the range

#include <iostream>
using namespace std;

int isPrime(int n){
    int i ;
    
    for(i=2;i<=n/2 ; i++){
        if(n%i ==0){
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int i,x , y;
    cout << "Enter the starting and ending range"<<endl;
    cin >> x >> y;
    for(i=x;i<=y;i++){
        if(isPrime(i)){
            cout << i << " " << endl;
        }
        
    }

    return 0;
}