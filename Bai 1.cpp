#include <stdio.h>
#include <math.h>
   int main(){
   	printf("\nTim so be nhat:\n");
   	int a,b,c;
   	printf("nhap so thu nhat: ");
   	scanf("%d",&a);
   	printf("nhap so thu hai: ");
   	scanf("%d",&b);
   	printf("nhap so thu ba: ");
   	scanf("%d",&c);
   	if (a<b){
	   {
   		if(c<a){
   			printf(" %d la so be nhat",c);
   				 }else{
   				 	printf("%d la so be nhat",a);
					}
		   }
	   }else{
	   	if (c<b){
	   		printf("%d la so be nhat",c);
		   }else{
		   	printf("%d la so be nhat",b);
		   }
	   	
	   }
   	
   }
   
