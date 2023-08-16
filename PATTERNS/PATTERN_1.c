# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void main () {
    system("cls");
    
    int i,j,n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<n;j++){
            printf(" %c",4); //1=smail,3=hart,4=diamond
        }
        printf("\n ");
    }
    getch();
    system("cls");
}