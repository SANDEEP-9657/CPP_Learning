// string Frequency

#include<iostream>
#include<cstdlib>
#include<string>
#include<unordered_map>
using namespace std;

void StringFrequency(string s){
    unordered_map<char,int> mp;
    for(auto i : s){
        mp[i]++;
    }
    
    for (const auto& [key , value] : mp){
        cout << key << " - " << value << "  ";
    }
    
    
    
    
    
   

}

int main(){
    string str;
    cout << "Enter the String" << endl;
    getline(cin,str);
    StringFrequency(str) ;
    
    
}