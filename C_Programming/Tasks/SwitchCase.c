#include <stdio.h>

int main() {
    int day;
    for(int i=0;i>=0;i++){
    printf("Enter the day : ");
    scanf("%d",&day);
    
    switch(day){
        case 1:
         printf("Monday");
         break;

        case 2:
         printf("Tuesday");
         break;
        case 3:
         printf("Wednesday");
         break;
        case 4:
         printf("Thursday");
         break;
        case 5:
         printf("Firday");
         break;
        case 6:
         printf("Saturday");
         break;
        case 7:
         printf("Sunday");
         break;
        default:
          printf("Entered incorrect day \n");
          continue;
    }
   break;
}

return 0;

}
    