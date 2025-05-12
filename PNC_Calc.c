/* PROBLEM STATEMENT :

    To create a calculator to calculate permutations and combinations as per users           
    choice .

PROBLEM DESCRIPTION :

  Combinatorial computation engine .
 The purpose of this project is constructing an engaging C application in which a user  
  can calculate permutations, combinations, factorial, and even probabilities with ease. 
  This becomes possible with the program simply asking the users their preferred 
  operation and this provides a straightforward way of carrying out these basic 
  mathematical computations easily.
  

Code for the problem:   
*/


#include <stdio.h>

int factorial (int n );

int facta ( int r );

int combinations(int n, int r);

int permutations(int n, int r);

float probability(int total, int selected);

int main() 
{
    int choice, n, r; 

    do{

        // Displaying of options to choose from 

        printf("\n Welcome! Choose an option:\n");

        printf("press 1.  To Calculate Combinations (C(n, r)) :\n");

        printf("press 2.  To Calculate Permutations (P(n, r)) :\n");
     
        printf("press 3.  To Calculate Probability : \n");

        printf("press 4.  To Calculate Factorial : \n");

        printf("press 5. Exit\n");

        printf("Your choice : ");

        scanf("%d", &choice);

        // Handle user choice

        switch (choice) 
        {
            case 1: // Calculating Combinations 

                printf("Now we will calculate Combinations : \n");
                printf("Total items (n): ");
                scanf("%d", &n);
                printf("Items to choose (r): ");
                scanf("%d", &r);
                 if (r < 0 ) 
                {
                    printf(" ERROR! \n ");
                    printf("Invalid input! r must be greater than 0\n");
                } 
                if ( r > n )
                {
                    printf(" ERROR! \n ");
                    printf("Invalid input! r must be smaller  than n \n");
                }
                 else
                 {
                     printf("C(%d, %d) = %d\n", n, r, combinations(n, r));
                 }
                  
                 
                break;

            case 2: // Calculating Permutations

                printf("Now we will calculate Permutations : \n");
                printf("Total items (n): ");
                scanf("%d", &n);
                printf("Items to arrange (r): ");
                scanf("%d", &r);
                if (r < 0 ) 
                {
                    printf(" ERROR! \n ");
                    printf("Invalid input! r must be greater than 0\n");
                } 
                if ( r > n )
                {
                    printf(" ERROR! \n ");
                    printf("Invalid input! r must be smaller  than n \n");
                }
                else 
                {
                    printf("P(%d, %d) = %d\n", n, r, permutations(n, r));
                }
                break;

            case 3: //  Calculating Probability

                printf("Now we will calculate Probability : \n");
                printf(" Enter The  Total Number of Outcomes : \n");
                scanf("%d", &n);
                printf("Enter the number of Favorable Outcomes : \n ");
                scanf("%d", &r);
                 if (n < 0)
                {
                    printf(" ERROR! \n");
                    printf("Invalid input! total outcome must be non negative \n");
                }
                 if (r < 0)
                {
                    printf(" ERROR! \n");
                    printf("Invalid input! favorable outcomes must be positive. \n ");
                }
                 if (r > n)
                {
                    printf(" ERROR! \n");
                    printf("Invalid input! r must be smaller than  n \n");
                }
                 else 
                {
                    printf("Probability of selecting %d from %d is %.3f.\n", r, n, probability(n, r));
                }
                break;

            case 4 : // Calculating Factorial

                printf("Now we will calculate Factorial : \n ");
                printf("enter the number : \n");
                scanf("%d" , &n );
                printf("the factorial is : %d \n " , factorial (n) );
                break;

            case 5: // To Exit The Program 

               printf("The program has been terminated \n ");
               printf("Thank you for using the program! Goodbye!\n");
               printf("Have a Good Day! \n ");
                break;

            default:
                printf("Please select a valid option (1-5).\n");
        }
    }  while (choice != 5 );

    return 0;
}


// Function to compute the factorial of a number

int factorial ( int n ) 
 {
    int  fact , factnm1;
     if ( n == 0 ) 
     return 0 ;
     if (n == 1 )
     return 1; 
     else 
     factnm1= factorial( n - 1 );
     fact = n * factnm1;
    return fact;
 }

// Function to compute the factorial of a number


int facta ( int r ) 
 {
    int  fact , factnm2;
     if ( r == 0 ) 
     return 0 ;
     if (r == 1 )
     return 1; 
     else 
     factnm2= facta( r - 1 );
     fact = r * factnm2;
    return fact;
 }

// Function to calculate combinations (C(n, r))

int combinations(int n, int r) 

{ 
 int comb ;
  comb = factorial(n) / (factorial(r) * factorial(n - r));
 return comb ;
}

// Function to calculate permutations (P(n, r))

int permutations(int n, int r) 

{
 int permut;
  permut = factorial(n) / factorial(n - r);
 return permut;
}

// Function to calculate probability 

 float probability(int total, int selected) 

 {
    int totalWays =total;
    int selectedWays = selected;
    return (float)selectedWays / totalWays;
 }


