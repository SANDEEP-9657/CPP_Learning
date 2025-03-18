// Uppercase lowercase or special character

#include<bits/stdc++.h>
using namespace std;

int main(){
   char c;
   cout << "Enter the character" <<endl;
   cin >> c;
   if(int(c)>=65 && int(c)<=90){
       cout << "It is Uppercase" <<endl;
   }
   else if(int(c)>=97 && int(c)<=122){
       cout << "It is lowercase" << endl;
   }
   else if(int(c)>=48 && int(c)<=57){
       cout<< "It is number" << endl;
   }
   else{
       cout << "it is special character" << endl;
   }
}
