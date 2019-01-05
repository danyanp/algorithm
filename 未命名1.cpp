#include <stdio.h>
int main()
{
	//定义N 
    int N; 
    //输入N 
    scanf("%d\n", &N);
    //数组a[],p[] 
    int a[100]={0},i,p[100]={0},t,n=0,j;
    //输入数组a[] 
    for(i=0;i<N;i++)
    scanf("%d", &a[i]);
    
    //排序a[] 
    for(i=0;i<N-1;i++)
    {	
      for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
				{				
					t=a[i];				
					a[i]=a[j];				
					a[j]=t;			
				}

		}	

    }
	//
    for(i=0;i<N;i++)
    {
    //
   	 if(a[i]!=a[i+1])
	    {
			p[n]=a[i];
			n++;
		}
    }
    
	
    printf("%d\n",n);

    for(i=0;i<n;i++)
	{	 
		printf("%d ",p[i]); 
	}	 
    return 0;

}
