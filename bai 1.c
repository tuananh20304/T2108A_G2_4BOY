#include<stdio.h>

int main(){
	int arr[100];
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
}	
	
	for (int i=0; i<n-1; i++)
{
	for (int j=0; j<n-i-1; j++)
	{
		if (arr[j] < arr[j+1])
	{
			int temp = arr[j];
			arr[j] = arr[j+1];
	
			arr[j+1] = temp;
}
}
}
	
	printf("Sorted array:\n");
for(int i = 0;i<n;i++)
{
printf("%d\t",arr[i]);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}