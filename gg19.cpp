
/*
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N}  
is missing and one number 'B' occurs twice in array. Find these two numbers.
expected output inorder   _repeated _missing wrrrrrroonng
*/
#include<iostream>
using namespace std;
int n,a[60];
int main() {
    int repeat(int,int);
     int u,m;
     cin>>n;
     for(int i = 1;i < n;i++){
            cin>>a[i];
     }
     for(int i=1;i<n;i++) {
            u =  repeat(a[i],i);
            if(u>0){
                goto h;
            }
     }
h : cout<<u;
for(int i=1;i<n;i++) {
        if(a[i]!=i){
            m  = i;
            if(m<u){
            cout<<"  "<<m;
            break;
            }
            else if(m>=u){
                if(a[i+1]!=i){
                cout<<" "<<i;
                break;
            }
            }
        }
        
}

}
int repeat(int x,int y){
    int f;
    for(int i=0;i<n;i++) {
        if(i==y){
            continue;
        }
        if(x==a[i]){        
            return x; }
    else{
        f = 0;   }
    }
    return f;
}

