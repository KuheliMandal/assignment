#include<stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int length;
    printf("writ a string \n");
    gets(a);
      length = strlen(a);
        printf("Length of the string %d", length);

  return 0;
}