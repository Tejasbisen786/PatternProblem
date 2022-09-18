#include <iostream>
using namespace std;
int main()
{
	int n = 5;

	// for Rows
	for (int i = n; i >= 1; i--)
	{
		// for Inner Stuff || For Columns
		for (int j = 1; j <= i; j++)
		{
			cout << j <<" ";
		}
		cout << endl;
	}
	return 0;
}