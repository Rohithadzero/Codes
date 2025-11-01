
/*to find ncr*/
#include<iostream>
using namespace std;
int main() {
    long long int result,f,s,d,r,n;
    long long int l;
    int fact0(int);
    cin>>n>>r;
    d = n-r;
    l = fact0(r)*fact0(d);
    result = fact0(n)/l;
cout<<result;
}
int fact0(int h){
   long int fact = 1;
    for(int i=h;i>0;i--) {
            fact = fact * i;
           
    }

    return fact;
}
