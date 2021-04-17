//Linear Search (Recursive)
//Time Complexity: O(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int key)
{
	if(arr[size]==key)
	return size+1;
	else if(size<0)
	return 0;
	else
	return linearSearch(arr,size-1,key);
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
	cout<<"Enter "<<size<<" elements in the array:\n";
	
	for(i=0;i<size;i++)
	cin>>arr[i];
	
	cout<<"Enter an element to search: ";
	cin>>key;
	pos = linearSearch(arr,size-1,key);
	if(pos==0)
	cout<<key<<" is not present in the array";
	else
	cout<<key<<" is present at position "<<pos;
	}
}