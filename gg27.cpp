/*Given an array of integers. Find the Inversion Count in the array. 
Inversion Count: For an array, inversion count indicates how far (or close) the 
array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.*/
#include<iostream>
using namespace std;
int main() {
    int a[100];
    int n,g=0,temp;
    cin>>n;
    for(int i = 0;i < n;i++){
            cin>>a[i];
    }
    for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                    if(a[j]>a[j+1]){
                        g = g + 1;
                        temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
            }
    }
    for(int i = 0;i < n;i++){
            cout<<a[i]<<"\n";
    }
cout<<g;
}

