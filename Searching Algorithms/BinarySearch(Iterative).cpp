//Binary Search (Iterative)
//Time Complexity: O(logn)

#include <iostream>
using namespace std;

int binarySearch(int arr[],int p, int q, int key)
{	
	int mid = (p+q)/2;	
	while(p<=q)
	{
		if(key<arr[mid])
		q = mid-1;
		else if(key>arr[mid])
		p = mid+1;
		else
		return mid;
		mid = (p+q)/2;
	}
	return 0;
}

int main()
{
	int test;
	cout<<"Enter the number of test cases: ";
	cin>>test;
	
	while(test--)
	{
	int size,i,key,pos;
	cout<<"\n\nEnter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter "<<size<<" elements in the array in sorted order:\n";
	
	for(i=0;i<size;i++)
	cin>>arr[i];
	
	cout<<"Enter an element to search: ";
	cin>>key;
	pos = binarySearch(arr,0,size-1,key);
	if(pos==0)
	cout<<key<<" is not present in the array";
	else
	cout<<key<<" is present at position "<<pos+1;
	}
}