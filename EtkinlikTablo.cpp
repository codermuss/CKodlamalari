#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define BOYUT 11
int main(){
	system("color D");
	setlocale(LC_ALL,"Turkish");
	printf("\n\t |¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|\n");	
	printf("\t |                                                  |\n");
	printf("\t |               ©MUSTAFA YILMAZ                    |\n");	
	printf("\t |      ETKINLIKLERE PROGRAM ÇIKARAN KOD            |\n");
	printf("\t |                   -2018-                         |\n");    
	printf("\t |__________________________________________________|\n\n\n");  
	int baslangic[11]={1,3,2,5,3,5,6,8,8,2,12};
	int bitis[11]={4,5,6,7,8,9,10,11,12,13,14};
	int sonuc[2][11];
	int etkNo[BOYUT];				  
	int i,j,flag=0;
	while(flag!=1){	
	printf("*******************************ETKINLIK TAKVIMI*********************************\n\n\n");
	printf("%12s","Etkinlik Numarasý:");
	for(int s=0;s<11;s++){
		etkNo[s]=s;	
	printf("%d    ",etkNo[s]);}
 printf("\n\n\n");		
	for(i=0;i<11;i++){
		sonuc [0][i]=baslangic[i];
		sonuc[1][i]=bitis[i];
	}
	printf("%12s","Baslangic Tarihi :");
	for(j=0;j<11;j++){
		printf("%d    ",sonuc[0][j]);
	}
	printf("\n\n\n");
	printf("%12s","Bitis Tarihi     :");
	for(int k=0;k<11;k++){
		if(k<6)		
		printf("%d    ",sonuc[1][k]);
		if(k>=6){
			printf("%d   ",sonuc[1][k]);
		}
		}
	printf("\n\n\n\n\n*******************************byMustafaYILMAZ**********************************\n\n");	
	
	printf("Lutfen yukaridaki takvimden baslamak istediginiz etkinlik numarasini giriniz:");		
	scanf("%d",&i);
	printf("\n\n\n\n\n\n\n*****************************  UYUMLU ETKINLIKLER  *****************************\n\n\n");
	printf("%20s %25s%30s\n\n","Etkinlik NO","Baslangic Tarihi","Bitis Tarihi");
	printf("%20d%26d%30d\n\n",etkNo[i],sonuc[0][i],sonuc[1][i]);	
	for(i;i<BOYUT;i++){	
		for(j=0;j<BOYUT;j++){
		if(sonuc[0][j]>sonuc[1][i]){
			printf("%20d%26d%30d\n\n",etkNo[j],sonuc[0][j],sonuc[1][j]);
			//sonuc[1][i+=2];
			i+=3;
			if(sonuc[0][j]==sonuc[0][3]){
				i--;
			}
			
		}
		}
	}
	printf("\n\nYukaridaki etkinlik tarihleri katilabileceginiz maximum etkinliklerin tarihleridir...");
	printf("\n\n*******************************************************************************\n\n\n");
	printf("Tekrardan etkinlik secmek icin 0'a programi sonlandirmak icin 1 e basiniz : ");
	scanf("%d",&flag);
	printf("\n\n\n");
	
	}
	printf("\n\n\nProgram sonlandirildi cikmak icin herhangi bir tusa basiniz...");
	
	getch();
	return 0;
}
