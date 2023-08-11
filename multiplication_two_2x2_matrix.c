# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void multiply2x2(int a[2][2],int b[2][2],int result[2][2]) {
    result[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    result[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    result[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    result[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    
}


void main () {
    system("cls");
    int a[2][2],b[2][2],result[2][2];

    printf("ENTER 2X2 MATRIX NO.1\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix A Is Given Below\n");
    printf("|%8d%8d\t|\n",a[0][0],a[0][1]);
    printf("|%8d%8d\t|\n",a[1][0],a[1][1]);

    printf("ENTER 2X2 MATRIX NO.2\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("Enter B%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    multiply2x2(a,b,result);
    printf("\nMatrix B Is Given Below\n");
    printf("|%8d%8d\t|\n",b[0][0],b[0][1]);
    printf("|%8d%8d\t|\n",b[1][0],b[1][1]);
    
    printf("\nMatrix Result Is Given Below\n");
    printf("|%8d%8d\t|\t\n",result[0][0],result[0][1]);
    printf("|%8d%8d\t|\t\n",result[1][0],result[1][1]);

    getch();
    system("cls");
}