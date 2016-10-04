#include<bits/stdc++.h>
using namespace std;
char ref[13]={'k','n','R','O','Y','G','B','V','y','W','d','S','N'};
long double data[4][13]={
    {0,10,20,30,40,50,60,70,80,90,-1,-1,-1},
    {0,1,2,3,4,5,6,7,8,9,-1,-1,-1},
    {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,0.1,0.01,-1},
    {-1,1,2,-1,-1,0.5,0.25,0.1,0.05,-1,5,10,20}
};
int getInd(char c)
{
    for(int i=0;i<13;i++)
        if(c==ref[i])  return i;
    return -1;
}
int main()
{
    string s;
    getline(cin,s);
    long double res=0,err;
    for(int i=0;i<4;i++){
        int ind=getInd(s[i]);
        if(ind==-1 || data[i][ind]==-1){
            cerr<<"Error: Invalid color code entered! \n"<<endl;
            return 0;
        }
        if(i==0 || i==1)    res+=data[i][ind];
        else if(i==2)   res*=data[i][ind];
        else    err=res*data[i][ind];
    }
    printf("Resistance is %Lf ohms (+/-%Lf ohms tolerance)\n",res,err);
}
