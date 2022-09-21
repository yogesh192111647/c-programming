#include<stdio.h>

int main() {
  char str[20], *pt;
  int i = 0;
  printf("Pointer Example Program : Find or Calculate Length of String \n");
  printf("Input a string [below 20 chars] : ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("The length of the given string saveetha is : %d", i);

  return 0;
}
