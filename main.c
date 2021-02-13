/*
WRITTEN BY          :   S KIRUPA
DEGREE              :   MSc
BRANCH              :   THEORETICAL COMPUTER SCIENCE
YEAR                :   2019
LANGUAGE            :   C
FEATURES USED       :   FUNCTIONS,FILE HANDLING
NAME OF THE PROJECT :   DEPRESSION ANXIETY AND STRESS TEST
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void depression();
void anxiety();
void stress();
void main()
{
    int qcount=0;
    char name1[100];
    char name[100];
    char str[100];
    int choice;
    int ans,count1=0,count2=0,count3=0,count=0;
	int i,j,n;
    system("cls");
    printf("\t\t\t\t\t\tDEPRESSION ANXIETY STRESS TEST\n");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t\t     WELCOME ");
    printf("\n\t\t\t\t\t\t        to ");
    printf("\n\t\t\t\t\t\t     THE  TEST ");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t   KNOW ABOUT YOURSELF COMPLETELY!!!!!!! ");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t > Press 1 to start the test");
    printf("\n\t\t\t\t\t > Press 2 to get introduction");
    printf("\n\t\t\t\t\t > Press 3 to register yourself");
    printf("\n\t\t\t\t\t > press 4 to quit             ");
    printf("\n\t\t\t\t\t________________________________________\n\n");
    scanf("%d",&choice);
    while(choice!=4)
    {
    if(choice==1)
    {
        depression();
        anxiety();
        stress();
    }
    else if(choice==3)
    {
         int age;
         char name[100],gender,bp[10],diab[10];
         int weight,height;
         printf("\n Enter your name:");
         scanf("%s",name);
         printf("\n Enter your age:");
         scanf("%d",&age);
         printf("\n Enter your weight:");
         scanf("%d",&weight);
         printf("\n Enter your height:");
         scanf("%d",&height);
         printf("\n Do you have blood pressure?");
         printf("Enter yes or no only\n");
         scanf("%s",bp);
         printf("\n Do you have diabetics:");
         printf("Enter yes or no only");
         scanf("%s",diab);
         system("cls");
    }
    else if(choice==2)
    {
        printf("\nWHAT IS THE DEPRESSION, STRESS AND ANXIETY TEST?\n\n");
        printf("\nThe Depression, Anxiety and Stress Test is a questionnaire designed to measure the three related negative emotional states of depression, anxiety and stress.\n");
        printf("\nHOW DOES THE TEST WORK?\n");
        printf("\nThe Depression, Anxiety and Stress Test is made up of a series of 21 questions which includes questions relating to each of the three emotional states.\n");
        printf("\nParticipants are asked to work through each question indicating the extent to which they have experienced a particular symptom or state.\n");
        printf("\nEach question uses a 4-point severity/frequency scale to rate the presence of one of the negative emotional states for a participant.\n");
        printf("\nThe participants are asked to use the following rating scale in responding to each question:\n");
        printf("\n\t(0)Did not apply to me at all");
        printf("\n\t(1)Applied to me to some degree, or some of the time");
        printf("\n\t(2)Applied to me to a considerable degree, or a good part of time");
        printf("\n\t(3)Applied to me very much, or most of the time");
        printf("\nThe scores for each of the negative emotional states are calculated by summing the scores from each of the relevant items.");
        printf("\nAn individual's levels of depression, anxiety and stress are assessed on the following levels of severity:\n");
        printf("\n\tNormal\n\tMild\n\tModerate\n\tSevere\n\tExtremely severe");
        printf("\nUpon completing the test, participants are provided with a summary of their scores, including an indication of their levels compared with the average.\n");
        printf("\nFurther information on each of the negative emotional states is also provided based on the participant's scores.\n\n\n\n\n");
    }
    printf("\t\t\t\t\t\tDEPRESSION ANXIETY STRESS TEST\n");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t\t     WELCOME ");
    printf("\n\t\t\t\t\t\t        to ");
    printf("\n\t\t\t\t\t\t     THE  TEST ");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t   KNOW ABOUT YOURSELF COMPLETELY!!!!!!! ");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t________________________________________");
    printf("\n\t\t\t\t\t > Press 1 to start the test");
    printf("\n\t\t\t\t\t > Press 2 to get introduction");
    printf("\n\t\t\t\t\t > Press 3 to register yourself");
    printf("\n\t\t\t\t\t > press 4 to quit             ");
    printf("\n\t\t\t\t\t________________________________________\n\n");
    scanf("%d",&choice);
    }
}
   // printf("\nDepression, Anxiety & Stress Test: Your Results Explained\n");
    //printf("\nIt is worth noting that everyone experiences these sorts of negative feelings, thoughts and emotions to some degree at various points in their life.");
    //printf("\nHowever if you are experiencing these feelings frequently and strongly or if you feel that you need help then you should always seek the advice of a medical professional.");
    //printf("\nIf you feel that you may be at risk or have any thoughts about harming yourself or others then please seek immediate help from a medical professional.");
    void depression()
    {
    FILE *fptr1;
    int ans;
    int i=0,j,score1[100][1],count1=0,q1count=0;
    char line[7][128];
    system("cls");
    printf("\t\t\t\t\t\tTEST FOR DEPRESSION\n\n");
    fptr1 = fopen("depression.txt", "r");
    while(fgets(line[i], 127, fptr1))
	{
       // line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    int tot = 7;
    fclose(fptr1);
    for(i = 0; i<tot;i++)
    {
        printf(" %s\n", line[i]);
        printf("\n Enter the ans:\n");
        scanf("%d",&ans);
        q1count++;
        score1[i][1]=ans;
    }
    printf("\n the qn num is \n%d",q1count);
    for(i=1;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
                printf("%d",score1[i][j]);
        }
    }
     for(i=1;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
            if(score1[i][j]==0)
            {
                count1+=10;
            }
            if(score1[i][j]==1)
            {
                count1+=20;

            }if(score1[i][j]==2)
            {
                count1+=30;

            }if(score1[i][j]==3)
            {
                count1+=40;

            }
        }
    }
    printf("\n The count is %d ",count1);
    printf("\n");
    FILE *fp;
    fp=fopen("depression summary.txt","w");
    for(i=0;i<=tot-1;i++)
    {
       fprintf(fp,"\n%s\n",line[i]);
       fprintf(fp,"\n %d\n ",score1[i][1]);

    }
    fprintf(fp,"%s\n","DEPRESSION TEST SUMMARY");
    fprintf(fp,"%s\n","YOUR SCORE IS");
    fprintf(fp,"%d\n",count1);
    if(count1<=70)
    {
        fprintf(fp,"%s","Your results show that you may be currently experiencing a Normal level of depression.");
        fprintf(fp,"%s","your results indicate that your depression levels are currently at a Normal level.");
        fprintf(fp,"%s","It is suggested that you continue to monitor and be aware of the symptoms of depression and if you begin experiencing these emotions frequently and strongly you should consider seeking the advice of a medical professional.");
    }
     else if(count1>70 && count1<180)
    {
        fprintf(fp,"%s\n","Your results show that you may be currently experiencing a MODERATE level of depression.\n");
        fprintf(fp,"%s\n","This indicates that you may have been recently experiencing some of the characteristics displayed by high scorers on the depression scale including feeling:\n");
        fprintf(fp,"%s","\t~Self-disparaging\n");
        fprintf(fp,"%s","\t~Dispirited, gloomy, blue\n");
        fprintf(fp,"%s","\t~Convinced that life has no meaning or value\n");
        fprintf(fp,"%s","\t~Pessimistic about the future\n");
        fprintf(fp,"%s","\t~Unable to experience enjoyment or satisfaction\n");
        fprintf(fp,"%s","\t~Unable to become interested or involved\n");
        fprintf(fp,"%s\n\n","\t~Slow, lacking in initiative\n");
        fprintf(fp,"%s","Your results indicate that your depression levels are currently at a MODERATE level.\n");
        fprintf(fp,"%s","It is suggested that you continue to monitor your depression levels and identify ways to reduce this negative emotional state.\n");
        fprintf(fp,"%s\n","If you begin experiencing these emotions frequently and strongly or if you feel that you need help then you should always seek the advice of a medical professional.\n");
    }
    else if(count1>180 && count1<300)
    {
        fprintf(fp,"%s","Your results show that you may be currently experiencing a EXTREMELY SEVERE level of depression.\n");
        fprintf(fp,"%s\n","This indicates that you may have been recently experiencing the majority of the characteristics displayed by high scorers on the depression scale including feeling:\n");
        fprintf(fp,"%s","\t~self-disparaging\n");
        fprintf(fp,"%s","\t~Dispirited, gloomy, blue\n");
        fprintf(fp,"%s","\t~Convinced that life has no meaning or value\n");
        fprintf(fp,"%s","\t~Pessimistic about the future\n");
        fprintf(fp,"%s","\t~Unable to experience enjoyment or satisfaction\n");
        fprintf(fp,"%s","\t~Unable to become interested or involved\n");
        fprintf(fp,"%s\n\n","\t~Slow, lacking in initiative\n");
        fprintf(fp,"%s","Your results indicate that your depression levels are currently at a EXTREMELY SEVERE level.");
        fprintf(fp,"%s","It is suggested that your levels of depression indicate that you are experiencing these emotions frequently and strongly and you should seek the advice of a medical professional immediately.\n");
        fprintf(fp,"%s\n","You should also continue to monitor your depression levels and identify ways to reduce this negative emotional state.\n");
    }
    fclose(fp);
    }
    void anxiety()
    {
    FILE *fptr2;
    int ans;
    int i=0,j,score2[100][1],count2=0,q2count=0;
    char line[7][128];
    system("cls");
    printf("\t\t\t\t\t\tTEST FOR ANXIETY\n\n");
    fptr2 = fopen("anxiety.txt", "r");
    while(fgets(line[i], 128, fptr2))
	{
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    int tot = 7;
    fclose(fptr2);
    for(i =0; i<tot;i++)
    {
        printf(" %s\n", line[i]);
        printf("\n Enter the ans:");
        scanf("%d",&ans);
        q2count++;
        score2[i][1]=ans;
    }
    printf("\n the qn num is \n%d",q2count);
    for(i=1;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
                printf("%d",score2[i][j]);
        }
    }
     for(i=1;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
            if(score2[i][j]==0)
            {
                count2+=10;

            }
            if(score2[i][j]==1)
            {
                count2+=20;

            }
            if(score2[i][j]==2)
            {
                count2+=30;

            }
            if(score2[i][j]==3)
            {
                count2+=40;

            }

        }
    }
    printf("\n The count is %d",count2);
    printf("\n");
    FILE *fp;
    fp=fopen("anxiety summary.txt","w");
    for(i=0;i<=tot-1;i++)
    {
       fprintf(fp,"\n%s\n",line[i]);
       fprintf(fp,"\n %d\n ",score2[i][1]);

    }
    fprintf(fp,"%s\n","ANXIETY TEST SUMMARY");
    fprintf(fp,"%s\n","YOUR SCORE IS:");
    fprintf(fp,"%d\n",count2);
    if(count2<=70)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a NORMAL level of anxiety. You received a score of %d for anxiety.\n",count2);
        fprintf(fp,"%s","Your results indicate that your anxiety levels are currently at a NORMAL level.\n");
        fprintf(fp,"%s","It is suggested that you continue to monitor and be aware of the symptoms of anxiety and if you begin experiencing these emotions frequently and strongly you should consider seeking the advice of a medical professional.\n");
    }
    else if(count2>70 && count2<180)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a MODERATE level of anxiety. You received a score of %d for anxiety.",count2);
        fprintf(fp,"%s\n","This indicates that you may have been recently experiencing some of the characteristics displayed by high scorers on the anxiety scale including feeling:");
        fprintf(fp,"%s","\t~Apprehensive\n");
        fprintf(fp,"%s","\t~panicky\n");
        fprintf(fp,"%s","\t~Trembly\n");
        fprintf(fp,"%s","\t~Shaky\n");
        fprintf(fp,"%s","\t~Aware of dryness of the mouth\n");
        fprintf(fp,"%s","\t~Breathing difficulties\n");
        fprintf(fp,"%s","\t~Pounding of the heart\n");
        fprintf(fp,"%s","\t~Sweatiness of the palms\n");
        fprintf(fp,"%s","\t~Worried about performance and possible loss of control\n");
        fprintf(fp,"%s","Your results indicate that your anxiety levels are currently at a Moderate level.\n");
        fprintf(fp,"%s","It is suggested that you continue to monitor your anxiety levels and identify ways to reduce this negative emotional state. If you begin experiencing these emotions frequently and strongly or if you feel that you need help then you should always seek the advice of a medical professional.\n");
    }
    else if(count2>180 && count2<300)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a EXTREMELY SEVERE level of anxiety.");
        fprintf(fp,"%s","You received a score of %d for anxiety.",count2);
        fprintf(fp,"%s\n","This indicates that you may have been recently experiencing the majority of the characteristics displayed by high scorers on the anxiety scale including feeling:");
        fprintf(fp,"%s","\t~Apprehensive\n");
        fprintf(fp,"%s","\t~panicky\n");
        fprintf(fp,"%s","\t~Trembly\n");
        fprintf(fp,"%s","\t~Shaky\n");
        fprintf(fp,"%s","\t~Aware of dryness of the mouth\n");
        fprintf(fp,"%s","\t~Breathing difficulties\n");
        fprintf(fp,"%s","\t~Pounding of the heart\n");
        fprintf(fp,"%s","\t~Sweatiness of the palms\n");
        fprintf(fp,"%s","\t~Worried about performance and possible loss of control\n");
        fprintf(fp,"%s","\t~Your results indicate that your anxiety levels are currently at a Extremely Severe level.\n");
        fprintf(fp,"%s","\t~It is suggested that your levels of anxiety indicate that you are experiencing these emotions frequently and strongly and you should seek the advice of a medical professional immediately. You should also continue to monitor your anxiety levels and identify ways to reduce this negative emotional state.\n");
    }
    fclose(fp);
    }
    void stress()
    {
    FILE *fptr3;
    int ans;
    int i=0,j,score3[100][1],count3=0,q3count=0;
    char line[7][128];
    int tot;

    system("cls");
    printf("\t\t\t\t\t\tTEST FOR STRESS\n\n");
    fptr3= fopen("stress.txt", "r");
    while(fgets(line[i], 128, fptr3))
	{
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
     tot = 7;
    fclose(fptr3);
    for(i = 0; i<tot;i++)
    {
        printf(" %s\n", line[i]);
        printf("\n Enter the ans:");

        scanf("%d",&ans);
        q3count++;
        score3[i][1]=ans;
    }
    printf("\n the qn num is \n%d",q3count);
    for(i=0;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
                printf("%d",score3[i][j]);
        }
    }
     for(i=1;i<tot;i++)
    {
        for(j=1;j<=1;j++)
        {
            if(score3[i][j]==0)
            {
                count3+=10;

            }
            if(score3[i][j]==1)
            {
                count3+=20;

            }
            if(score3[i][j]==2)
            {
                count3+=30;

            }
            if(score3[i][j]==3)
            {
                count3+=40;

            }

        }
    }
    printf("\n The count is %d",count3);
    printf("\n");
    FILE *fp;
    fp=fopen("stress summary.txt","w");
    for(i=0;i<=tot-1;i++)
    {
       fprintf(fp,"\n%s\n",line[i]);
       fprintf(fp,"\n %d\n ",score3[i][1]);

    }
    fprintf(fp,"%s","STRESS TEST SUMMARY");
    fprintf(fp,"%s\n","YOUR SCORE IS:");
    fprintf(fp,"%d\n",count3);
    if(count3<70)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a NORMAL level of stress.\n");
        fprintf(fp,"%s","You received a score of %d for stress.\n",count3);
        fprintf(fp,"%s","Your results indicate that your stress levels are currently at a Normal level.\n");
        fprintf(fp,"%s","It is suggested that you continue to monitor and be aware of the symptoms of stress and if you begin experiencing these emotions frequently and strongly you should consider seeking the advice of a medical professional.\n");
    }
    else if(count3>70 && count3<180)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a SEVERE level of stress.\n");
        fprintf(fp,"%s","You received a score of %d for stress.\n",count3);
        fprintf(fp,"%s","This indicates that you may have been recently experiencing many of the characteristics displayed by high scorers on the stress scale including feeling:\n");
        fprintf(fp,"%s","\t~over-aroused\n");
        fprintf(fp,"%s","\t~Tense\n");
        fprintf(fp,"%s","\t~Unable to relax\n");
        fprintf(fp,"%s","\t~Touchy\n");
        fprintf(fp,"%s","\t~Easily upset\n");
        fprintf(fp,"%s","\t~Irritable\n");
        fprintf(fp,"%s","\t~Easily startled\n");
        fprintf(fp,"%s","\t~Nervy\n");
        fprintf(fp,"%s","\t~Jumpy\n");
        fprintf(fp,"%s","\t~Intolerant of interruption or delay\n\n\n");
        fprintf(fp,"%s","Your results indicate that your stress levels are currently at a Severe level.\n");
        fprintf(fp,"%s","It is suggested that your levels of stress indicate that you are experiencing these emotions frequently and strongly and you should seek the advice of a medical professional immediately.\n");
        fprintf(fp,"%s","You should also continue to monitor your stress levels and identify ways to reduce this negative emotional state.\n");
    }
    else if(count3>180 && count3<300)
    {
        fprintf(fp,"%s","Your results show that you may be experiencing a EXTREMELY SEVERE level of stress.");
        fprintf(fp,"%s","You received a score of %d for stress.\n");
        fprintf(fp,"%s","This indicates that you may have been recently experiencing the majority of the characteristics displayed by high scorers on the stress scale including feeling:");
        fprintf(fp,"%s","\t~Over-aroused\n");
        fprintf(fp,"%s","\t~Tense\n");
        fprintf(fp,"%s","\t~Unable to relax\n");
        fprintf(fp,"%s","\t~Touchy\n");
        fprintf(fp,"%s","\t~Easily upset\n");
        fprintf(fp,"%s","\t~Irritable\n");
        fprintf(fp,"%s","\t~Easily startled\n");
        fprintf(fp,"%s","\t~Nervy\n");
        fprintf(fp,"%s","\t~Jumpy\n");
        fprintf(fp,"%s","\t~Intolerant of interruption or delay\n\n");
        fprintf(fp,"%s","Your results indicate that your stress levels are currently at a Extremely Severe level.\n");
        fprintf(fp,"%s","It is suggested that your levels of stress indicate that you are experiencing these emotions frequently and strongly and you should seek the advice of a medical professional immediately.\n");
        fprintf(fp,"%s","You should also continue to monitor your stress levels and identify ways to reduce this negative emotional state.\n\n");
    }
    fclose(fp);
    printf("\n\t Please refer your test summary in the file\n\n");
}




