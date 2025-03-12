// FIND THE MAXIMUM AND MINIMUM ELEMENT IN THE ARRAY

#include <iostream>
using namespace std;

void MaxnMin(int arr[] , int n){
    int i ;
    int min = arr[0];
    int  max = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    
    cout << "Minimum :" << min <<"\t"<< "Maximum"<< max ;
}

int main()
{
    
    int arr[10]={10,2,423,44,3,4,9};
    MaxnMin(arr,7);
    return 0;
}