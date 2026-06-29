#include<stdio.h>
int main()
{
    int pin;
    printf("Enter PIN:\n");
    scanf("%d", &pin);
    int correct_pin = 1234;
    while (1){
        if(pin == correct_pin);
        printf("Login Successful\n");
        break;
    }
    
    printf("Incorrect PIN\n");
    printf("Enter PIN\n");
    return 0;

}