# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void transpose2x2(int a[2][2],int b[2][2]) {
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j]=a[j][i];
        }
    }
}

void main () {
    system("cls");
    int a[2][2],b[2][2];
    printf("ENTER 2X2 MATRIX\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    transpose2x2(a,b);
    printf("\nMatrix A Is Given Below\n");
    printf("|%8d%8d\t|\n",a[0][0],a[0][1]);
    printf("|%8d%8d\t|\n",a[1][0],a[1][1]);
    printf("\nMatrix A Transpose Is Given Below\n");
    printf("|%8d%8d\t|\n",b[0][0],b[0][1]);
    printf("|%8d%8d\t|\n",b[1][0],b[1][1]);
    
    getch();
    system("cls");
}