// Quadrants in which coordinate lie

#include<bits/stdc++.h>
using namespace std;

int Quadrants(int a , int b){
    if(a>0 && b>0){
        return 1;
    }
    else if(a<0 && b>0){
        return 2;
    }
    else if(a<0 && b<0){
        return 3;
    }
    else{
        return 4;
    }
}

int main(){
    int x , y;
    cout << "Enter the value of x and y" << endl;
    cin >> x >> y;
    
    cout << "The Quadrant in which the x and y lie is  " << Quadrants(x,y) ;
    
}