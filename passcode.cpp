#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter three characters consecutively without space: ";
	char a,b,c;
	cin>>a>>b>>c;
	int s=(int)a*1000000+(int)b*1000+(int)c;
	cout<<"The corresponding passcode is: "<<s<<endl;
}