#include<stdio.h>
int main()
{
	int problem,friend1,friend2,friend3,count=0;
	scanf("%d",&problem);

	for(int i=1;i<=problem;i++){
		scanf("%d %d %d",&friend1,&friend2,&friend3);
		if(friend1+friend2+friend3>=2){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}


