#include<stdio.h>
int main(){
    int array[5], temp;
    printf("Enter array: ");
    for (int i = 0; i < 5; i++){//input
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++){//descending order
        for (int j = i + 1; j < 5; j++){
            if (array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }    

    printf("The array in  descending: ");
    for (int i = 0; i < 5; i++){//output
        printf("%d ", array[i]);
    }
}