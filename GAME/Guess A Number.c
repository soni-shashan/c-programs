# include<stdio.h>
# include<time.h>
# include<stdlib.h>
# include<conio.h>

void main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number =rand()%100+1;
    // printf("number is %d\n",number);
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Please guess lower number\n");
        } 
        else if(guess<number) {
            printf("Please guess higher number\n");
        } else {
            printf("Yor guess Attempt is %d\n",nguess);
        }
        nguess++;
    }while(number!=guess);
    getch();
}