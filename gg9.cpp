/*Given an array and an integer B, traverse the array (from the beginning) and if the element in array is B,
 double B and continue traversal. Find the value of B after the complete traversal.*/
#include<iostream>
using namespace std;
int main() {
        int n,b,a[50];
     cin>>n;
     cin>>b;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
        for(int i=0;i<n;i++) {
                if(a[i]==b){
                        b= b*2;
                }
        }
        cout<<b;
}