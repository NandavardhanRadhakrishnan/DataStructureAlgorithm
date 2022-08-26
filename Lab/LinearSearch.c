#include <stdio.h>

int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Linear Search
    int key;
    scanf("%d", &key);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}