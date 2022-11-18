#include <stdio.h>
int main()
{
    int Physics,Chemistry,Maths,English,Hindi,total,Percentage,failCount,grace;
    
    printf("Enter the marks of English(0-100): ");
    scanf("%d",&English);
    //Use of if\else as a checking a validation
    if(English<0 || English>100)
    {
        printf("Invalid Marks,Please Enter Valid Marks\n");
        return 0;
    }
    printf("Enter the marks of Hindi(0-100): ");
    scanf("%d",&Hindi);
    //Use of if\else as a checking a validation
    if(Hindi<0 || Hindi>100)
    {
        printf("Invalid Marks,Please Enter Valid Marks\n");
        return 0;
    }
    printf("Enter the marks of Maths(0-100): ");
    scanf("%d",&Maths);
    //Use of if\else as a checking a validation
    if(Maths<0 || Maths>100)
    {
        printf("Invalid Marks,Please Enter Valid Marks\n");
        return 0;
    }
    printf("Enter the marks of Physics(0-100): ");
    scanf("%d",&Physics);
    //Use of if\else as a checking a validation
    if(Physics<0 || Physics>100)
    {
        printf("Invalid Marks,Please Enter Valid Marks\n");
        return 0;
    }
    printf("Enter the marks of Chemistry(0-100): ");
    scanf("%d",&Chemistry);
    //Use of if\else as a checking a validation
    if(Chemistry<0 || Chemistry>100)
    {
        printf("Invalid Marks,Please Enter Valid Marks\n");
        return 0;
    }
    //Totaling the Marks
    total=Physics+Chemistry+Maths+English+Hindi;
    printf("Total Marks obtained:%d out of 500\n",total);
    Percentage=total/5;
    
    // Fail Count for Supplymentry or Fail
    failCount=0;
    //Checking fail count
    if(Physics<33)failCount++;
    if(Chemistry<33)failCount++;
    if(Maths<33)failCount++;
    if(English<33)failCount++;
    if(Hindi<33)failCount++;
    
    //Now if failCount remains at 0 ,means all clear (pass)
    if(failCount==0)
    {
        printf("Percentage: %d\n",Percentage);
        if(Percentage>60)
        {
            printf("Division: I\n");
        }
        if(Percentage>=45 && Percentage<60)
        {
            printf("Division :II\n");
        }
        if(Percentage<45)
        {
            printf("Division: III\n");
        }
        printf("Result: PASS\n");
        return 0;
    }
    if(failCount==1)//Only statement where grace may given
    {
        grace=0;
        if(Physics<=32 && Physics>=28)
        {
            grace=33-Physics;
            Physics=33;
            printf("Result: PASS with Grace of %d in Physics\n",grace);
            printf("Percentage: %d\n",Percentage);
            if(Percentage>60)
            {
                printf("Division: I\n");
            }
            if(Percentage>=45 && Percentage<60)
            {
                printf("Division :II\n");
            }
            if(Percentage<45)
            {
                printf("Division: III\n");
            }
        }
        else if(Chemistry<=32 && Chemistry>=28)
        {
            grace=33-Chemistry;
            Chemistry=33;
            printf("Result: PASS with Grace of %d in Chemistry\n",grace);
            printf("Percentage: %d\n",Percentage);
            if(Percentage>60)
            {
                printf("Division: I\n");
            }
            if(Percentage>=45 && Percentage<60)
            {
                printf("Division :II\n");
            }
            if(Percentage<45)
            {
                printf("Division: III\n");
            }
        }
        else if(Maths<=32 && Maths>=28)
        {
            grace=33-Maths;
            Maths=33;
            printf("Result: PASS with Grace of %d in Maths\n",grace);
            printf("Percentage: %d\n",Percentage);
            if(Percentage>60)
            {
                printf("Division: I\n");
            }
            if(Percentage>=45 && Percentage<60)
            {
                printf("Division :II\n");
            }
            if(Percentage<45)
            {
                printf("Division: III\n");
            }
        }
        else if(English<=32 && English>=28)
        {
            grace=33-English;
            English=33;
            printf("Result: PASS with Grace of %d in English\n",grace);
            printf("Percentage: %d\n",Percentage);
            if(Percentage>60)
            {
                printf("Division: I\n");
            }
            if(Percentage>=45 && Percentage<60)
            {
                printf("Division :II\n");
            }
            if(Percentage<45)
            {
                printf("Division: III\n");
            }
        }
        else if(Hindi<=32 && Hindi>=28)
        {
            grace=33-Hindi;
            Hindi=33;
            printf("Result: PASS with Grace of %d in Hindi\n",grace);
            printf("Percentage: %d\n",Percentage);
            if(Percentage>60)
            {
                printf("Division: I\n");
            }
            if(Percentage>=45 && Percentage<60)
            {
                printf("Division :II\n");
            }
            if(Percentage<45)
            {
                printf("Division: III\n");
            }
        }
        else
        {
            printf("Result: SUPPLYMENTRY\n");
        }
        return 0;
    }
    if(failCount>1)
    {
        printf("Result: FAIL\n");
        return 0;
    
    }
    
    return 0;
}