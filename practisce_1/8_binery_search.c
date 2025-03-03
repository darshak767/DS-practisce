#include <stdio.h>

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the array %d element :-", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int binerySearch(int arr[], int n, int se){
    int low = 0, mid, high = n-1;
    while(low <= high){
        mid = (low + high) / 2;
        
        if(arr[mid] == se){
            return mid;
        }else if(arr[mid] < se){ 
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}
void main()
{
    int n, arr[15], se;
    printf("Enter the size of array :- ");
    scanf("%d", &n);

    // input the array
    printf("\t\t\tEnter the array element :- \n");
    inputArray(arr, n);

    printf("Enter the search element you have to find :- ");
    scanf("%d", &se);

    // print original array
    printf("\t\t\tprint the original array :- \n");
    printArray(arr, n);

    int check = binerySearch(arr, n, se);

    if(check == -1){
        printf("\nError 404, Element not found.");
    }else{
        printf("\nElement found in %d index.",check);
    }
}