/*Given an array arr of size n and an integer X. Find if there's a triplet in the 
array which sums up to the given integer X.
*/
#include<iostream>
using namespace std;
int main() {
     int a[50],n,sumi,sum,y=0,i,j,k;
     cin>>n;
     cin>>sumi;
     for(int i=0;i<n;i++) {
             cin>>a[i];
                  }
     for(int i=0;i<n;i++) {
        if(i==i){
             continue;
                        }
             for(int j=0;j<n;j++) {
                if(j==i||j==j){
                            continue;
                        }
                     for(int k=0;k<n;k++) {
                        if(k==i||k==j||k==k){
                            continue;
                        }
                             sum = a[i]+a[j]+a[k];
                             //cout<<sum<<" ";
                             if(sum==sumi){
                                //cout<<sum<<" ";
                                y++;
                             }
                     }
             }
     }             
cout<<y;
}
