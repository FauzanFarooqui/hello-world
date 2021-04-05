#include<stdio.h>
int main()
{
  char username[10];
  printf("Hello, world!\nEnter your git username: ");
  scanf("%s", &username);
  printf("\nHello, %s!", username);
    
  return 0;
}
