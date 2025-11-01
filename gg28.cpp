
/*Given an array arr[ ] of size N having elements, the task is to find the next greater element for 
each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which 
is greater than the current element.
If there does not exist next greater of current element, 
then next greater element for current element is -1. For example, next greater of the last element is always -1.*/
#include<iostream>
using namespace std;
int main() {
     int n,a[50];
     cin>>n;
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     for(int i=0;i<n;i++) {
             for(int j=i+1;j<n;j++) {
                     if(a[i]<a[j]){
                        cout<<a[j]<<" ";
                       break;
                     }
                      else if(j==(n-1)){
                            cout<<"-1"<<" ";
                        }
             }
     }
     cout<<"-1";
}