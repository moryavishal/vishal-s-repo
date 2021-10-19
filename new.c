#include <stdio.h>

int main()
{
    char name,country,skill;
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    scanf("%c",&name);
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%c",&country);
    printf("Enter your Age : ");//Get user Age
    printf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",&skill);
    scanf("Thank you %c Happy Hacking",name);//Thank the user

    return 0;
}
