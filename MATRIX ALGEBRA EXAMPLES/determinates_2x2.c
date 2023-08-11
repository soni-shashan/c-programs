# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
float det2x2(int arr[2][2]) {
    float result=(arr[0][0]*arr[1][1])-(arr[1][0]*arr[0][1]);
    return result;
}

void main () {
    system("cls");
    int arr[2][2];
    printf("FIND DETERMINANTS 2X2\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("|%8d%8d\t|\n",arr[0][0],arr[0][1]);
    printf("|%8d%8d\t|\n",arr[1][0],arr[1][1]);
    printf("The Det(A)=%.2f\n\n",det2x2(arr));
    getch();
    system("cls");
}