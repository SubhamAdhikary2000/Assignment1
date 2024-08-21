#include<iostream>
using namespace std;
long double Evaluation(long double x)
{
	return (x+(1/(x+(1/(x+(1/x))))));
}
int main()
{

    long double x,y;
    cout<<"Enter a real no"<<endl;
    cin>>x;
    y=Evaluation(x);
    cout<<"The evaluated Expression value"<<y<<endl;
    return 0;

}
