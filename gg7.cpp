/*
There are N children standing in a line. Each child is assigned a rating value given in the integer array ratings.

-You are giving candies to these children subjected to the following requirements:

--Each child must have atleast one candy.
--Children with a higher rating than its neighbors get more candies than their neighbors.
-----------Return the minimum number of candies you need to have to distribute.                */
#include<iostream>
using namespace std;
int main() {
     int n,a[50],t=0,b[50],x;
     cin>>n;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     if(a[0]<a[1]){
             t= a[0];
            }
     else{
                t = a[0]+1;
            }
            b[0] = t;
            //cout<<t<<endl;
    for(int i=1;i<n;i++) {
          if(a[i]>a[i-1]){
            b[i] = b[i-1] + 1;
          }  
          else{
            b[i] = 1;
          }
    }
    t = 0;
    cout<<"candies distributed : ";
    for(int i=0;i<n;i++) {
            cout<<b[i]<<" ";
            if(i==n-1){
                cout<<endl;
            }
    }
    cout<<"total candies needed : ";
   for(int i=0;i<n;i++) {
            t =  t + b[i];
   }
   cout<<t;
}