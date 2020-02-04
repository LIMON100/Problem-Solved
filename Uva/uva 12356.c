#include<stdio.h>
int main()
{
	
     int left[100005],right[100005],i,j,s,b,l,r;
     while(1)
     {
     	scanf("%d%d",&s,&b);
     	if(s==0 && b==0)
     	{
     		break;
		}
		
		for(i=1; i<=s; i++)
		{
			left[i]=i-1;
			right[i]=i+1;
		}
		
		for(i=0; i<b; i++)
		{ 
		   scanf("%d%d",&l,&r);
		   
		   if(left[l]<1)
		    {
		       printf("* ");	
			}
			else
			{
				printf("%d ",left[l]);
			}
			
			if(right[r]>s)
			{
				printf("*");
			}
			else
			{
				printf("%d",right[r]);
			}
			
			left[right[r]]=left[l];
			right[left[l]]=right[r];
			printf("\n");	
		}
		
		printf("-\n");
	 }
	return 0;
}
