#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char userName[30];
int userPassword = 12345;
int password;
int menu;
int seats = 50;
int seatnumber, bookingpay;
int bustype,cost,receipt,balance;
int bookingfee=cost/2;
//Enter your personal information(username and password)
printf("Enter user name: ");
scanf("%s", &userName);
printf("Enter password: ");
scanf("%d", &password);
//the program checks if the user name and password are correct
if(strcmp(userName,"diddy")==0 && userPassword==password){
    printf("Do you want to make a booking or payment?");
}else
{
    printf("please try again");
}
while (menu!=5)
{
//the menu shows the choices one can choose 
printf("1. Bus booking status\n");
printf("2. Bus booking\n");
printf("3. Booking payment\n");
printf("4. Bus booking reports\n");
printf("5. Sign out\n");
scanf("%d", &menu);
switch (menu)
{
    //asks the user to input the seat number and bus type of their choice
case 2:
    printf("Enter the number of seats: \n");
    scanf("%d", &seatnumber);
    printf("Luxury bus is type 1 and ordinary bus is type 2. Enter the bus type: \n");
    scanf("%d", &bustype);
    //It checks if the number of seats the user has put in is less or equal to the available seats
    if (seatnumber <= seats)
    {
        //if it is, it continues to calculate the total cost, number of seats, bus type and receipt number
        if (bustype == 1)
        {
            cost =seatnumber*500000;
            printf("The total cost is %d\n", cost);
            printf("the number of seats is %d\n", seatnumber);
            printf("the bustype is %d\n", bustype);
            printf("the receipt number is %dbsb%d\n", cost,seatnumber);
        }else if (bustype == 2)
        {
            cost =seatnumber*25000;
            printf("The total cost is%d\n", cost);
            printf("the number of seats is %d\n", seatnumber);
            printf("the bustype is %d\n", bustype); 
            printf("the receipt number is %dbsb%d\n", cost,seatnumber);
        }
    }else
    {
        printf("please enter anumber of seats less than or equal to the available seats");
    }
    
    
    break;
//asks the user to input the receipt number and amount being paid. 
case 3:
    printf("Enter a receipt number: ");
    scanf("%dbsb%d", &cost,&seatnumber);
    printf("Enter the amount being paid: ");
    scanf("%d", &bookingpay);
    //if the booking pay is greater than the booking fee, it goes ahead to provide the receipt, booking number, amount being paid, and the balance 
    if (bookingpay > bookingfee)
    {
        balance=bookingpay-bookingfee;
        printf("The receipt number is %dbsb%d\n", cost, seatnumber);
        printf("The amount paid is %d\n", bookingpay);
        printf("The balance is %d\n", balance);
        printf("The booking number is %dhm\n", seatnumber);
    }else{
        printf(" enter an amount less than or equal to the booking cost.");

    }
    break;
//input 5 to sign out 
case 5:
    printf("Sign out");
    break;

default:
printf(" please choose 2 or 3");
    break;
}
}
    return 0;
}