#include<stdio.h>
int main()
{
	int k,n,count=0;
	scanf("%d %d",&n,&k);

	int data[n];

	for(int i=0;i<n;i++){
		scanf("%d",&data[i]);
	}

	for(int j=0;j<n;j++){
		if(data[j]>=data[k-1] && data[j]>0){
			count++;
		}
	}
	printf("%d",count);

	return 0;
}

