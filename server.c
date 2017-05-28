#include <stdio.h>

int main()
{

  int put(char* key, char* value, char* res);
  int get(char* key, char* res);
  int del(char* key, char* res);

  printf("Key-Wert und Value eingeben und bestätigen\n");/*Testaufruf-Wertübermittlung*/
  scanf(" %c",&key);
  scanf(" %c",&value);
  printf("Key-Wert ist: %c\n", key);
  printf("Value-Wert ist: %c", value);
}
