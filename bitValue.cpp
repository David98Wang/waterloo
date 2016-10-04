#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two integer numbers (each separated by a space): "<<endl;
	cin>>a>>b;
	int c=1<<b;
	bool d=(a&c);
	cout<<"The value of Bit "<<a<<" is "<<d<<endl; 
	
}