#include "std_lib_facilities.h"

int main()
{
	double a = 0;
	double smallest=1000000;
	double largest;

	while(cin >> a)
	{

		if(a>largest)
		{
			cout<<"this is the largest so far\n";
			largest=a;
		}
		else {
			largest=largest;
			}
		if(a<smallest)
		{
			cout<<"this is the smallest so far\n";
			smallest=a;
		}
		else{
			smallest=smallest;
		}

	}



	return 0;
}