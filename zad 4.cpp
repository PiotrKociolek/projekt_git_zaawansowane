#include <iostream>  

#include <math.h>

using namespace std;

 float a,b,c,d,x,x1,x2; 

 int main ()

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
