#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	//������ 
	srand(time(NULL));
	int i ;
	int j ;
	int n,m,k;
	int a,b[10] ;
	scanf("%d",&a);
	for(i = 0 ; i < a ; i ++)
	{
		//����0��1000���ڵ������ 
		j = rand()%1000+1 ;
		b[i] = j;
		
	} 
	for(n=0;n<a;n++){
		for(m=0;m<a-n-1;m++){
		if(b[m]>b[m+1]){
			k = b[m];
			b[m] = b[m+1];
			b[m+1] = k;	
 		}
	}
	}
	for(i=0;i<a;i++){
		printf("%d ",b[i]); 
	} 
	return 0 ;
}
