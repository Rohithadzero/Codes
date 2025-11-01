/* to find the number of elemments that are repeated more the or equal to n/k times
chindi banaya hai */
#include<iostream>
using namespace std;
int n,a[50],z=0;
int main() {
        int count(int,int);
        int l=0,k=0,p=0,o=0,h=0,f= 0,m=0;
        cin>>n;
        cin>>k;
        h = n/k;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
     
     
     for(int i=0;i<n;i++) {
                l = a[i];
                f = i;
                o = count(l,f);
                
        if(o>=h){
           p+=1;                                   
        }
            }    

         cout<<p;
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