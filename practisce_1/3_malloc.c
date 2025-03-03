#include<stdio.h>
#include<stdlib.h>

void main(){
    int* ptr;

    ptr = (int*)malloc(3 * sizeof(int));

    printf("BEfor the intalization \n");
    for(int i=0; i<3; i++){
        printf("%d\n", ptr[i]);      //print garbage value 
    }
    
    for(int i=0; i<3; i++){
        printf("Enter the value in the array :- ");
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<3; i++){
        printf("The %d index value of the array is %d\n",i,ptr[i]);
    }

    printf("After the intalization \n");
    for(int i=0; i<3; i++){
        printf("%d\n", ptr[i]);
    }

}