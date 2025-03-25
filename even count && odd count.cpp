// even count && odd count 
#include <iostream>
#include<vector>
using namespace std;

int oddCount(vector<int> arr){
    int i;
    int count = 0;
    for(i=0;i<arr.size();i++){
        if(arr.at(i)%2 !=0){
            count++;
        }
    }
    return count;
}

int EvenCount(vector<int> arr){
    int i;
    int count = 0;
    for(i=0;i<arr.size();i++){
        if(arr.at(i)%2 ==0){
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> vec ;
    cout << "Enter the number of elements" ;
    int n;
    cin >> n;
    while(n--){
        int num ;
        cin >> num ;
        vec.push_back(num);
    }
    
    cout << "The number of odd and even count are" << oddCount(vec) << "   " << EvenCount(vec) ;

    return 0;
}