#include <iostream>
using namespace std;
int main()
{
	int num = 5;
	// for rows
	for (int i = 1; i <= num; i++)
	{

		int spaces = num - i;
		for (int j = 1; j <= spaces; j++)
		{
			cout << " ";
		}


		for (int j = 1; j <= i; j++)
		{
			cout << "*"<<" ";
		}

   cout<<endl;

	}

	for (int i = num; i >= 1; i--)
	{

		int spaces = num - i;
		for (int j = 1; j <= spaces; j++)
		{
			cout << " ";
		}


		for (int j = 1; j <= i; j++)
		{
			cout << "*"<<" ";
		}

   cout<<endl;

	}

	return 0;
}