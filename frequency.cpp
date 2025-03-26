#include<bits/stdc++.h>
using namespace std;




int main(){
    vector<int> a = {7,7,18,1,2,18,1,7,3,31,17};
    int d[a.size()];
    int f[a.size()];
    int j = 0 , c = 0;
    while(j<a.size()){
        int i = 0;
        while(i<c){
            if(a[j]==d[i]){
                f[i]+=1;
                break;
            }
            i+=1;
        }
        
        if(i==c){
            d[i]=a[j];
            f[i]=1;
            c=c+1;
        }
        
        j=j+1;
    }
    
    
    for(int z = 0 ; z < c ; z++){
        cout << d[z] << "  " << f[z] << endl;
    }
   
    
    
    
}