// Happy Number 1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70, 79, 82, 86, 91, 94, 97, 100. 

#include<iostream>

using namespace std;

int HappyNumber(int n){
    if(n==1){
        return 1;
        
    }
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        sum += rem * rem ;
        n = n / 10;
    }
    
    return HappyNumber(sum);
    
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(HappyNumber(n) == 1){
        cout << "It is happy number" << endl;
    }
    else{
        cout << "It is not happy number" << endl;
    }
}