#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"Jest to program do wyliczania najwiekszego wspolnego dzielnika z dwoch liczb"<<endl;
	
	start:
		
	float a;
	cout<<"Podaj pierwsza liczbe:";
    cin>>a;
	cout<<endl;
	
	float b;
	cout<<"Podaj druga liczbe:";
	cin>>b;
	cout<<endl;
	
	if(a<0)
	a=a*(-1);
	
	if(b<0)
	b=b*(-1);
	
	cout<<endl;
	
	if(a==0)
	{

	if(b==0)
	cout<<"Nieskonczenie wiele rozwiazan"<<endl;
	
    else
	if(b!=0)		
	cout<<"Otrzymano NWD "<<b<<endl;
	
	system( "pause" );
	system("cls");
	goto start;
	}
	else 
	
	if(a!=0)
	{
	if(b==0)
	{
	cout<<"Otrzymano NWD "<<a<<endl;
	system( "pause" );
	system("cls");
	goto start;
    }
	else
	
	if(b!=0);
}
    rozp:
    	
	if(a==b)
	cout<<a<<endl;
	else
	
	if(a>b)
	{
	a=a-b;
	goto rozp;
	}
	else
	
	if(a<b)
	{
	b=b-a;
    goto rozp;
}
	cout<<endl;
	cout<<"Otrzymano NWD :"<< a <<endl;
	cout<<endl;
	system( "pause" );
	system("cls");
	goto start;
	return (0);
}
