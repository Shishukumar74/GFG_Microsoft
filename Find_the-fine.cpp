#include<stdio.h>
int main()
{

	int t;

	scanf("%d",&t);

	while(t--){

	    int n,date,count=0,i;

	    scanf("%d%d",&n,&date);

	    int car[n],penalty[n];

	    for(i=0;i<n;i++)
	
        scanf("%d",&car[i]);
	
    for(i=0;i<n;i++)
	   
     scanf("%d",&penalty[i]);

	    if(date%2==0){

	        for(i=0;i<n;i++)

	            if(car[i]%2) count+= penalty[i];

	    }
	
            else{
	     
                for(i=0;i<n;i++)

	            if(car[i]%2==0) count+= penalty[i];
	
    }
	    printf("%d\n",count);

	}
	return 0;

}