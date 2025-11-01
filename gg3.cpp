#include<iostream>
//maximum sum of continuous array of given no of pairs sum;
using namespace std;
int main() {
     int n,a[50],sum =0,k,sum2,mai = 0;
     cin>>n;
     cin>>k;
     for(int i=0;i<n;i++) {
             cin>>a[i];
     }
       
       for(int j=0;j<n;j++) {

        for(int i=j;i<k;i++) {
                sum = sum + a[i];
             }
             if(k<=n){
                //cout<<sum<<endl;
                //sum = 0;
             //cout<<k<<endl;
              k++;
             }
           sum2 = sum;
           sum = 0;
          if(sum2>mai){
             mai = sum2;
          
          sum2 = 0;
       }
       }
    
     cout<<mai;
}