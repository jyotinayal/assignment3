#include <stdio.h>

int main()
{
  //Initialize variable and rename
   int first_num=0;
   int second_num=0;

    printf("Enter two operands: ");
    scanf("%d %d", &first_num, &second_num);
    printf("%d",  first_num + second_num);
    return 0;
}