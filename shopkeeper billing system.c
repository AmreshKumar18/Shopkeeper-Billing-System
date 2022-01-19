// Billing System
#include<stdio.h>
#include<stdlib.h>    // Here, it is used for clear screen like menu system and enter quantity

int main(){
	// menu list of grosser 
	printf("\n              ========           ");
	printf("\n              | MENU |               ");
	printf("\n              ========                ");
	printf("\n   S.No    |   Name     |    Rate  ");
	printf("\n-------------------------------------");
	printf("\n    1.     |  Rice      |     38   ");
	printf("\n-------------------------------------");
	printf("\n    2.     |  Bread     |     25   ");
	printf("\n-------------------------------------");
	printf("\n    3.     |  Butter    |     45   ");
	printf("\n-------------------------------------");
	printf("\n    4.     |  Sugar     |     42   ");
	printf("\n-------------------------------------");
	printf("\n    5.     |  Brush     |     20   ");
	printf("\n-------------------------------------");
	printf("\n    6.     |  Colgate   |     65   ");
	printf("\n-------------------------------------");
	printf("\n    7.     |  Pulses    |     90   ");
	printf("\n-------------------------------------");
	printf("\n    8.     |  Garlic    |     80   ");
	printf("\n-------------------------------------");
	printf("\n    9.     |  Onion     |     20   ");
	printf("\n-------------------------------------");
	printf("\n    10.    |  Peanuts   |     110   ");
	printf("\n-------------------------------------");
	
	int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,amt1,amt2,amt3,amt4,amt5,amt6,amt7,amt8,amt9,amt10,totalamt;
	
	// enter the quantity 
	printf("\n\nEnter the Quantity of Rice: ");
	scanf("%d",&q1);
	printf("\nEnter the Quantity of Bread: ");
	scanf("%d",&q2);
	printf("\nEnter the Quantity of Butter: ");
	scanf("%d",&q3);
	printf("\nEnter the Quantity of Sugar: ");
	scanf("%d",&q4);
	printf("\nEnter the Quantity of Brush: ");
	scanf("%d",&q5);
	printf("\nEnter the Quantity of Colgate: ");
	scanf("%d",&q6);
	printf("\nEnter the Quantity of Pulses: ");
	scanf("%d",&q7);
	printf("\nEnter the Quantity of Garlic: ");
	scanf("%d",&q8);
	printf("\nEnter the Quantity of Onion: ");
	scanf("%d",&q9);
	printf("\nEnter the Quantity of Peanuts: ");
	scanf("%d",&q10);
	
	// here found amount for all and if you want to not buy put 0..... 
	amt1 = q1*38;
	amt2 = q2*25;
	amt3 = q3*45;
	amt4 = q4*42;
	amt5 = q5*20;
	amt6 = q6*65;
	amt7 = q7*90;
	amt8 = q8*80;
	amt9 = q9*20;
	amt10 = q10*110;
	
	// total amount of grosser
	totalamt = (amt1+amt2+amt3+amt4+amt5+amt6+amt7+amt8+amt9+amt10);
	
	system("cls");   // it is stored in stdlib.h for clear screen
	
	    //billing system prepared here
	
	printf("\n\n\t\t\t===========================================================");
	printf(" ");
	printf("\n\t\t\t\t       | AAM AADMI GENERAL STORE |");
	printf(" ");
	printf("\n\t\t\t===========================================================");
	printf("\n\t\t\t|S.No   |   Name   |   Quantity   |   Rate   |   Amount   |");
	printf("\n\t\t\t-----------------------------------------------------------");
	printf("\n\t\t\t| 1.    |   Rice   |     %d        |    38   |      %d    |",q1,amt1);
	printf("\n\t\t\t| 2.    |   Bread  |     %d        |    25   |      %d    |",q2,amt2);
	printf("\n\t\t\t| 3.    |   Butter |     %d        |    45   |      %d    |",q3,amt3);
	printf("\n\t\t\t| 4.    |   Sugar  |     %d        |    42   |      %d    |",q4,amt4);
	printf("\n\t\t\t| 5.    |   Brush  |     %d        |    20   |      %d    |",q5,amt5);
	printf("\n\t\t\t| 6.    |   Colgate|     %d        |    65   |      %d    |",q6,amt6);
	printf("\n\t\t\t| 7.    |   Pulses |     %d        |    90   |      %d    |",q7,amt7);
	printf("\n\t\t\t| 8.    |   Garlic |     %d        |    80   |      %d    |",q8,amt8);
	printf("\n\t\t\t| 9.    |   Onion  |     %d        |    20   |      %d    |",q9,amt9);
	printf("\n\t\t\t| 10.   |   Peanuts|     %d        |    110  |     %d    |",q10,amt10);
	printf("\n\t\t\t===========================================================");
	printf("\n\t\t\t   | Total Amount is :%d |",totalamt);
	printf("\n\t\t\t-------------------------------------------------------------");
	printf("\n\t\t\t\t Thank You! Visit Again...");
	printf("\n\t\t\t-------------------------------------------------------------");
	
	
	return 0;
	}
	
