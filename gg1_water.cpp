#include<iostream>
using namespace std;
int main() {
    int N,sum,g,l = 0,m = 0,f,i,o;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++) {
            cin>>a[i];
    }
    i =0;
    o = N;
    for(int i=0;i<N;i++) {
            
    
        if(a[i]<a[N-1]){
           g = a[i];
        }
        else if (a[i]>a[N-1]){
           g = a[N-1];
        }
        if(g!=0){
            break;
        }
        o--;
        
        
    }
        

        int k = g*o;
        for(int i=0;i<N;i++) {
            sum = sum + a[i];
                
        }
    for(int i=0;i<N;i++) {
            if(a[i]>g){
               m = a[i] - g;
               m = m + m;
            }
           
    }
        f = (k-sum)+(m/2);

        if(f<=0){
            cout<<"0";
        }
        else   {
               cout<<f;
        }   
        

}