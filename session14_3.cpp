#include<string.h>
#include<stdio.h>
void reverserNum(char a[]);
int main(){
	char chuoi[10]={"HELLO"};
	reverserNum(chuoi);




return 0;

}
void reverserNum(char a[]){
	int n =strlen(a);
	for(int i =0;i<= n/2;i++){
		int temp = a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("%s",a);
}

