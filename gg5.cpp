/*to match the value of index with provided value - n*/
#include<iostream>
using namespace std;
int main() {
     int n,t,a[50],i;
     cin>>n;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     for(int i=0;i<n;i++) {
      
       t = a[i];
        if(t==n){
            cout<<i<<"  ";
            
        }
         }
}