#include <iostream>
using namespace std;

int menu();
void matrixBuilder();
void convertC();
void convertF();

int main()
{
        cout<<endl;
        cout<<"/////////////////////////////////////"<<endl;
	int pick;
	bool exit = false;

	do
	{
		pick = menu();

		switch(pick)
		{
		case(1): matrixBuilder();
			break;
		case(2): convertC();
			break;
		case(3): convertF();
			break;
		case(4): exit = true;
			break;

		default: cout<< "please try again";
			break;
		} 
	}while(exit != true);

	cout<<"END PROGRAM"<<endl;
	cout<<"/////////////////////////////////////"<<endl;
        cout<<endl;
	return 0;
}

int menu()
{
	int pick;
  
  cout<<"****Menu****"<<endl; 
  cout<<"(1) Matrix Builder"<<endl;
  cout<<"(2) Celsius to Fahrenheit"<<endl; 
  cout<<"(3) Fahrenheit to Celsius"<<endl; 
  cout<<"(4) Quit"<<endl;
  cout<<"Please enter your choice: ";  
  cin>> pick;

	return pick; 
}

void matrixBuilder()
{
char letter; 
	int row;
	int column;
	cout<< endl;
	cout<< "MATRIX BUILDER"<< endl; 
	cout<< "Enter a char: "; 
	cin>> letter; 
	cout<< "NOTE: Row and Column range is between 2 and 30" <<endl;
	
	do{
	cout<< "Enter number of rows: ";
	cin>> row;
		if(row < 2 || row > 30){
			cout<< "Invalid choice" <<endl;
			cout<< "try again!"<<endl;
		}
	}while(row < 2 || row > 30);

	do{
	cout<< "Enter number of columns: ";
	cin>> column;
		if(column < 2 || column > 30){
			cout<< "Invalid choice" <<endl;
			cout<< "try again!"<<endl;
		}
	}while(column< 2 || column > 30);
	
	for (int i = 0; i < row; i++)
	{
		for (int b = 0; b < column; b++)
		cout<< letter;
		cout<<endl; 
	}
	cout<<"Number of: "<< letter << "'s "<< row*column << endl; 
	cout<<endl;
}

void convertC()
{
	float c;
	float f;
	
	cout<< endl;
	cout<< "Celsius to Fahrenheit"<< endl;
	cout<< "Please enter Celsius: ";
	cin>> c;

	if (c < 0 || c > 300)
	{
		cout<<"ERROR"<<endl;
		cout<<"Please enter a number in the range of 0 to 300";
	}
	else 
		f = (9.0/5.0)*c+32.0;
		
		cout<< endl;
		cout<< f << " Fahrenheit"<<endl;
		cout<< endl;
}

void convertF()
{
	float f;
	float c;
	
	cout<< endl;
	cout<< "Fahrenheit to Celsius"<< endl;
	cout<< "Please enter Fahrenheit: ";
	cin>> f;

	if (f < 0 || f > 300)
	{
		cout<<"ERROR"<<endl;
		cout<<"Please enter a number in the range of 0 to 300";
	}
	else 
		c = (5.0/9.0)*(f-32.0);
		
		cout<< endl;
		cout<< c << " Celsius"<<endl;
		cout<< endl; 
}
