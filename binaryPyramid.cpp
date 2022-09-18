#include <iostream>
using namespace std;
int main()
{
	int n = 5;

   
	// for Rows
	for (int i = 1; i <= n; i++)
	{
		// for Inner Stuff || For Columns
		// FOR  Starts
		for(int j=1;j<=i;j++)
		{
		 int sum =i+j;
		 if(sum%2==0)
		 {
			cout<<"1"<<" ";

		 }
		 else{
			cout<<"0"<<" ";

		 }
		}

	
		cout<<endl;
		
	}

  

	return 0;
}