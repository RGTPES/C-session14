#include<string.h>
#include<stdio.h>
void countChar(char a[], char b);
int main(){
	char chuoi[10]="hello";
	char choice;
printf("moi ban nhap ki tu de kiem tra : ");
choice = getchar();
countChar(chuoi,choice);


return 0;

}
void countChar(char a[], char b){
	int count =0;
	int n = strlen(a);
	for(int i =0;i<n;i++){
		if(b==a[i]){
			count++;
		}
	}
	
	if (count !=0) printf("ki tu %c xuat hien %d lan",b,count);
	else printf("%c khong co trong mang",b);
}

