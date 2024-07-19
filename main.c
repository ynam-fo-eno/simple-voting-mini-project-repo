 #include <stdio.h>
#include <stdlib.h>


#define WR 1
#define RO 2
#define GW 3
#define WM 4
void simple_voting_system();
int main()
{
    simple_voting_system();
}
    void simple_voting_system(){

    FILE *f3;
    f3=fopen ("Users' Details (Condensed).txt","a");
    fprintf(f3,"\n");
    char name[40];
    char course[40];
    int age;
    int vote;
    printf("Please enter full name:\n");
    fgets(name,40,stdin);
    fprintf(f3,"Name: %s",name);
    printf("Please enter course you're studying or studied:\n");
    fgets(course,40,stdin);
    fprintf(f3,"Course studying/studied: %s",course);
    printf("Now please enter age:\n");
    scanf("%d",&age);
    fprintf(f3,"Age: %d",age);
    fprintf(f3,"\n");
    if(age>17){
    printf("Congrats,you're eligible to vote.Now,below are the presidential aspirants to choose from.\nEnter your choice with number next to candidate.\n");
    fprintf(f3,"Voting status:Eligible");
    fprintf(f3,"\n");
    printf("1.William Ruto\n2.Raila Odinga\n3.George Wajackoyah\n4.Waihiga Mwaura\n");
    scanf("%d",&vote);
    switch(vote){
    case WR:
    printf("Voter's choice:William Ruto.\nThanks for voting.\n");
    fprintf(f3,"Aspirant chosen:William Ruto.");
    fprintf(f3,"\n");
    break;
    case RO:
    printf("Voter's choice:Raila Odinga.\nThanks for voting.\n");
    fprintf(f3,"Aspirant chosen:Raila Odinga.");
    fprintf(f3,"\n");
    break;
    case GW:
    printf("Voter's choice:George Wajackoyah.\nThanks for voting.\n");
    fprintf(f3,"Aspirant chosen: George Wajackoyah.");
    fprintf(f3,"\n");
    break;
    case WM:
    printf("Voter's choice:Waihiga Mwaura.\nThanks for voting.\n");
    fprintf(f3,"Aspirant chosen:Waihiga Mwaura.");
    fprintf(f3,"\n");
    break;
    default:
    printf("Please choose a number from 1 to 4.\n");
    fprintf(f3,"Digitally spoiled vote!");
    fprintf(f3,"\n");
    break;
    }
    }else{
    printf("Sorry, but you're ineligible to vote currently\n");
    fprintf(f3,"Voting status:Ineligible");
    fprintf(f3,"\n");
    }
    printf("To check voting details,please see file 'Users' Details(Condensed)'.\n ");
    fscanf(f3,"%s",name);
}














