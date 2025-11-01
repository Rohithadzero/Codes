      /* Given an array A of N elements. Find the majority element in the array. 
A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array. */
#include<iostream>
using namespace std;
int n,a[50],z=0;
int main() {
        int count(int,int);
        int l=0,k=2,p=0,o=0,h=0,f= 0,m=0;
        cin>>n;
       // cin>>k;
        h = n/k;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     
     
     for(int i=0;i<n;i++) {
                l = a[i];
                f = i;
                o = count(l,f);
                
        if(o>h){
          cout<<l<<" ";
         p+=1;                                   
        }
            }  
            if(p==0){
              cout<<"-1";
            }  

         //cout<<p;
}
int count(int x,int y){
        int g=0;
        if(y==0){
                goto p;
        }
        else if (y>0){
        for(int i=0;i<y;i++) {
                if(x==a[i]){
                        return (0);
                        break;
                }
        }
        }
        p : for(int i=0;i<n;i++) {
                if(a[i]==x){
                        g+=1;
                }
        }
        //cout<<g;
        return (g);
}
