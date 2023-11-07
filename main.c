#include <stdio.h>
#include <stdlib.h>

static int all_files;
extern void sub();

int main(int argc, char *argv[])
{
  int grade[5];
  int i; 
  
  for (i = 0; i < 5; i++)
      grade[i] = (i + 1) * 10;
      
  for (i = 0; i < 5; i++)
      printf("grade[%i] = %i \n", i , grade[i]);
  
  system("PAUSE");	
  return 0;
}
