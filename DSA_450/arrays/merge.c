#include <stdio.h>


int main(){
    int a = 6;
    int b = 4;
    int third = a+b;
    int arr[a];
    int arr2[b];
    int arr3[third];

    printf("input for arr\n");

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    printf("input 2nd array\n");
    for(int i = 0;i<b;i++){
        scanf("%d",&arr2[i]);
    }

     for(int i = 0;i<a;i++){
        arr3[i] = arr[i];
    }
    printf("\n");
    int k=a;

   for(int i = 0;i<b;i++){
        arr3[k] = arr2[i];
        k++;
    }

    for(int i = 0;i<third;i++){
        for(int j = 0;j<third;j++){
            if(arr3[j]>arr3[j+1]){
                int temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp; 
            }
        }
    }

    for(int c = 0; c<third;c++){
        printf("%d ",arr3[c]);
    }

return 0;
}