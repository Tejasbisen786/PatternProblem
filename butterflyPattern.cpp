#include <iostream>
using namespace std;
int main()
{
	int n = 5;

    //  UPPPER SECTION 
   
	// for Rows
	for (int i = 1; i <= n; i++)
	{
		// for Inner Stuff || For Columns
		// FOR  Starts
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}

		// For Spaces 
		int space=2 * (n-i);
		for (int j = 1; j <= space; j++)
		{
			cout<<" ";
		}

		for(int j=1;j<=i;j++)
		{
			cout<<"*";

		}
		cout<<endl;
		
	}

    //  //LOWER SECTION 
	//  // for Rows
	for (int i = n; i >= 1; i--)
	{
		// for Inner Stuff || For Columns
		//FOR  Starts
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}

		// For Spaces 
		int space=2 * (n-i);
		for (int j = 1; j <= space; j++)
		{
			cout<<" ";
		}

		for(int j=1;j<=i;j++)
		{
			cout<<"*";

		}
		cout<<endl;

	}

	
	
	return 0;
}