#include <iostream>

using namespace std;
 


//Ax+By+C
int main()
{
     float a,b,c,x,y;
    cout<<"podaj Ax"<<endl;
    cin>>a;
    cout<<"podaj By"<<endl;
    cin>>b;
    cout<<"podaj C"<<endl;
    cin>>c;
    
    x = -c/a;
    y = -c/b;
    cout<<"m. zer. to: "<<x <<y <<endl;
    return 0;
}
