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

int linerSearch(int arr[], int n, int se){
    for (int i = 0; i < n; i++)
    {
        if(se == arr[i]){
            printf("\nSearch element found in %d index.",i);
        }
    }
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

    linerSearch(arr, n, se);
}