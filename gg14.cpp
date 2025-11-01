/*Given an array arr[] and an integer K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.*/
#include<iostream>
using namespace std;
int main() {
  int n,k,l,r,small,f;
  long long int a[100];
  cin>>n;
  cin>>k;
  f = k-1;
  //cin>>l>>r;
     for(int i = 0;i < n;i++){
        cin>>a[i];
     }
     for(int i=0;i<k;i++) {
      small = a[0];
     for(int i=0;i<n;i++) {
            
            if(a[i]<small){
              small = a[i];
            }
     }
    
     for(int i=0;i<n;i++) {
             if(a[i]==small){
              a[i] = 100000000;
             }
     }
     
     //cout<<small<<" ";
     
     }
     cout<<small;
     
}