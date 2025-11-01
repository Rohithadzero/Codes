/*Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than 
once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

Note: The extra space is only for the array to be returned. Try and perform all operations within the provided array. */
#include<iostream>
using namespace std;
int main() {
     int n,a[50],k,u,r[50],p=0;
     cout<<"enter no of elements : "<<"\n";
     cin>>n;
     cout<<"enter elements : "<<"\n";
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     
     for(int i=0;i<n;i++) {
             u = a[i];
             for(int l=0;l<i;l++) {
                     if(u==a[l]){
                        u=0;
                       break;
                     }
             }
             for(int j=0;j<n;j++) {
                     if(a[j]==u){
                        k++;
                     }
             }
             
             if(k>1){
                cout<<a[i]<<" ";
                p++;    
                
             }
             k = 0;
             u = 0;
             
     }
    if(p==0){
        cout<<"-1";
    }
    cout<<"repeated";
}