#include<stdio.h>
int selectionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
	int min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}	
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}


int main(){
	int a[20],n;
	printf("enter size you want for array :");
	scanf("%d",&n);
	
	printf(" enter elemets of array :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	selectionsort(a,n);
    printf("sorted array :");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
