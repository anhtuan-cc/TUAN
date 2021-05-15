//Bai 2:  Nh?p vào 3 s? a,b,c. Gi?i phuong trình b?c 2: ax^2+bx+c = 0 ( tìm x)
#include <stdio.h>
#include <math.h>
    int main(){
	  float a,b,c;
	  printf("giai pt bac 2: ax^2 + bx + c =0\n");
	  printf("nhap so a: \n");
	  scanf("%f",&a);
	  printf("nhap so b: \n");
	  scanf("%f",&b);
	  printf("nhap so c: \n ");
	  scanf("%f",&c);
	  printf("ta co pt %fx^2+ %fx + %f =0\n",a,b,c);
	  if(a==0){
	  	if(b==0){
	  		if(c==0){
	  			printf("pt vo so nghiem");
			  }else{
			  	printf("pt vo nghiem");
			  }
	  		
			  }else{
			  	float r;
			  	r=-c/b;
			  	printf("phuong trinh nghiem la: %f",r);
			  }
		  }else{
		  	float d;
		  	d=(b*b)-(4*a*c);
		  	if(d>0){
		  		float x1,x2;
		  		x1=(-b+sqrt(d))/(2*a);
		  		x2=(-b-sqrt(d))/(2*a);
		  		printf("pt co 2 nghiem x1=%f, x2= %f",x1,x2);
			  }else{
			  	if(d==0){
			  		float x;
			  		x=-b/(2*a);
			  		printf("pt co nghiem x=%f",x);
				  }else{
				  	printf("pt vo nghiem");
				  }
			  		
				  
			  }
		  }
	  	
	  }
