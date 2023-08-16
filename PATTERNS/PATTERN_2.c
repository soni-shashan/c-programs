# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void main () {
    system("cls");
    
    int i,j,n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("\t");
        }
        for(j=i;j<n;j++){
            printf("%s","SHASHAN ");
        }
        for(j=n;j>i;j--){
            printf("%s","SHASHAN ");
        }
            printf("%s","SHASHAN ");
        printf("\n");
    }
        printf("\n\n\n\n");
    getch();
    system("cls");
}