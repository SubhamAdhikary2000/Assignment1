#include<iostream>
using namespace std;
int main()
{
	int TotalDay,RemainingDay,Years,Weeks;
	cout<<"Enter Days"<<endl;
	cin>>TotalDays;
	Years=TotalDay/365;
	RemainingDay=TotalDay%365;
        Weeks=RemainingDay/7;
	RemainingDay=RemainingDay%7;
	cout<<Years<<"years "<<Weeks<<"weeks "<<RemainingDay<<"days "<<endl;
	return 0;
}
