#include "std_lib_facilities.h"

int main()
try{
	//cout << "Success!\n";
	

	//cout << "Success!\n";
	

	//cout << "Success!"<<'\n';
	

	/*int res=7;
	vector<int> v(10);
	v[5] = res;
	cout << "Success!\n";*/


	/*vector<int> v(10); 
	v[5] = 7;
	if (v[5]==7) 
		cout << " Success!\n " ;*/


	/*int cond=7;
	if (cond==7) cout << " Success!\n " ; 
	else cout << " Fail!\n " ;*/
	/*bool c = true; 
	if (c) cout << " Success!\n " ; 
	else cout << " Fail!\n " ;*/

	/*string s = " ape " ; 
	bool c = " fool " > s; 
	if (c) cout << " Success!\n " ;*/

	/*string s = " ape " ; 
	if (s== " ape " )
	 cout << " Success!\n " ;*/

	/*string s = " ape " ;
	 if (s== " ape " ) 
	 	cout << " Success!\n " ;*/

	/*string s = "ape"; 
	if (s== "ape") 
		cout << " Success!\n " ;*/

	/* 13. vector<char> v(5);
	for (int i=0; i<v.size(); ++i)
		cout << " Success!\n " ;*/

	/* 14. vector<char> v(5); 
	for (int i=0; i<v.size(); ++i)
		cout << " Success!\n " ;*/

	/* 15. string s = "Success!\n" ; 
	for (int i=0; i<9; ++i) 
		cout << s[i];*/

	/* 16.if (true){
		cout << " Success!\n ";
		}
	else{
		cout << " Fail!\n ";
	}*/

	/*int x = 2000; 
	double c = x; 
	if (c==2000) 
		cout << " Success!\n " ;*/

	/* 18. string s = " Success!\n " ;
	for (int i=0; i<10; ++i) 
		cout << s[i];*/

	/* 19. vector<int> v(5); 
	for (int i=0; i<v.size(); ++i) 
		cout << "Success!\n";*/

	/*20. int i=0;
	int j=9; 
	while (i<10){
		if (i<j) cout << "Success!\n";
		++i;
	}*/

	/*21. int x = 3;
	double d = 5/(x-2);
	if (d==5/(x-2)) 
		cout << " Success!\n " ;*/

	/* 22. string s = "Success!\n " ; 
	for (int i=0; i<=10; ++i) 
		cout << s[i];*/

	/* 23. int j=9;
	int i=0;
	while (i<10){
	if (j>i) cout << "Success!\n " ;
	++i;
	}*/

	/*int x = 4;
	double d = 5/(x-2); 
	if (d==5/(x-2)) 
		cout << "Success!\n " ;*/

	/*25. cout << " Success!\n " ;*/

	return 0;
}
catch(exception& e){
	cerr << "error:" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "Oops: unknown expections!\n";
	return 2;
}