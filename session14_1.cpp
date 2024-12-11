#include<stdio.h>
#include<string.h>
void print(char a[]);

int main(){
char choice[100];

	printf("nhap vao ki tu can dien");
	fgets(choice,100,stdin);
 print(choice);


return 0;

}
void print(char a[]){

	printf("%s\n",a);
	printf(" do dai la %d",strlen(a));
}
