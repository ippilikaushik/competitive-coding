#include<iostream>
#include<iomanip>
 
using namespace std;
 
// A function swapping values using references.
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
 
// A function to implement Heap’s Algorithm for the permutation of N numbers.
void print(const int *v)
{
	int i;
	int size = sizeof(v)/sizeof(int)+1;
 
	// Loop to print the sequence.
	cout<<"\t";
	for ( i = 0; i < size; i++)
		cout<<setw(4)<<v[i];		
	cout<<"\n";
}
void HeapPermute(int v[], int n)
{
	int i;
	// Print the sequence if the heap top reaches to the 1.
	if (n == 1)
		print(v);
	else
	{
		// Fix a number at the heap top until only two one element remaining and permute remaining.
		for (i = 0; i < n; i++)
		{
			HeapPermute(v, n-1);
			// If odd then swap the value at the start index with the n-1.
			if(n%2 == 1)
				swap(&v[0], &v[n-1]);
			// If even then swap the value at the 'i' index with the n-1.
			else
				swap(&v[i], &v[n-1]);
		}
	}
}
 
int main()
{
	int  i, n, count = 1;
	cout<<"How many numbers do you want to enter: ";
	cin>>n;
	int num[n];
 
	// Take the input.
	cout<<"\nEnter the numbers: ";
	for (i = 0; i < n; i++)
	{
		cin>>num[i];
		count *= (i+1);
	}
 
	// Print the permutation's count.
	cout<<"\nThe number of permutations possible is: "<<count<<"\n";
 
	// Calling Function to print all the permutation.
	HeapPermute(num, n);
	return 0;
}
