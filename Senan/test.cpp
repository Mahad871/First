#include<iostream>
using namespace std;
int main()
{   int n;
 int arr[n];
cout<<"enter the size of array :"<<endl;
cin>>n;
cout<<"enter the elements of array: "<<endl;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	
}

int num;
cout<<"enter the number to be searched: "<<endl;
 cin>>num;
	int i=0;
	int j=n;
	int mid=n/2;
	for(int i;i<=j;i++)
	{ 
		if(arr[mid]==num)
		{cout<<" the number is on the index "<<mid<<endl;
		i=j;
		
		}
		else if(arr[mid]>num)
		{   j=mid-1;
		if(arr[j]==num)
		{
		cout<<"the number is on the index "<<j;
        i=j;
	}
			
		}
		else 
		{
		i=mid+1;
		if(arr[i]==num)
	{
			cout<<"the number is on the index "<<i<<endl;
	    i=j;
	}
		
		
	}
}
return 0;
}