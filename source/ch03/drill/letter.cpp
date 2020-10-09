#include "std_lib_facilities.h"

int main()
{

	string first_name;

	string first_name2;

	string friend_name;

	char friend_sex = 0;

	int age;

	cout << "Please enter yout first name:\n";
	cin >> first_name;
	cout << "Hello," << first_name << "!\n"; 

	cout << "Enter the first name of the person, you want to write to:\n";
	cin >> first_name2;
	
	cout << "Please enter a friend name:\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Is " << friend_name << " male or female?\nPlease write 'm' if " << first_name << " is male and f if " << friend_name << " is female!\n";
	cin >> friend_sex;

	cout << "Please enter the recipient age!\n";
	cin >> age;

	if(age <= 0 || age >= 110)
		simple_error("you're kidding!\n");


	cout << "Dear " << first_name2 << ",\n";
	cout << "How are you? I am realy fine! I got a new job and I love it.\nI haven't heard from you for years, how are the things are going with you?\n";
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	cout << "I heard you just had a birthday and you are " << age << " years old.\n";
	if(age<12)
		cout << "Next year you will be " << age+1 << ".\n";
	if(age==17)
		cout << "Next year you will be able to vote.\n";
	if(age>70)
		cout << "I hope you are enjoying retirement.\n"; 

	cout << "Yours sincerely,\n\n\n" << first_name << "\n";

	return 0;
}