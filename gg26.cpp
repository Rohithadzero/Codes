/*Given an array A of n non negative numbers. The task is to find the first equilibrium point in an array. 
Equilibrium point in an array is an index (or position) 
such that the sum of all elements before that index is same as sum of elements after it.*/
#include<iostream>
using namespace std;
int main() {
     int b=0,a=0,A[50],n;
     cin>>n;
     for(int i = 0;i < n;i++){
            cin>>A[i];
     }
     for(int i=0;i<n;i++) {
        a = 0;
             for(int j=i+1;j<n;j++) {
                     a = a + A[j];
             }
             
             b =0;
             for(int k=0;k<i;k++) {
                  b = b+ A[k];   
             }
             
             if(a==b){
                cout<<"eqillibrium position "<<A[i];
             }
}
}