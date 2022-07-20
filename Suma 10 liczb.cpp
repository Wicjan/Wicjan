#include<iostream>
#include<cstdlib>

using namespace std;
int i, s, a;
int main()
{
	cout<<"Podaj dziesiec liczb, a zostana zsumowane: "<<endl;
	cout<<endl;
    
    for ( i=1 ; i<=10 ; i=i+1 )
    {
    	cin>>a;
    	s=s+a;
    }
    
    cout<<"Suma wynosi: "<<s<<endl;
	
	
	cout<<endl;
	
	system("pause");
	return(0);
}
