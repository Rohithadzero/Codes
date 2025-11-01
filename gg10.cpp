/* Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....*/
#include<iostream>
using namespace std;
int main() {
     int n,a[50],temp;
     cin>>n;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     a[n]=0;
     for(int i=0;i<n;i++) {
             if(a[i]<a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;

                i+=1;
                //if(i==(n-1)){
                  //      goto g;
                //}
             }
     }
     g:for(int i=0;i<n;i++) {
             cout<<a[i]<<" ";
     }
}