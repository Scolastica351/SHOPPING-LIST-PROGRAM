#include<stdio.h>

void main(void)
{
    int code,qty;
    float price, amt, totalAmt, cash, change;
    char addAnother;

    do{
        system("cls");
        printf("SCOLASTICA GENARAL STORE MENU\n");
        printf("[1] Maize Flour\t\t\t -KES200\n");
        printf("[2] Sugar\t\t\t -KES150\n");
        printf("[3] Cooking Oil\t\t\t -KES400\n");
        printf("[4] Lentils\t\t\t -KES300\n");
        printf("[5] Soap\t\t\t -KES150\n");

        printf("\nEnter code\t:");
        scanf("%d", &code);
        printf("\nEnter Quantity\t:");
        scanf("%d", &qty);

        switch(code){
            case 1: price=200;
            break;
            case 2: price=150;
            break;
            case 3: price=400;
            break;
            case 4: price=300;
            break;
            case 5: price=150;
            break;
        }
        amt = price*qty;
        printf("\nAmount\t\t\t: %.2f", amt);

        totalAmt= totalAmt + amt;
        printf("\nTotal Amount\t\t: %.2f", totalAmt);

        printf("\nAdd another order(y/n)?");
        addAnother=  getche();
    }while(addAnother == 'y' || addAnother== 'y');
    do {
        printf("\nCash tendered\t:");
        scanf("%f", &cash);
    }while (cash<totalAmt);

    change= cash - totalAmt;
    printf("\nChange\t\t\t: %.2f",change);
}
