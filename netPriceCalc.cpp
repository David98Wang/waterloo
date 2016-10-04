#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter the offer price of the item: ";
	double p;
	cin>>p;
	cout<<"Discount rate (%): ";
	double d;
	cin>>d;
	cout<<"Tax rate (%): ";
	double t;
	cin>>t;
	printf("The net price of the item is: $%.2f\n",(p*(1-(d/100))*(1+(t/100))));
	
}