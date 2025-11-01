//to arrange in the order od 0,1and2//
#include<iostream>
using namespace std;
int main() {
     int a[50],n,b,temp;
     cin>>n;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     //for(int i=0;i<n;i++) {
             for(int j=0;j<n;j++) {

               if(a[j]==0){
                    temp = a[j];
                    a[j] = a[b];
                    a[b] = temp;
                    b++;
               }                                   // 2 1 1 0 2 0 1
                                  }                // 0 0 1 1 1 2 2             
    // }
    //for(int i=0;i<n;i++) {
             for(int j=0;j<n;j++) {

               if(a[j]==1){
                    temp = a[j];
                    a[j] = a[b];
                    a[b] = temp;
                    b++;
               }                                   // 2 1 1 0 2 0 1
                                  }                // 0 0 1 1 1 2 2             
     //}
     //for(int i=0;i<n;i++) {
             for(int j=0;j<n;j++) {

               if(a[j]==2){
                    temp = a[j];
                    a[j] = a[b];
                    a[b] = temp;
                    b++;
               }                                   // 2 1 1 0 2 0 1
                                  }                // 0 0 1 1 1 2 2             
     //}
     for(int i=0;i<n;i++) {
             cout<<a[i]<<" ";
     }
}