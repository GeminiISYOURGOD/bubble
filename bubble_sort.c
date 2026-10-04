#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	int num[8];
	printf("Please input 8 numbers:");
	for(i=0;i<8;i=i+1){	
	scanf("%d",&num[i]); 
    }
    for(b=0;b<8;b=b+1){
	
    for(a=1;a<8;a=a+1){
    	if(num[a-1]>num[a]){
    		c=num[a-1];
    		num[a-1]=num[a];
    		num[a]=c;
		}
	}
}
    printf("After sorting");
    for(d=0;d<8;d=d+1){
    printf(" %d",num[d]);
}
    return 0;
}
