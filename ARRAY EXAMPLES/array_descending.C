# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void sort(int *arr,int num){
    for(int i=0;i<num;++i){
        for(int j=i+1;j<num;++j){
            if(arr[i]<arr[j]){
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
    int nums[5]={90,33,94,11,48};
    int size=5;
    print_array(nums,size);
    sort(nums,size);
    print_array(nums,size);
    getch();
    system("cls");
    return 0;
}
