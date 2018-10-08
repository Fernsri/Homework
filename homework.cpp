#include<stdio.h>
int main()
{
	int num1[2][2],num2[2][2],num3[2][2],Case;
	printf("-------Num1------\n");
	
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("Input Num1[%d][%d] : ",i,j);
			scanf("%d",&num1[i][j]);
		}
	}
	printf("-------Num2------\n");
	
	for(int i=0; i<=1; i++){
		for(int j=0; j<=1; j++){
			printf("Input Num2[%d][%d] : ",i,j);
			scanf("%d",&num2[i][j]);
		}
	}
	printf("------select case------\n");
	printf("case 1 PlusArray()\n");
	printf("case 2 MinusArray()\n");
	printf("Select case 1,2 : ");
	scanf("%d",&Case);
	printf("-------Num3------\n");  
	switch(Case){
		case 1 :
			for(int i=1; i>=0; i--){
				for(int j=1; j>=0; j--){
					num3[i][j]=num1[i][j]+num2[i][j];
					printf("Num3[%d][%d] = %d \n",i,j,num3[i][j]);
				}
			}
		case 2 :
			for(int i=1; i>=0; i--){
				for(int j=1; j>=0; j--){
					num3[i][j]=num1[i][j]-num2[i][j];
					printf("Num3[%d][%d] = %d \n",i,j,num3[i][j]);
				}
			}
	}
	return 0;
}
