#include <stdio.h>
int main(){
	int id;
	char name[50];
	float price;
	int qty;
	float total;
	float cgst;
	float sgst;
	float ftotal;
	printf("Enter product id:");
	scanf("%d",&id);
	
	printf("Entre product name:");
	scanf("%s",&name);
	
	printf("Entre product price:");
	scanf("%f",&price);
	
	printf("Entre product Qty:");
	scanf("%d",&qty);
	

	//calculate total,cgst,sgst
	total=price*qty;
	cgst=(float)total*6/100;
	sgst=(float)total*6/100;
	ftotal=(float)total+cgst+sgst;
	//display invoice....
	printf("--------------------Invoice-----------------------");
	printf("\nproduct ID\t\t:\t\t%d",id);
	printf("\nproduct name\t\t:\t\t%s",name);
	printf("\nproduct price\t\t:\t\t%.2f",price);
	printf("\nproduct Qty\t\t:\t\t%d",qty);
	printf("\nproduct total\t\t:\t\t%.2f",total);
	printf("\nproduct CGST\t\t:\t\t%.2f",cgst);
	printf("\nproduct SGST\t\t:\t\t%.2f",sgst);
	printf("\nfinal total\t\t:\t\t%.2f",ftotal);
	printf("\n----------------------------------------------------");
	return 0;
}
