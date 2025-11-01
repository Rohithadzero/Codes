#include<iostream>
#include<math.h>
using namespace std;
int main(){
        float a,b,c,d,e,f,g,h,x,H,M,S,D,R,p;
        
        cout<<"Enter the duration of the vedio (in order hours_minutes_seconds) "<<endl;
        cout<<"Hours : "<<endl;
        cin>>H;
        cout<<"Minutes : "<<endl;
        cin>>M;
        cout<<"Seconds : "<<endl;
        cin>>S;
        D = (H*3600)+(M*60)+(S);
        cout<<" Enter the clarity of the vedio \n (144 for 144p,240 for 240p,360 for 360p,480 for 480p,720 for 720p,1080 for 1080p,1440 for 1440p,2160 for 2160p)"<<endl;
        cin>>x;
             if(x==144){
            cout<<" thoda tho clarity badale bhai 144p me kya dikega :("<<endl;
        }
        else if(x==240){
            R = D*0.0625;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 240p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 240p"<<endl;
                }

        }
        else if(x==360){
            R = D*0.0875;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 360p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 360p"<<endl;
                }
        }
        else if(x==480){
            R = D*0.1562;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 480p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 480p"<<endl;
                }
        }
        else if(x==720){
            R = D*0.343;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 720p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 720p"<<endl;
                }
        }
        else if(x==1080){
            R = D*0.563;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 1080p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 1080p"<<endl;
                }
        }
        else if(x==1440){
            R = D*1.188;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 1440p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 1440p"<<endl;
                }
        }
        else if(x==2160){
            R = D*1.688;
        if (R>1000){
            R = R/1000;
            cout<<R<<" GB will be used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 2160p"<<endl;
        }
            else {
                cout<<R<<" MB will used to stream for "<<H<<"H:"<<M<<"M:"<<S<<"S in 2160p"<<endl;
                }
        }
        else {
            cout<<"Clarity is invalid !"<<endl;
        }
        
}