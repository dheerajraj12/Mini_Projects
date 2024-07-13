#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char option;
    int secmark1 = 0 ,secmark2 = 0,secmark3 = 0;
    printf("Online quiz                                                                                                                                                 Total marks-9\n");
    printf("Part one - Questions with one answer \n");
    printf("Part two - Questions with multiple answers  \n");
    printf("Part three - Fill in the blanks for the mentioned questions \n ");

    printf("\nQuestions with one answer ");
    printf("\nGiven below are  the rules for part one \n");
    printf("Each correct answer to given question award 3 marks \n");
    printf("Each wrong answer to given question deducts one mark\n");
    printf("Marking answers other than mentioned in options given award 0 marks\n");
    printf("Question - What is the current richest state in India ?\n");
    printf("options: a ) Maharashtra \n b) Uttar pradesh \n c) Andhra pradesh \n");
    scanf("%c", &option);
    if(option=='a') secmark1+=3 ;
    printf("\n Questions with multiple answers \n");
    printf("Given below are the rules for part two \n");
    int i ;
    printf("===================================================\n");
    printf("..) Your each complete correct answer to the given questions award you 4 marks  \n");
    printf("..) Your each correct option to the given  question award you 1 mark each (Follows partial marking) \n");
    printf("..) If you skip the given question or mark any wrong option to the question award you 0 marks. \n\n");
    printf("Question - Select the options given below which contain cities located in India ? \n");
    printf("options    : 1) Bangalore     \n");
    printf("             2) Visakhapatnam   \n");
    printf("             3) Sydney    \n");
    printf("             4) New york city  \n");
    printf("If your chosen answer contain multiple correct options, for example, if options 1 and 4 are correct, then type the answer as 14:  ");
    scanf("%d",&i);
    if (i==12) {secmark2+=4 ;}
    if (i== 1 || i ==2)secmark2=1 ;

    printf("\n Fill In The blanks for the mentioned questions \n");
    char opt1[30];
    char correctopt1[30] = "13";
    char correctopt2[30] = "Thirteen";
    char correctopt3[30] = "thirteen";
    printf("Question: Number of districts in the state Andhra pradesh are ______?\n");
    scanf("%s",opt1);
    if(strcmp(correctopt1,opt1)==0)
    secmark3+=2;
    if(strcmp(correctopt2,opt1)==0)
    secmark3+=2;
    if(strcmp(correctopt3,opt1)==0)
    secmark3+=2;

    printf("Results for the above conducted quiz---");
    printf("Section 1 - %d/3 marks \nSection 2 - %d/4 marks \nSection 3 - %d/2 marks",secmark1,secmark2,secmark3);
    printf("\n Marks Obtained:%d marks \n Total Marks:9 marks",secmark1+secmark2+secmark3);
}