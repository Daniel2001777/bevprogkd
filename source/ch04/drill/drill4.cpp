#include "std_lib_facilities.h"

int main()
{
	double a = 0;
	double b = 0;

	while(cin >> a >> b)
	{
		cout << "number1=" << a << "\tnumber2=" << b << endl;
		if(a<b)
			cout<<"the smaller number is:"<<a<<endl<<"the larger number is:"<<b<<endl;
		if(a>b)
			cout<<"the smaller number is:"<<b<<endl<<"the larger number is:"<<a<<endl;
		if(a==b)
			cout<<"the numbers equal\n";
		if(abs(a-b)<=0.01)
			cout<<"Almoust equal\n";
	}



	return 0;
}