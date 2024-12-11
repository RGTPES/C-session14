
#include<string.h>
#include<stdio.h>
int CountWord(char a[]);
int main(){
char chuoi[100];
printf("Moi ban nhap day ki tu : ");
fgets(chuoi,100,stdin);	

int n = CountWord(chuoi);
printf("%d",n);


return 0;

}
int CountWord(char a[]){
	int count =0;
	int flag =0;
	int size = strlen(a);
	for(int i =0;i <size;i++){
		if(a[i]!=' '){
			if(flag==0){
				flag = 1;
				count++;
			}
		}else{
			flag =0;
		}
	}
	return count;
}



