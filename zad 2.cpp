#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float a,b,x;
	cout << "podaj a" << endl;
	cin >> a;
	cout <<"podaj b"<<endl;
	cin >> b;
	
	if(a==0 && b==0)
	{
		cout<<"nieskonczenie wiele rozwiazan"<<endl;	
	} else if (a==0 && b!=0)
	{
	    cout<<"brak rozwiazan"<<endl;
	}
	x=-b/a;
	cout<<"x = "<<x <<endl;
	return 0;
}
