
/*
to display the array address tilll where the sum array is equal to given j;
*/
#include<iostream>
using namespace std;
int main() {
	int a[50],n,g=0,j,b,c=0,d,m,i;
	cin>>n;
	cin>>j;
	for(int l=0;l<n;l++) {
			cin>>a[l];
	} 
	f : {m = c;
	for(i=m;i<n;i++) {
		g = g + a[i];
        //cout<<i<<endl;
		
        if(g>=j){
		break;
        }
	}
    
    //cout<<g<<endl;
	if(g>j||g==j){
        if(g==j){
            cout<<m<<"-"<<i<<endl;
        
        }
        else{
            c = c+1;
            g = 0;
            m = 0;
            i = 0;
            
        }
        goto f;
        
    }
    
    
}
	
}