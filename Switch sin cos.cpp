#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
int znak, a;
cout<<"Wprowadz liczhbe: ";
cin>>a;
cout<<"1 to sin, 2 to cos, 3 to ^2, 4 to pierwiatek wybierz jedno z nich: ";
cin>>znak;
cout.precision(2);

switch(znak) 
{
	case 1:
		cout<<"sin z liczby "<<a<<" wynosi: "<<sin(a)<<endl;
		break;
		case 2:
			cout<<"cos z liczby "<<a<<" wynosi: "<<cos(a)<<endl;
			break;
			case 3:
				cout<<"Liczba "<<a<<" podniesiona do kwadratu wynosi: "<<a*a<<endl;
				break;
				case 4:
					cout<<"Liczba "<<a<<"pod pierwiastkiem wynosi: "<<sqrt(a)<<endl;
					break;
				default:
					cout<<"Niezidentyfikowana operacja"<<endl;
					break;
}
system("pause");
return 0;
}

