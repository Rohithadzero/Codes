/*The cost of stock on each 
day is given in an array A[] of size N. 
Find all the segments of days on which you buy and sell 
the stock such that the sum of difference between sell and buy prices is maximized. 
Each segment consists of indexes of two elements, first is index of day on which you 
buy stock and second is index of day on which you sell stock.
Note: Since there can be
multiple solutions, the driver code will print 1 if your answer is correct, otherwise,
 it will return 0. In case there's no profit the driver 
code will print the string "No Profit" for a correct solution.*/
#include<iostream>
using namespace std;
int main() {
     int n,a[100],profit=-1,pro,i,j,pro1;
     cout<<"enter the nummber of days : \n";
     cin>>n;
     for(int i = 0;i < n;i++){
            cin>>a[i];
     }
     for(int i=0;i<n;i++) {
             for(int j=i+1;j<n;j++) {
                pro = 0;
                if(a[i]<a[j]){
                    pro = a[j] - a[i];
                }
             
                if(pro>profit){
                    profit = pro;
                }
             }
             
     }
     if(profit <= 0 ){
        cout<<"No Profit \n";
     }
     else{
     cout<<"Max Pofit : "<<profit<<"\n";
     }
     
     for(int i=0;i<n;i++) {
             for(int j=i+1;j<n;j++) {
                pro1 = 0;
                if(a[i]<a[j]){
                    pro1 = a[j] - a[i];
                }
                
                if(pro1==profit){
                    if(profit > 0){
                        cout<<" ("<<"Buy On"<<","<<"Sell On"<<")"<<endl;
                        cout<<" ("<<i<<","<<j<<")"<<endl;
                }
             }
             
     }
}
}