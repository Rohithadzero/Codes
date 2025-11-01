#include<iostream>
using namespace std;
int main() {
     int  n,a[100],x,m=0,temp;
     cin>>n;
     cin>>x;
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     for(int i=0;i<n;i++) {
             for(int j=i;j<n;j++) {
                     for(int k=j;k<n;k++) {
                             temp = a[i]+a[j]+a[k];
                                if(a[i]!=a[j]&&a[i]!=a[k]&&a[j]!=a[k]){
                             if(temp==x){
                                m++;
                                } 
                                }
                     }
                     
             }
            
     }
     cout<<m;
}