/* EXAM RESULT ANALYSIS SYSTEM
	INPUT: mark of student per subject
	OUTPUT: pass if marks >= 12
		grade A 26-30
		grade B 21-25
		grade C 13-20
		grade D 12
*/

#include <stdio.h>

int main()
{
  int marks, minmarks=0, maxmarks=30;
  printf("Enter your marks\n");
  scanf("%d", &marks);

  // check for valid marks
  if(marks > maxmarks || marks < minmarks) {
	printf("Please Enter valid Marks between 0-30\n");
  }
  else {
	if(marks < 12)
		printf("Alert! You are failed and you have to give makeup test to clear subject!\n");
	else
	if(marks <= 30 && marks >= 26)
		printf("Congratulations You passed with A grade!\n");
	else
	if(marks <= 25 && marks >= 21)
		printf("Congratulations You passed with B grade!\n");
	else
	if(marks <= 20 && marks >= 13)
		printf("Congratulations You passed with C grade!\n");
	else
                printf("Congratulations You passed with D grade!\n");
  	}
}
