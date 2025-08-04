#include <stdio.h>
#include <stdbool.h>

typedef struct date{
    int day;
    int month;
    int year;
} date;

void compareDates(date date1,date date2){
    if(date1.year == date2.year){
        if(date1.month == date2.month){
            if(date1.day == date2.day){
                printf("The 1st date %d/%d/%d is same as 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
            }else if(date1.day > date2.day){
                printf("The 1st date %d/%d/%d is After 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
            }else{
                printf("The 1st date %d/%d/%d is Before 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
            }
        }else if(date1.month >date2.month){
            printf("The 1st date %d/%d/%d is after 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
        }else{
            printf("The 1st date %d/%d/%d is before 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
        }
    }else if(date1.year > date2.year){
        printf("The 1st date %d/%d/%d is after 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
    }else{
        printf("The 1st date %d/%d/%d is before 2nd date %d/%d/%d\n",date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
    }
}

int main(){
    int day,mon,year;
    date d1,d2;
    for(int i=0;i<2;i++){
        int incorrect = 1;
        while(incorrect){
            printf("Enter the Day,Month and Year of the Date No.%d: ",i+1);
            scanf("%d %d %d",&day,&mon,&year);
            if(day>0 && mon>0 && year>0 && mon<=12){
                int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
                if((year%4==0 && year%100!=0) || (year%400 == 0)){
                    arr[1] = 29;
                }
                if( day <= arr[mon-1]){
                    incorrect = 0;
                }
            }
        if(i==0){
            d1.day = day;
            d1.month = mon;
            d1.year = year;
        }else{
            d2.day = day;
            d2.month = mon;
            d2.year = year;
        }
        }
    }
    compareDates(d1,d2);
    return 0;
}