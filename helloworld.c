 #include<stdio.h>
 int main()
 {
    char name[50];
    int age;
    float height;

    printf("Name of the student:");
    scanf("%s",&name);
    printf("Your name is : %s\n",name);

    printf("Age of the student is :");
    scanf("%d",&age);
    printf(" your age is:%d\n",age);

    printf("Height of the stduent is:");
    scanf("%f",&height);
    printf("your height is :%.1f\n",height);


    
   

    return 0;
    
 }