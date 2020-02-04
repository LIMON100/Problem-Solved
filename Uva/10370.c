#include<stdio.h>
int main()
{
	int a[1001],i,j,n,sum,t,b,avr;
	float ans;
	char ch='%';
	scanf("%d",&t);
		for(j=0;j<t;j++)
		    {
		    b=0;
		    sum=0;
		    scanf("%d",&n);
		    
		    for(i=0;i<n;i++)
			{
		        scanf("%d",&a[i]);
		    }
		    
		    for(i=0;i<n;i++)
			{
				sum=sum+a[i];
			}
			
		    avr=sum/n;
		    
		    for(i=0;i<n;i++)
			{
				if(a[i]>avr)
		            b=b+1;
			}
			
		    ans=((float)b/(float)n);
		    printf("%.3f%c\n",ans*100,ch);
          }
   return 0;
}
