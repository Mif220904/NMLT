//Code Of Mif

#include<stdio.h>
#include<math.h>
int main (){
		int a;
		float c1, c2, c3, p, s; // ba canh cua tam giac
	printf("Menu : \n\t1. Hinh Tam Giac \n\t2. Hinh chu nhat \n\t3. hinh tron \n\t4. Ket thuc\n");
	printf("\nBan hay bam 1 so(1, 2, 3) de chon hinh can tinh hoac bam so 4 de ket thuc: ");
	 	scanf("%d", &a); 
	switch(a){
		
			case 1 : 
			 		printf("\nNhap 3 canh cua tam giac: ");
					scanf("%f%f%f", &c1, &c2, &c3);
					if(c1+c2>c3&&c2+c3>c1&&c1+c3>c2){
						p=(c1+c2+c3)/2;
						s=sqrt(p*(p-c1)*(p-c2)*(p-c3));
						printf("dien tich tam giac la: %f\n", s);
					}else{
						printf("3 so khong phai la 3 canh cua tam giac\n");
					}
			break;
			case 2 : printf("\nNhap chieu dai va chieu rong: ");
					scanf("%f%f", &c1, &c2); 
					s=c1*c2;
					printf("\nDien tich hinh chu nhat la: %f", s);
			break;
			case 3 : printf("\nNhap ban kinh duong tron: ");
					scanf("%f", &c1);
					s=c1*c1*3.14;
					printf("\nDien tich hinh tron la: %f", s);
			break;
			case 4 : printf("\nket thuc chuong trinh\n");
			break;
			default: printf("Khong co trong Menu\n");
	}
	return 0;
}