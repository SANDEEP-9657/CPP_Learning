// Lucus Numbers

#include<bits/stdc++.h>
using namespace std;


void Lucus(int n){
    int l1 = 2;
    int l2 = 1;
    cout << l1 << endl;
    cout << l2 << endl;
    while(n-2){
        int l3 = l2 + l1;
        cout << l3 << " " ;
        l1 = l2;
        l2 = l3;
        n--;
        
    }
}

int main(){
    int n ;
    cout << "Enter the n " << endl;
    cin >> n;
    cout << "The n Lucus Numbers are " << endl;
    Lucus(n);
}