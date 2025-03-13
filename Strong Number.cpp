// Strong Number

#include <iostream>
using namespace std;

bool isStrong(int n){
    int strong , temp;
    strong =0;
    temp=n;
    while(n!=0){
        int i;
        int rem = n % 10;
        int fact = 1;
        for(i=1;i<=rem ; i++){
            fact = fact*i;
        }
        strong+=fact;
        n=n/10;
    }
    
    if(strong==temp){
        return true;
    }
    else{
    
        return false;
    }
}
int main()
{
    int n ;
    cout << "enter the number" << endl;
    cin >> n ;
    if(isStrong(n)){
        cout << "it is a strong number"<<endl;
        
    }
    else{
        cout << "it is not a strong Number"<<endl;
    }
    return 0;
}