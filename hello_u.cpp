#include<iostream>
#include "hello_u.h" 

// commit #2

int main()
{
	//variables for input
	string nbucket;
	int wbucket; 
	int hbucket;
	cout << "Hi what's your name" << endl;
	cin >> nbucket;
	cout << endl << "what is the width of the rectangle" << endl;
	cin >> wbucket;
	cout << endl << "what is the height of the rectangle" << endl;
	cin >> hbucket;
	Naming r;
  r.set_values (wbucket,hbucket);
	cout << "Hi " << nbucket << ", the area of the rectangle is: " << r.area() << endl << endl;
	r.set_name (nbucket);
	cout << r.hello();
	cout << " "  << endl;
	return 0;
}
