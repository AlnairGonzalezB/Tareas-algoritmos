#include<iostream>

using namespace std;

void Merge(int arr[],int men, int mid,int may)
{
	int n1=mid-men+1,i,j,k;
	int n2=may-mid;
	int izq[n1],der[n2];
	for(i=0;i<n1;i++)
	{
		izq[i]=arr[men+i];
	}
	for(j=0;j<n2;j++)
	{
		der[j]=arr[mid+j+1];
	}
	i=0,j=0;
	for(k=men;i<n1&&j<n2;k++)
	{
		if(izq[i]<der[j])
		{
			arr[k]=izq[i++];
		}
		else
		{
			arr[k]=der[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=izq[i++];
	}
	while(j<n2)
	{
		arr[k++]=der[j++];
	}
}
void MergeSort(int arr[],int men,int may)
{
	int mid;
	if(men<may)
	{
		mid=(men+may)/2;
		MergeSort(arr,men,mid);
		MergeSort(arr,mid+1,may);
		Merge(arr,men,mid,may);
	}
}
int main()
{
	int n=6;
	int arr[n]={2,5,8,4,3,9};
	MergeSort(arr,0,n-1);
	cout<<"\n ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
}
