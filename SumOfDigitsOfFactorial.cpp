// Digits of Factorial

#include<iostream>
using namespace std;
int fact(int n){
    int result = 1;
    int i;
    for(i=1;i<=n;i++){
        result = result * i;
    }
    return result;
}
int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum =0;
    while(n!=0){
        int rem = n % 10;
        sum += fact(rem);
        n = n /10;
    }
    
    cout << "The sum of digits of Factorial is" << sum << endl;
}