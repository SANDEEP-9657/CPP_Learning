// Diamond Pattern

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n" ;
    cin >> n;
    
    int i ,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i-j >= 0 && (i<=n/2 || i+j <=n-1 && i>=n/2 || j == 0)){
                cout << "*" ;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}