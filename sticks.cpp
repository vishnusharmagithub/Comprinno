#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int test=0;
	cin>>test;
	while(test--)
	{
		int n;
		
		cin>>n;
		int arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
			
		sort(arr, arr+n);
		int a=1, count=0, b=1;	
		for(int i=n-1; i>0; i--)
		{
			if(count<2)
			{
				if(arr[i]==arr[i-1])
				{
					count++;
					if(count==1)
					{
						a=arr[i];
						i--;
					}
					else if(count==2)
					{
						b=arr[i];
					}
				}
			}	
		}
		if(count==2)
			cout<<a*b<<endl;
		else
			cout<<-1<<endl;		
	}
	return 0;
}