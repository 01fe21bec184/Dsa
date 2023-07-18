#include <stdio.h>
#include<time.h>
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    clock_t start=clock();
    for (int i = 0; i <10; i++) {
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
     clock_t stop=clock();
    time_t tt=stop-start;
    printf("Time measured:-%0.9d seconds\n",tt);

    return 0;
}
