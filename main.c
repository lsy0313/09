#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

static int all_files;
extern void sub();

int main(int argc, char *argv[])
{
  int i, average;
  int sum;
  int grade[SIZE];
  sum = 0;
  
  for(i=0; i<SIZE; i++){
  printf("학생 성적을 입력하세요 : ");
  scanf("%d", &grade[i]);
  sum += grade[i];
  }
  average = sum / SIZE;
  printf("성적 평균 : %d\n", average);
       
  system("PAUSE");	
  return 0;
}
