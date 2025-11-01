#include<iostream>
using namespace std;
int main() {
     int biggest(int,int );
     int a,b,big;
     cin>>a>>b;
     big = biggest(a,b);
     cout<<big;

}
     int biggest(int x,int y){
        if(x>y)
        return x;
        else
        return y;
     }