/*Given a sorted array of size N and an integer K, 
find the position(0-based indexing) at which K is present in the array using binary 
search.*/
#include<iostream>
using namespace std;
int main() {
     int a[1000],n,k,l=0;
     cin>>n;
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     cin>>k;
     for(int i=0;i<=n;i++) {
             if(a[i]==k){
                
                cout<< i;
                l = l+1;
                
            
             }
     }
     if(l==0){
        cout<<"-1";
     }

}