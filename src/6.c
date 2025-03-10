#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int age = 0;
  char name[256];
  
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  
  printf("Hello, %s! You are %d years old.\n", name, age);
  
  return 0;
}
