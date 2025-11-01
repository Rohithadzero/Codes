/* Given an array of N elements 
   We need to count the jummps that are made for the first elemment to reach the last of the array 
   In order for the element to jump thhe element should be less then the element it will jump across;
    --> OUTPUT the number of jumps

*/
#include<iostream>
using namespace std;
int main() {
     int n,a[90],j,p = 0,x,y,b;
     cin>>n;
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     b = n-1;
      if(a[0]!=0){
         x = a[p]; 
         y = a[p+x];
         p+=x;
         j+=1;
       //cout<<y<<"\n";
      }
      if(p<n){
    while(p<n){
    
       x = y; 
       y = a[p+x];
       p = p+x;
       
              j++;
              if(p==b){  
          goto l;    }
    }
      }
      else {
        j+=1;
      }
    l : cout<<j;
}