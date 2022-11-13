#include <iostream>
#include <math.h>
using namespace std;

float a,b,c,d,x,x1,x2; 
void kwadratowa()
{
	cout<<" Podaj wspó³czynnik kierunkowy prostej a "<<endl;;
    	cin>>a; 
    cout<<"Podaj wspó³czynnik b "<< endl;
    	cin>>b;
    cout<<"Podaj wspó³czynnik c "<<endl;
    	cin>>c;

    d=(b*b)-(4*a*c); //delta

    if(d>0)  

    {

        x1=(-b-sqrt(d))/(2*a);  

        x2=(-b+sqrt(d))/(2*a);  

        cout<<"Wynik to :x1 = "<<x1<<"x2 = "<<x2<<endl;

    }

    if(d==0)  

    {

        x=-b/(2*a);  

        cout<<"Wynik to :  x = "<<x<<endl;

    }

     if(d<0)  

    {      

    cout<<"Brak rozwi¹zañ"<<endl;  
    }
}

void liniowa()
	{
	cout << "podaj a" << endl;
	cin >> a;
	cout <<"podaj b"<<endl;
	cin >> b;
	
	if(a==0)
	{
		cout<<"error"<<endl;	
	}
	x=-b/a;
	cout<<"x = "<<x <<endl;
	}
int main()
{
    int liczba;
    cout << "1 jesli liniowa, 2 jesli kwadratowa: "<<endl;
    cin >> liczba;
    if(liczba != 1 && liczba != 2)
    {
    	cout<<"error liczba z poza zakresu"<<endl;
	}
	else
	{
	
	switch( liczba )
	{
	case 1:
	
		liniowa();
		break;
	
	case 2:
	
		kwadratowa();
		break;
	}
	};
	return 0;	
}
