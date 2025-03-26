// Selection sort 

#include<iostream>
#include<vector>
using namespace std;


vector<int> SelectionSort(vector<int> a,int p){
    int i , j;
  int  n = a.size();
    for(i=p;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    return a;
}

vector<int> SelectionSort(vector<int> a , int p){
    int i , j;
    int n = a.size();
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
}

vector<int> SelectionSort(vector<int> a ){
    int i , j;
  int  n = a.size();
    for(i=n-1;i>0;i--){
        for(j=i-1;j>=0;j--){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    return a;
}


int main(){
    vector<int> arr = {90,65,32,97,122,48,57};
    
    int n;
    cout << "Enter the position" << endl;
    cin >> n;
    arr = SelectionSort(arr , n);
    for(auto i : arr){
        cout << i << "  ";
    }
    
}