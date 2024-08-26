// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

#define MEALS 3


int main() {
   int a;
   int calories[MEALS];
   int total = 0;
   char yes[5];
   // code 2
   float weight;
   float speed;
   float tim;
   float burn;
    printf("Calorie Calculator\n");
    printf("This Calculator assumes you eat 3 meals a day\n\n\n");

   for(int x = 0; x < MEALS; x++){
   printf("How many Mg calories in meal-%d: ", x+1);
   scanf("%d",&calories[x]);
   total = total + calories[x];
   }
   printf("Total calories consumed %d mg\n\n\n",total);
    while (getchar() != '\n');

   printf("Did you do exercise today? example(walk or run) type y or n? ");
   fgets(yes,5,stdin);

   if(yes[0] == 'y'){
       printf("\nGive your weight (Kg): ");
       scanf("%f",&weight);
       printf("\ntotal exercise time (hours): ");
       scanf("%f",&tim);
       printf("\nGive your speed (METs):  ");
       scanf("%f",&speed);
       if(speed < 4){
           printf("\nExercise by Walking speed\n");
           
       }else if( speed >= 4 && speed <= 5){
           printf("\nExercise by fast walking speed\n");
           
       }else if(speed > 5){
           printf("\n\nExercise by running speed\n");
       }

       

       burn = weight * speed * tim;

       printf("\nTotal calories burned %f\n", burn);

       printf("\nTotal calories will stay for that day after burn %f", total-burn);



   }else if(yes[0] == 'n'){
       printf("ok do it one day");
   }else{
       printf("unkown answer");
   }

    return 0;
}