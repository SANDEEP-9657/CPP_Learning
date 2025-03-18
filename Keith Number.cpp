// Keith Number

#include<bits/stdc++.h>
using namespace std;

bool isKeithNumber(int n){
    int temp = n;
    vector<int> arr;
    int len = log10(n)+1;
    int rlen = len;
    while(len--){
        arr.push_back(n / static_cast<int>(pow(10,len)));
        n = n % static_cast<int>(pow(10,len));
    }
    
    
    int flag = 0;
    int i =  rlen, j;                     
    while(true){
        int sum = 0;
        int index = i -1;
        
        for(j=0;j<rlen;j++){
            sum += arr[index];
            index--;
            
        }
        arr[i]=sum;
        if(arr[i] == temp){
            flag = 1;
            break;
        }
        if(arr[i] > temp){
            flag = 0;
            break;
        }
        i++;
    }
    
    
    
   if(flag){
       return true;
   }
   else{
       return false;
   }
}

int main(){
    
    int n ;
    cout << "Enter the Number" << endl;
    cin >> n;
    
    if(isKeithNumber(n)){
        cout << "it is a keith number" << endl;
    }
    else{
        cout << " it is not a keith number" << endl;
    }
}