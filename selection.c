
    #include<stdio.h>
void slection_sort(int [], int);
int main()
{
    int i,a[20] ,r, n;
    printf("enter the number of element of the array:");
    scanf("%d", &n);
    printf("enter %d element of the array:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("before selection sort:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    slection_sort(a,n);
    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
void slection_sort(int a[],int n)
{
  int i,j,t,min;
  for(i=0;i<n;i++) 
 { 
     min=i;
      for(j=i+1;j<n;j++)
     {
        if(a[min]>a[j]) 
       {
            min=j;
        }
     }
           t=a[i];
           a[i]=a[min];
           a[min]=t;
  }
}
