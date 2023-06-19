#include<stdio.h>
void main()
{
    int tday,tmonth,tyear,bday,bmonth,byear,day,month,year;
    printf("Input current date: ");
    scanf("%d",&tday);
    printf("Input current month: ");
    scanf("%d",&tmonth);
    printf("Input current year: ");
    scanf("%d",&tyear);
    printf("Input birth date: ");
    scanf("%d",&bday);
    printf("Input birth month: ");
    scanf("%d",&bmonth);
    printf("Input birth year:  ");
    scanf("%d",&byear);
    if(tday>0 && tday<32 && tmonth<13 && tmonth>0 && tyear>=byear && bday>0 && bday<32 && bmonth<13 && bmonth>0)
    {
        if(tday<bday)
        {
            switch(tmonth)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                tday+=31;
                break;
            case 2:
                if((tyear%4==0&&tyear%100!=0)||(tyear%400==0))
                {
                    tday+=29;
                }
                else
                {
                    tday+=28;
                }
                break;
            default:
                tday+=30;
            }
            bmonth++;
        }
        day=tday-bday;
        if(tmonth<bmonth)
        {
            tmonth+=12;
            byear++;
        }
        month=tmonth-bmonth;
        year=tyear-byear;
        printf("%d year %d month %d days",year,month,day);
    }
    else
    {
        printf(" Wrong input!!");
    }
}
