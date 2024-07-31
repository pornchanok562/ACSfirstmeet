#include <stdio.h>
int main(){
    int grade;
    scanf("%d" , &grade);
    if (grade >= 80){
        printf("grade :A");
    }
    else if (grade >= 75){
        printf("grade :B+");
    }
    else if (grade >= 70){
        printf("grade :B");
    }
    else if (grade >= 65){
        printf("grade :C+");
    }
    else if (grade >= 60){
        printf("grade :C");
    }
    else if (grade >= 55){
        printf("grade :D+");
    }
    else if (grade >= 50){
        printf("grade :D");
    }
    else {
        printf("grade F");
    }
   return 0;
    }
