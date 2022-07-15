#include<stdio.h>
#include<conio.h>
int insert(int *);
int view(int *);
int del(int *);
void main()
{
    int a[100];
    int ch;
    while(1)
    {
    clrscr();
    {
    printf("\nEnter 1st to insert element in array:\t");
    printf("\nEnter 2nd to view element in array:\t");
    printf("\nEnter 3rd to Delete element in array:\t");
    printf("\nEnter 4th to Exit:\t");
    printf("\n Enter the choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert(a);getch();
                    break;
        case 2:view(a);getch();
                    break;
        case 3:del(a);getch();
                    break;
        case 4:exit(0);
    }
    }
    }

}
int insert(int *a)
{
    int i,n;
    printf("Enter the no. of elements in array:\t");
    scanf("%d",&n);
    printf("\nEnter %d elements in array:\t",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[i]='\0';
    return *a;
}
int view(int *a)
{
    int j;
    for(j=0;a[j]!=NULL;j++)
    {
        printf("\nElement of array=%d",a[j]);
    }
    return *a;
}
int del(int *a)
{
    int c,k,posi;
    for(k=0;a[k]!=NULL;k++)
    {
    }
    printf("Enter the position to delete element:\t");
    scanf("%d",&posi);
    if(posi<=k)
    {
        for(c=posi-1;c<k-1;c++)
        {
            a[c]=a[c+1];
        }
        printf("\nArray after Deletion");
        for(c=0;c<k-1;c++)
        {
            printf("\n%d",a[c]);
        }
    }
    return *a;
}

