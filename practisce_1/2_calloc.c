#include<stdio.h>
#include<stdlib.h>

void main(){
    int* ptr;
    int n;

    printf("Enter the size of the array you want to create :-");
    scanf("%d",&n);

    ptr = (int*)calloc(n , sizeof(int));

    printf("Befor the intalization \n");
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);     //print the zero(0)
    }
    
    for(int i=0; i<n; i++){
        printf("Enter the value in the array :- ");
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("The %d index value of the array is %d\n",i,ptr[i]);
    }

    free(ptr);


    printf("After the intalization \n");
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
}