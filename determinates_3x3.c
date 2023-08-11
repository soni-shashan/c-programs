# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

float det3x3(int arr[3][3]) {
    float result=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))-arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]))+arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));
    return result;
}

void main () {
    system("cls");
    printf("FIND DETERMINANTS 3X3\n");
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("|%8d%8d%8d\t|\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("|%8d%8d%8d\t|\n",arr[1][0],arr[1][1],arr[1][2]);
    printf("|%8d%8d%8d\t|\n",arr[2][0],arr[2][1],arr[2][2]);
    printf("The Det(A)=%.2f\n\n",det3x3(arr));
    
    getch();
    system("cls");
}