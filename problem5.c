#include<stdio.h>
int main()
{
	int number,x=0;
	scanf("%d",&number);

	for(int i=1;i<=number;i++){
		char input[3];
		scanf("%s",input);
		if(input[1]=='+'){
			++x;
		}
		else{
			--x;
		}
	}
	printf("%d\n",x);
	return 0;
}
