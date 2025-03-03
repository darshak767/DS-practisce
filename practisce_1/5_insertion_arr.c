#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int calculateArray(int arr[], int size, int index, int ele, int capacity)
{
    if (size >= capacity)
    {
        // printf("Error 404, page not found.");
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
    }
    arr[index] = ele;
}

void main()
{
    int ele, index, size = 0;
    int arr[15], n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the array %d elements :- ", i);
        scanf("%d", &arr[i]);
        size++;
    }

    printf("Enter the index number that you have to insert the element :- ");
    scanf("%d", &index);

    printf("Enter the element that you have to insert :- ");
    scanf("%d", &ele);

    printf("\t\t\tPrint the original array :- \n");
    printArray(arr, size);

    int check = calculateArray(arr, size, index, ele, 15);

    size += 1;
    printf("\n\t\t\tPrint array after the include element :- \n");

    if (check == -1)
    {
        printf("Error 404. page not found \n");
    }
    else
    {
        printf("Congartulations, Code runs sucseccfull. \n");
    }

    printArray(arr, size);
}