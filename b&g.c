#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
	int sum;
  if (gender == 'b')
  for (int i = 0; i < number_of_students; i++)
  {
       sum +=*marks+i;
  }
return sum;
}



int main() 
{
	int number_of_students;
	scanf("%d",&number_of_students);
	int marks[number_of_students];
	//grades gather
	for (int i=0; i<number_of_students; i++)
	{
		scanf("%d",&x[i]);
	}
	char gender; 
	scanf("%c",gender);
	
	int sum = marks_summation(&marks, number_of_students, gender);
	printf("%d",sum);
}
	