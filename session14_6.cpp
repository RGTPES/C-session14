#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world";
    int Count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            Count++;
        }
    }
    printf("Chuoi co %d ky tu là chu cai\n",Count);

    return 0;
}
