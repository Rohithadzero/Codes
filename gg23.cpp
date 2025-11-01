/*find the missing numbers starting fromm 1 to n */
#include<iostream>
using namespace std;
int main() {
    int a[50];
    int n,g;
    cin>>n;
    for(int i = 0;i < n;i++){
            cin>>a[i];
    }
    for(int g=1;g<n;g++) {
            
    
    for(int i=0;i<n;i++) {
            if(a[i]==g){
               // cout<<"true";
                break;
            }
            else if (i==(n-1)){
               // cout<<"false";
               cout<<g;
            }
    }
    }
}