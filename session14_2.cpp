#include<stdio.h>
#include<string.h>
void print(char a[], int b);
int main(){
char num[10]={"Hello Em"};
int size= strlen(num);
print(num,size);

return 0;

}
void print(char a[], int b){
	for(int i =0;i<b;i++){
		printf("%c ",a[i]);
	}
}
