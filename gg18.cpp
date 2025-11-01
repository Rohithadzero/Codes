/*
Given arrival and departure times of all trains that reach a railway station.
 Find the minimum number of platforms required for the railway station so that no
  train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day.
 Arrival and departure time can never be the same for a train but we can have arrival time of
  one train equal to departure time of the other. At any given instance of time, 
  same platform can not be used for b
oth departure of a train and arrival of another train. In such cases, we need different
 platforms.*/
#include<iostream>
using namespace std;
class platform {
      int arr[100],depa[100],n,x,plat;
  public:
      void getdata();
      void calplat();
      void display(){
        cout<<"minimum platforms needed IS/ARE : "<<plat;
      }
};
void platform :: getdata(){
    cout<<"Enter the number trains arrriving this day :\n";
    cin>>n;
    cout<<"Enter the arrival times : \n";
    for(int i=0;i<n;i++) {
          cin>>arr[i];  
    }
    cout<<"Enter the departure times : \n";
    for(int i=0;i<n;i++) {
          cin>>depa[i];  
    }
}
void platform :: calplat(){
  plat = 1;
    for(int i=1;i<n;i++) {
            x = arr[i];
    for(int j=1;j<=i;j++) {
            if(x>arr[i-j] && x<depa[i-j]) {
            plat++;
            break;
          } 
    }
    }
}
int main() {
    platform p;
    p.getdata();
    p.calplat();
    p.display(); 

}