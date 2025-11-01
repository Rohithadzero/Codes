#include<iostream>
using namespace std;
int main(){
    int n,x,y,z;
    cin>>n;
    x=0;
    y=1;
    cout<<x<<"\t"<<y;
    z=x+y;
    for(int  i=0;i<n-2;i++){
        cout<<"\t"<<z;
        x=y;
        y=z;
        z=x+y;
    }

}
