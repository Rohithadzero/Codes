/*to returnn -1 if every thing is in corect order else 
give the correct switching of the element*/
#include<iostream>
using namespace std;
int main() {
     int n,a[50];
     cin>>n;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     for(int i=0;i<n;i++) {
             if(a[i]>a[i+1]){
                a[i]=a[i+1];
             }
             else{
                a[i]= -1;
             }
     }
    for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
    }
}