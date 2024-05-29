#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a;
        double k,d;
	scanf("%d %d %d",&n,&m,&a);

	if(n%a==0){
		k=n/a;
	}
	else{
		k=ceil(n/a);
	}
	if(m%a==0){
		d=m/a;
	}
	else{
		d=ceil(m/a);
	}




	int result=k*d;
	printf("%d\n",result);

	return 0;
}
