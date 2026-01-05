#include <stdio.h>

int main() {
    int h,m,s,hour,min,sec;
    char x1,x2;
    int plus,newmin;
    scanf("%d%c%d%c%d",&h,&x1,&m,&x2,&s);
    printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
    printf("next minutes:");
    scanf("%d",&plus);
    newmin = m + plus;
    if(newmin >= 0 && newmin <= 120) {
        hour = h + (newmin / 60);
        min = newmin % 60;
        hour = hour % 24;
        printf("hour:%d\nminute:%d\nsecond:%d\n",hour,min,sec);
    }
    else {
        printf("nah newmin>120\n");
    }
    return 0;
}