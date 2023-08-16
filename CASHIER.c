# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

void print(int amount,int note);

void main () {
    system("cls");
    int amount;
    printf("Enter A Amount\n");
    scanf("%d",&amount);
    int amt;
    if(amount%100!=0) {
        print((amount-amount%100)/100,100); 
        amt=(amount%100);
    } else if(amount%100==0){
        print(amount/100,100); 
        amt=0;
    }

     if(amt%50!=0 && amt>0) {
        print((amt-amt%50)/50,50); 
        amt=(amt%50);
    } else if(amt%50==0){
        print(amt/50,50); 
        amt=0;
    }

     if(amt%10!=0 && amt>0) {
        print((amt%10)/10,10); 
        amt=(amt-amt%10);
    } else if(amt%10==0){
        print(amt/10,10); 
        amt=0;
    }
    

    getch();
    system("cls");
}

void print(int amount,int note) {
    printf("requirement of %d Rs Note Is %d\n",note,amount);
}