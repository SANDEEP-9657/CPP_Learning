// Friendly Pair



#include<bits/stdc++.h>
using namespace std;

bool isFriendlyPair(int a , int b){
    int SumA = 0;
    int SumB = 0;
    int i;
    for(i=1;i<=a/2;i++){
        if(a%i == 0){
            SumA = SumA+i;
        }
    }
    for(i=1;i<=b/2;i++){
        if(b%i == 0){
            SumB = SumB+i;
        }
    }
    
    return (SumA/a) == (SumB/b) ;
}




int main(){
    int a , b ;
    cout << "Enter the two number" << endl;
    cin >> a >> b;
    if(isFriendlyPair(a,b)){
        cout << "They are Friendly pair" << endl;
    }
    else
    {
        cout << "They are not Friendly pair" << endl;
    }
}