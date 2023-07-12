

#include <iostream> 
using namespace std;

int main()
{
  	cout<<"//////////////////////////////////////////"<<endl;
	cout<<endl;
	int a, b;

	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;

	if (a > b)
		cout << "Number one is larger \n";

	else
	if (a < b)
		cout << "Number two is larger \n";
	else
		cout << "Number 1 is equal to number 2\n";

	cout<<"//////////////////////////////////////////"<<endl;
	cout<<endl;
	return 0;
}
