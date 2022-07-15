// Write a program in C to store elements in an array and print it.

#include <stdio.h>  
  
void  main()  
{  
    int arr[30]; 
    int i;  
       printf("\n\nRead and Print elements of an array:\n");
 
       printf("Input 30 elements in the array :\n");  
       for(i=0; i<10; i++)  
      {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
      }  
  
       printf("\nElements in array are: ");  
       for(i=0; i<30; i++)  
      {  
        printf("%d  ", arr[i]);  
      } 
       printf("\n");	
}
