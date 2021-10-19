#include<stdio.h>
 void selection_sort(int *A,int length){
     int Min;
     int j,i;
     int temp;
     for(i=0;i<length-1;i++){
          Min=i;
         for( j=i+1;j<length;j++){
             if(A[Min]>A[j]){
               Min=j;
             }
         }
         temp=A[i];
         A[i]=A[Min];
         A[Min]=temp;
         
     }
 }

int main(){
    int size,i;
	printf("enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	
	printf("enter the elements :\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}	  
	
    selection_sort(arr,size); 
	printf("array after sorting\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    } 
    
    return 0;
}
