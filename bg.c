#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
   int sum=0,j,k;
  if (gender == 'b')
      for ( j = 0; j < number_of_students; j+2)
  {
       sum +=*(marks+j);
  }
  else if (gender == 'g')
  {
	   for ( k = 1; k < number_of_students; k+2)
	   {
	  sum +=*(marks+k);
	   }
  }
return sum;
}


int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}