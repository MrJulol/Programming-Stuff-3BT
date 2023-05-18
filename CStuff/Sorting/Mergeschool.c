#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
#define MYRANDMAX 100

void merge2(int arr[], int left, int middle, int right);
void mergesort2(int arr[], int left, int right);
void printarr(int arr[]);
int *fillarrrand();

int main()
{
    int *arr = fillarrrand();

    printarr(arr);

    mergesort2(arr, 0, SIZE - 1);

    printarr(arr);

    free(arr);
}

void mergesort2(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergesort2(arr, left, middle);
        mergesort2(arr, middle + 1, right);

        merge2(arr, left, middle, right);
    }
}
void merge2(int arr[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int leftarr[n1];
    int rightarr[n1];

    for (int i = 0; i < n1; i++)
    {
        leftarr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        rightarr[i] = arr[middle + i + 1];
    }
    int leftindex = 0;
    int rightindex = 0;
    int mergedindex = left;

    while (leftindex < n1 && rightindex < n2)
    {
        if (leftarr[leftindex] <= rightarr[rightindex])
        {
            arr[mergedindex] = leftarr[leftindex];
            leftindex++;
        }
        else
        {
            arr[mergedindex] = rightarr[rightindex];
            rightindex++;
        }
        mergedindex++;
    }
    while (leftindex < n1)
    {
        arr[mergedindex] = leftarr[leftindex];
        leftindex++;
        mergedindex++;
    }
    while (rightindex < n2)
    {
        arr[mergedindex] = rightarr[rightindex];
        rightindex++;
        mergedindex++;
    }
}
void printarr(int arr[])
{
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}
int *fillarrrand()
{
    int *arr = malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = (rand() % MYRANDMAX) + 1;
    }
    return arr;
}