#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
	start:
	cout<<"To jest kalkulator na cztery proste dzilania na dwoch liczbach"<<endl;
	cout<<endl;
	
	cout<<"typu dodawanie, odejmowanie, mnozenie i dzielenie."<<endl;
	cout<<endl;
	
	cout<<"Wiec 1-dodawanie, 2-odejmowanie, 3-mnozenie i 4-dzielenie calkowite"<<endl;
	cout<<endl;
	
	float x;
	cout<<"Podaj pierwsza liczbe:";
    cin>>x;
	cout<<endl;
	
	float y;
	cout<<"Podaj druga liczbe:";
	cin>>y;
	cout<<endl;
	
	int w;
	cout<<"Podaj symbol dzialania:";
	cin>>w;
	cout<<endl;
	
	float r;
	
	if(w== 1)
	r=x+y;
	else
	
	if(w== 2)
	r=x-y;
	else
	
	if(w== 3)
	r=x*y;
	else
	
	if(w== 4)
	r=x/y;
	else
	
	if(w>= 5)
	cout<<"Nieprawidlowa operacja, przeczytaj instrukcje i podaj wlasciwa wartosc."<<endl;
	
	cout<<endl;
	
	cout<<"Otrzymano wynik rowny:"<< r <<endl;
	cout<<endl;
	
	system( "pause" );
	system("cls");
	goto start;
	return (0);
}
