#include <iostream>
using namespace std;
int main()
{
	int n = 5;
	// Count
	int count=1;

	// for Rows
	for (int i = 1; i <= n; i++)
	{
		// for Inner Stuff || For Columns
		for (int j = 1; j <= i; j++)
		{
			cout << count<<" ";
			count++;
		}
		cout << endl;
	}
	return 0;
}