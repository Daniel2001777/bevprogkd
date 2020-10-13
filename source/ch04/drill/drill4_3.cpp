#include "std_lib_facilities.h"

int main()
{
	double a = 0;
	string b = " ";
	double sum=0;
	double cm=0.01;
	const double f = 30.48;
	const double in = 100/2.54;
	double akt = 0;
	double smallest=1000000;
	double largest;
	int db = 0;
	vector<double> values;

	cout << "Please enter a number and a utnit(cm,m,in,f)\n";

	while(cin >> a >> b)
	{
		cout << endl << "The actual value is: " << a << b << endl;
		if(b=="cm"){
			sum=sum+(a*cm);
			akt=a*cm;
		}
		else if(b=="in"){
			sum=sum+(a/in);
			akt=a/in;
		}
		else if(b=="m"){
			sum=sum+a;
			akt=a;
		}
		else if(b=="f"){
			sum=sum+(a/(100/f));
			akt=a/(100/f);
		}
		else{
			simple_error("The unit is incorrect!\n");
		}
		cout<<endl << "The summary is: " << sum << "m\n";
		values.push_back(akt);
		if(akt>largest)
		{
			cout<<endl<<"this is the largest so far\n";
			largest=akt;
		}
		else {
			largest=largest;
			}
		if(akt<smallest)
		{
			cout<<endl<<"this is the smallest so far\n";
			smallest=akt;
		}
		else{
			smallest=smallest;
		}
		db++;
		akt=0;
	}
	cout << endl << "The largest value is: " << largest << "m";
	cout << endl << "The smallest value is: " << smallest << "m";
	cout << endl << "The number of the values is: " << db << "db";
	cout << endl << "The summary is: " << sum << "m" << endl;
	sort(values);
	for(int i=0;i<(db);i++)
	{
		cout << "The vector " << (i+1) << ". value is " << values[i] << endl; 
	}

	return 0;
}