//3. Nh?p v�o 3 s? a,b,c. Ki?m tra xem n� c� ph?i 3 c?nh c?a 1 t?m gi�c hay kh�ng. N?u d�ng l� 3 c?nh tam gi�c th� t�nh di?n t�ch v� chu vi.
#include <stdio.h>
#include <math.h>
   int main(){
   	  float a,b,c;
   	  printf("so thu nhat: \n");
   	  scanf("%f",&a);
   	  printf("so thu hai: \n");
   	  scanf("%f",&b);
   	  printf("so thu ba: \n");
   	  scanf("%f",&c);
   	  if((a>0)&&(b>0)&&(c>0)){
   	  	if((a+b)>c&&(b+c)>a&&(c+a)>b){
   	  		float p;
   	  		p=(a+b+c)/2;
   	  		float r;
   	  		r=(p-a)*(p-b)*(p-c);
   	  		float s;
   	  		s=p*r;
   	  		float v;
   	  		v=2*p;
   	  		printf("Day la 3 canh cua tam giac. \n");
   	  		printf("Dien tich tam giac bang: %f",s);
   	  		printf("Chu vi tam giac bang: %f",v);
			 }else{
			 	printf("day ko phai tam giac");
			 }
   }
}
