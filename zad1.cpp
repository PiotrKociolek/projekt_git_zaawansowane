#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	float a,b,x;
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
	return 0;

}
