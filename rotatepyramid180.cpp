#include <iostream>
using namespace std;
int main()
{
	int n = 5;

	// for Rows
	for (int i = 1; i <= n; i++)
	{
		// for Inner Stuff || For Columns
		//for spaces
		int spaces=n-i;
		for(int j=1;j<=spaces;j++)
		{
			cout<<" ";
		}
		// For Stars
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}