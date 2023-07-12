#include <iostream>
using namespace std;

void convertCelsius();
void convertFahrenheit();

int main()
{
  cout<<endl;
  cout<<"/////////////////////////////////////////"<<endl;
        convertCelsius();
	convertFahrenheit();
	cout<<"END PROGRAM"<<endl;	
  cout<<"/////////////////////////////////////////"<<endl;
	return 0; 
}

void convertCelsius()
{
	float Celsius;
	float Fahrenheit;
	
	cout<< "Please enter Celsius: ";
	cin>> Celsius;

	if (Celsius < 0 || Celsius > 300)
	{
		cout<<"ERROR"<<endl;
		cout<<"Please enter a number in the range of 0 to 300";
	}
	else 
		Fahrenheit = (9.0/5.0)* Celsius+32.0;

	cout<< Fahrenheit << " Fahrenheit"<<endl;
}	

void convertFahrenheit()
{
	float Fahrenheit;
	float Celsiusc;

	cout<< "please enter Fahrenheit: ";
	cin>> Fahrenheit;

	if (Fahrenheit < 0 || Fahrenheit > 300)
	{
		cout<<"ERROR"<<endl;
		cout<<"Please enter a number in the range of 0 to 300";
	}
	else 
		Celsiusc = (5.0/9.0)*(Fahrenheit-32.0);

	cout<< Celsiusc << " Celsius"<<endl;
}
