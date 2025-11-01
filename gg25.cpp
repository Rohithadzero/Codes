
/*Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is a leader if it is greater than or equal 
to all the elements to its right side. The rightmost element is always a leader.*/
#include<iostream>
using namespace std;
int main() {
     int a[50],n,leader,res[50];
     cin>>n;
    for(int i = 0;i < n;i++){
            cin>>a[i];
    }
    a[n]=0;
 for(int i=0;i<=n;i++) {
        leader = a[i];
            for(int j=i;j<=n;j++) {
                if(j==i){
                        continue;
                    }
                if(a[j]<=leader){
                     
                }   
                else{
                    break;
                } 
                if(j==(n-1)){
                    cout<<leader<<" ";
                }
                
            }
    }
    cout<<a[n-1];
}