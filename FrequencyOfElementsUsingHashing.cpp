#include <stdio.h>
#define SIZE 100
int hashTable[SIZE];
void initialize()
{
    int i;
    for (i = 0; i < SIZE; i++)
        hashTable[i] = 0;
}
int main()
{
    int n, i;
    int arr[100];
    initialize();
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0 && arr[i] < SIZE)
            hashTable[arr[i]]++;
    }
    printf("\nFrequency of each distinct element:\n");
    for (i = 0; i < SIZE; i++)
    {
        if (hashTable[i] > 0)
            printf("%d -> %d\n", i, hashTable[i]);
    }
    return 0;
}
