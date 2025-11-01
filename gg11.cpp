/*Given an array of N integers, and an integer K, find the number of 
pairs of elements in the array whose sum is equal to K.*/
#include<iostream>
using namespace std;
int main() {
     int n,a[50],k,p;
     cin>>n;
     cin>>k;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }

     for(int i=0;i<n;i++) {
             for(int j=i+1;j<n;j++) {
                   if(a[i]+a[j]==k){
                    p+=1;
                   }  
             }
     }
     cout<<p;
}