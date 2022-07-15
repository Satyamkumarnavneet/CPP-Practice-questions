//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. 
//Now, tell user whether that number is present in array or not.

#include <stdio.h>
int main()
{
  int a[10],num,i;
  for(i=0;i<10;i++)
  {
    printf("Enter a number: ");
    scanf("%d",&a[i]);
  }
  printf("Enter the number you want to find: ");
  scanf("%d",&num);
  int found = 0;

  for(i=0;i<10;i++)
  {
      if(a[i] == num)
      {
        found = 1;
        break;
      }
  }

  if(found)
    printf("Number Found\n");
  else
    printf("Number Not found\n");

  return 0;
}
