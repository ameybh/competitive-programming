#include<stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int j,m,n;
	    m=0;
	    scanf("%d",&n);
	    for(j=2;j<n;j++)
	    {
	        if(n%j==0)
	        {
	            m++;
	        }
	    }
	    if(m==0 && n != 1)
			printf("yes\n");
	    else
			printf("no\n");
	}
	return 0;
}
