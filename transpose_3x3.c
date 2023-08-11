# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void transpose3x3(int a[3][3],int b[3][3]) {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
}

void main () {
    system("cls");
    int a[3][3],b[3][3];
    printf("ENTER 3X3 MATRIX\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    transpose3x3(a,b);
    printf("\nMatrix A Is Given Below\n");
    printf("|%8d%8d%8d\t|\n",a[0][0],a[0][1],a[0][2]);
    printf("|%8d%8d%8d\t|\n",a[1][0],a[1][1],a[1][2]);
    printf("|%8d%8d%8d\t|\n",a[2][0],a[2][1],a[2][2]);
    
    printf("\nMatrix A Transpose Is Given Below\n");
    printf("|%8d%8d%8d\t|\n",b[0][0],b[0][1],b[0][2]);
    printf("|%8d%8d%8d\t|\n",b[1][0],b[1][1],b[1][2]);
    printf("|%8d%8d%8d\t|\n",b[2][0],b[2][1],b[2][2]);

    getch();
    system("cls");
}