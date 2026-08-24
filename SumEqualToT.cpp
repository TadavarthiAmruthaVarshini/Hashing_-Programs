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
    int n, T, i;
    int arr[100];
    int complement;
    int found = 0;
    initialize();
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target value T: ");
    scanf("%d", &T);
    for (i = 0; i < n; i++)
    {
        complement = T - arr[i];
        if (complement >= 0 && complement < SIZE && hashTable[complement] > 0)
        {
            printf("Two elements are found: %d and %d\n",
                   complement, arr[i]);
            found = 1;
            break;
        }
        if (arr[i] >= 0 && arr[i] < SIZE)
            hashTable[arr[i]]++;
    }
    if (!found)
        printf("No two elements have sum equal to %d\n", T);
    return 0;
}
