#include <stdio.h>
#include <math.h>

int iter;
int cont = 0;
float pi = 3.141592653589793;

// Global Functions

void introduction();
void serie();

void introduction(){
  printf("Please enter the number of iterations you want to perform. \n");
  scanf("%i", &iter);
    while(iter <= 0){
        printf("It seem you have entered a number that is less than or equal to 0, please enter a positive number. \n");
        scanf("%i", &iter);
    }
  serie();
}

void serie(){
 printf("iter, error, result \n");
    while(cont < iter){
        double d;
        d = ((powf(-1, cont)) / (2*cont + 1));
        double result;
        result += (d*4);
        cont += 1;
        double error = fabs(((pi - result) / pi) * 100);
        printf("%4i, err:%4e, %4lf \n", cont, error, result);
    }
  cont = 0;
  introduction();
}

int main(){
introduction();
}
