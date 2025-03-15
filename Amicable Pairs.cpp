// Amicable Pairs

#include<iostream>
using namespace std;

bool isAmicable(int x , int y){
    int sumx = 0;
    int sumy = 0;
    int i ;
    for(i=1;i<=x/2;i++){
        if(x%i == 0){
            sumx+=i;
        }
    }
    for(i=1;i<=y/2;i++){
        if(y%i == 0){
            sumy+=i;
        }
    }
    
    if(sumx == y && sumy == x){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x , y;
    cout << " enter the two numbers" << endl;
    cin >> x >> y ;
    if(isAmicable(x,y)){
        cout << " they are amicable pairs" << endl;
    }
    else{
        cout << " they are not amicable pairs" << endl;
    }
}