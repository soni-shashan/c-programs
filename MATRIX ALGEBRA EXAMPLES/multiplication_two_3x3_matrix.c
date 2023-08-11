# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void multiply3x3(int a[3][3],int b[3][3],int result[3][3]) {
    result[0][0]=(a[0][0]*b[0][0])+(a[0][1]*b[1][0])+(a[0][2]*b[2][0]);
    result[0][1]=(a[0][0]*b[0][1])+(a[0][1]*b[1][1])+(a[0][2]*b[2][1]);
    result[0][2]=(a[0][0]*b[0][2])+(a[0][1]*b[1][2])+(a[0][2]*b[2][2]);
    result[1][0]=(a[1][0]*b[0][0])+(a[1][1]*b[1][0])+(a[1][2]*b[2][0]);
    result[1][1]=(a[1][0]*b[0][1])+(a[1][1]*b[1][1])+(a[1][2]*b[2][1]);
    result[1][2]=(a[1][0]*b[0][2])+(a[1][1]*b[1][2])+(a[1][2]*b[2][2]);
    result[2][0]=(a[2][0]*b[0][0])+(a[2][1]*b[1][0])+(a[2][2]*b[2][0]);
    result[2][1]=(a[2][0]*b[0][1])+(a[2][1]*b[1][1])+(a[2][2]*b[2][1]);
    result[2][2]=(a[2][0]*b[0][2])+(a[2][1]*b[1][2])+(a[2][2]*b[2][2]);
}


void main () {
    system("cls");
    int a[3][3],b[3][3],result[3][3];
    printf("ENTER 3X3 MATRIX NO.1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix A Is Given Below\n");
    printf("|%8d%8d%8d\t|\n",a[0][0],a[0][1],a[0][2]);
    printf("|%8d%8d%8d\t|\n",a[1][0],a[1][1],a[1][2]);
    printf("|%8d%8d%8d\t|\n",a[2][0],a[2][1],a[2][2]);

    printf("ENTER 3X3 MATRIX NO.2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            printf("Enter B%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    multiply3x3(a,b,result);
    printf("\nMatrix B Is Given Below\n");
    printf("|%8d%8d%8d\t|\n",b[0][0],b[0][1],b[0][2]);
    printf("|%8d%8d%8d\t|\n",b[1][0],b[1][1],b[1][2]);
    printf("|%8d%8d%8d\t|\n",b[2][0],b[2][1],b[2][2]);
    printf("\nMatrix Result Is Given Below\n");
    printf("|%8d%8d%8d\t|\n",result[0][0],result[0][1],result[0][2]);
    printf("|%8d%8d%8d\t|\n",result[1][0],result[1][1],result[1][2]);
    printf("|%8d%8d%8d\t|\n",result[2][0],result[2][1],result[2][2]);

    getch();
    system("cls");
}