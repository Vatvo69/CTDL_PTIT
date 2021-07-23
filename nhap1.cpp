#include <stdio.h>
#include <string.h>
#include <math.h>
#include <io.h>

struct sinhVien{
	char name[50];
	int id;
	float monA,monB,monC;
};
struct sinhVien sv;
char temp[50];
void addNew(){
	FILE *file;
	file = fopen("kien.txt","w");
	sv.id = filelength(fileno(file))/sizeof(sv);//gan id = kich thuoc file
	fseek(file,0,SEEK_END); // dua con tro ve cuoi file de ghi
	int amountOfPeople;
	scanf("%d",&amountOfPeople);
	for(int i = 0;i<amountOfPeople;i++){
		++sv.id;
		gets(temp);
		gets(sv.name);
		scanf("%f%f%f",&sv.monA,&sv.monB,&sv.monC);
		fwrite(&sv,sizeof(sv),1,file);
	}
	printf("%d", amountOfPeople);
	fclose(file);
}
void updateMarkByStudentCode(){
	FILE *file;
	file = fopen("kien.txt","r");
	sinhVien data[100];
	
	int n = filelength(fileno(file))/sizeof(sv);
	int x = 0;
	for(int i = 0;i<n;i++){
		fread(&sv,sizeof(sv),1,file);
		data[x++] = sv;
	}
	fclose(file);
	int code;
	scanf("%d",&code);
	gets(temp);//-------------------------------------------------------
	int i = code-1;
	gets(data[i].name);
	scanf("%f%f%f",&data[i].monA,&data[i].monB,&data[i].monC);
	
	file = fopen("kien.txt","wb");
	for(int i = 0;i<x;i++){
		fwrite(&data[i],sizeof(sv),1,file);
	}
	printf("%d",code);
	fclose(file);
}
void Sum(sinhVien *data,int length){
	int sum = 0;
	int SUM[100];
	for(int i = 0;i<length;i++){
		sum = data[i].monA+data[i].monB+data[i].monC;
		SUM[i] = sum;
	}
	int min = SUM[0];
	for(int i = 0;i<length;i++){
		if(min > SUM[i]) min = SUM[i];
	}
	printf("%f",min);
}
void showInfo(){
	FILE *file;
	file = fopen("kien.bin","rb");
	int length = filelength(fileno(file))/sizeof(sv);
	sinhVien data[100];
	int x = 0;
	for(int i = 0;i<length;i++){
		fread(&sv,sizeof(sv),1,file);
		data[i] = sv;
		if((sv.monA <= sv.monB && sv.monB <= sv.monC))
		printf("%d %s %.1f %.1f %.1f\n", sv.id, sv.name, sv.monA, sv.monB, sv.monC);
	}
//	Sum(data,length);
	fclose(file);
}
int main() {
	int choose;
	scanf("%d",&choose);
	switch(choose){
		case 1:
			addNew();
			break;
		case 2:
			updateMarkByStudentCode();
			break;
		case 3:
			showInfo();
			break;
	}
	return 0;
}
