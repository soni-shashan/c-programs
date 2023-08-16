# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void sort(int *arr,int num){
    for(int i=0;i<num;++i){
        for(int j=i+1;j<num;++j){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void print_array(int *arr,int num){
    for(int i=0;i<num;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
}

int main () {
    system("cls");
    int nums[5]={5,3,14,57,37};
    int size=5;
    printf("Acctual Array Is : ");
    print_array(nums,size);
    sort(nums,size);
    printf("Sorted Ascending Array Is : ");
    print_array(nums,size);
    getch();
    system("cls");
    return 0;
}
