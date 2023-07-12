#include <iostream>
using namespace std;

void matrixBuilder();

int main()
{
  cout<<endl;
  cout<<"/////////////////////////////////////////" << endl;
	matrixBuilder();
	cout<<"END PROGRAM"<<endl; 
  cout<<"/////////////////////////////////////////" << endl;
  cout<<endl;
	return 0;
}

void matrixBuilder()
{
	char letter; 
	int row;
	int column;

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
}
