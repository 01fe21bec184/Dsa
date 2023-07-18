#include<stdio.h>
#include<time.h>
int main() {
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int i, sum = 0;
    clock_t start=clock();
    for (i=0;i<11; i+=4) {
        sum += array[i] + array[i + 1] + array[i + 2] + array[i + 3];
    }
    for (; i<10;i++) {
        sum += array[i];
    }
    printf("Sum: %d\n", sum);
    clock_t stop=clock();
    time_t tt=stop-start;
    printf("Time measured:-%0.9d seconds\n",tt);

    return 0;
}
