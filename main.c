#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

static int all_files;
extern void sub();

int main(int argc, char *argv[])
{
  int i; 
  int grade[SIZE];
  
  printf(“5명의 점수를 입력하세요. \n”);
  for(i=0; i<SIZE; i++)
  scanf(“%d”, &grade[i]);
  for( i=0; i<SIZE; i++)
  printf(“grade[%d] = %d\n”, i, grade[i]);
  
  system("PAUSE");	
  return 0;
}
