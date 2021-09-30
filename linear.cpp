#include<stdio.h>
main()
{
	int a[10],ele,i,n,pos,found;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element to be search");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			found=1;
			pos=i+1;
			break;
		}
}
        if(found==1)
        printf("element found at %d",pos);
        else
		printf("element not found");
	
}
