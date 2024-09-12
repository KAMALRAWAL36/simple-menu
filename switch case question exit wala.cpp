#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int a,b,ch;
  printf("\n 1.add \n 2.sub \n 3.multiply \n 4.Division \n 5.exit");
 
  printf("\n enter your choice");
  scanf("%d",&ch);
  
  switch(ch)
  {
  	case 1:
  		printf("enter two number");
  		scanf("%d%d",&a,&b);
    	printf("\n sum=%d",a+b);
  		break;
  	case 2:	
  	    printf("enter two number");
  		scanf("%d%d",&a,&b);
  		printf("\n subtract=%d",a-b);
  		break;
  	case 3:
  		 printf("enter two number");
  		scanf("%d%d",&a,&b);
  		printf("\n multiply=%d",a*b);
  		break;
  	case 4:
	  	 printf("enter two number");
  		scanf("%d%d",&a,&b);
  		printf("\n division=%d",a/b);
  		break;
  	case 5:
	  	
	     exit(0);	
	  default:
	  	printf("invalid choice");
  }
  return 0;
}
