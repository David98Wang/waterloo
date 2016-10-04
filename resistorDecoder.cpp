#include<bits/stdc++.h>
using namespace std;
long long n[13]={'k','n','R','O','Y','G','B','V','y','W','d','S','N'};
long long b[13]={0,1,2,3,4,5,6,7,8,9,-1,-1,-1};
long double m[13]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,0.1,0.01,-1};
long double e[13]={-1,1,2,-1,-1,0.5,0.25,0.1,0.05,-1,5,10,20};
struct resistor{
    long long band;
    long double mult;
    long double err;
};
map<char,resistor>col;
bool valid(string s){
    for(int i=0;i<4;i++){
        map<char,resistor>::iterator it;
        it = col.find(s[i]);
        if(it==col.end())
            return false;
        if((i==0||i==1)&&col[s[i]].band==-1)
            return false;
        if((i==2)&&col[s[i]].mult==-1)
            return false; 
        if((i==3)&&col[s[i]].err==-1)
            return false;
    }
    return true;
}
int main()
{
    resistor temp;
    for(int i=0;i<13;i++){
        temp.band=b[i];
        temp.mult=m[i];
        temp.err=e[i];
        col[n[i]]=temp;
    }
    string s;
    cout<<"Enter the four resistor color codes: ";
    cin>>s;
    if(!valid(s)){
        cerr<<"Error: Invalid color code entered! "<<endl;
        return 0;
    }
    long double res=0;
    //cout<<col[s[0]].band<<" "<<col[s[1]].band<<endl;
    res+=(10*col[s[0]].band+col[s[1]].band)*col[s[2]].mult;
    long double err;
    err = res * col[s[3]].err / 100;
    cout<<"Resistance is "<<res<<" ohms (+/-"<<err<<" ohms tolerance)"<<endl;
}
