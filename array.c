#include <stdio.h>

int main()
{
	int a[]={1,2,3,4,5,6,7},d=5,temp[d],n=7,i,j,k,l;
	for(i=0;i<d;i++)
	{
	    temp[i]=a[i];
	}
	for(j=0;j<n;j++)
	{
	    a[j]=a[j+d];
	}
	for(k=0;k<=d+n;k++)
	{
	    a[n-d]=temp[k];
	    d--;
	}
	for(l=0;l<n;l++)
	{
	    printf("%d  ",a[l]);
	}
	return 0;
}
