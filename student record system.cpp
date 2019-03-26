#include <stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float marks[50];
    int password;
};
void menu(){
    printf(" ----------------------------\n");
    printf("| for search student press-2 |\n");
    printf("| for modify record press 3  |\n");
    printf("| for exit press-0           |\n");
    printf(" ----------------------------\n");
}
void add(int num){
    struct student s[50];

    int b,c,d,pass1,pass2,i,j;
    if(num==1){
    printf("Enter information of students:\n");
    for(i=0; i<50; ++i)
    {
        s[i].roll = i+1;
        printf("For roll number %d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
          printf("Enter marks one by one for APL,MATH and PHYSICS. \n");
        for(j=0; j<3; ++j){
            scanf("%f",&s[i].marks[j]);
        }
        printf("Please save a 4 digit password for %s\n",s[i].name);
        scanf("%d",&s[i].password);
        printf("Successfully done.Press 9 for back and 0 for continue adding\n");
        scanf("%d",&c);
        if(c==0){
            continue;
    }else
    if(c==9){
        break;
    }
    }
    }else
    if(num==2){
        printf("Enter student roll number.\n");
        scanf("%d",&b);
        printf("enter 4 digit password for roll number-%d.\n",b);
        scanf("%d",&pass1);
        for(i =0;i<50;++i){
                if(pass1==s[i].password){
        if(i+1==b){
            printf("Name- %s\n",s[i].name);
            printf("*****Marksheet*****\n");
            for(j=0; j<3; ++j){
                    if(j==0){
                        printf("APL %0.2f\n",s[i].marks[j]);
                    }
                    if(j==1){
                         printf("MATH %0.2f\n",s[i].marks[j]);
                    }
                    if(j==2){
                         printf("PHYSICS %0.2f\n",s[i].marks[j]);
                    }
        }
    }
    }
        }
        if(i>50){
            printf("wrong password\n");
        }
    if(i<b){
        printf("NOT FOUND!!!\n");
    }
    }else
    if(num==3){
        printf("Enter student roll\n");
        scanf("%d",&d);
        printf("please enter 4 digit password for roll number %d\n",d);
        scanf("%d",&pass2);
         for(i=0; i<50; ++i){
        s[i].roll = i+1;
        if(d==s[i].roll){
            if(pass2==s[i].password){
        printf("For roll number %d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
          printf("Enter marks one by one for APL,MATH and PHYSICS. \n");
        for(j=0; j<3; ++j){
            scanf("%f",&s[i].marks[j]);
        }
        printf("Please save a 4 digit password again for %s\n",s[i].name);
        scanf("%d",&s[i].password);
        printf("Successfully done.Press 9 for back and 0 for continue adding\n");
        scanf("%d",&c);
        if(c==0){
            continue;
    }else
    if(c==9){
        break;
    }
    }else
    printf("wrong password\n");
        }
         }
    if(i>50){
        printf("NOT FOUND!!!\n");
    }
         }
    }
int main(){
    int a,b,exit,i;
    printf("***************\n");
    printf("* Add student *\n");
    printf("***************\n");
    add(1);
    for(i=0;i<200;++i){
    menu();
    scanf("%d",&a);
    if(a==0){
        break;
    }
    add(a);

    }


    return 0;
}
