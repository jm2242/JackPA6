#include "PA6.h"



// typedef int bool;
// #define true 1
// #define false 0

void welcome_screen()
{
	printf("***BATTLESHIP***\n");
	printf("Battleship is a two player Navy game.\n");
	printf("The objective of the game is to sink all ships in your enemy's fleet.\n");
	printf("The Player to sink his/her enemy's fleet first wins.\n");
	printf("Both players' fleets consist of 5 ships, the carrier(5), battleship(4), cruiser(3), submaine(3), and destroyer(2).\n");
	printf("Place your ships on the board.\n");
	printf("Call coordinates of where you think the opponents ships are, if you hit all of the segments of their ship, you sunk thier battlship.\n");
	printf("The player to shink all of the");
	printf("***GOOD LUck****\n\n");

}


void manually_place_ships_on_board(char board[][10], char battleshipsChosen[5], int ships_placed)
{
	int row, column, i;
	int rowValid=0;
	int checkedAll = 0;
	int columnValid=0;
	int selectionValid=0;
	char type_of_ship;
	printf("We have placed %d ships \n", ships_placed);

	//Currently this error handling DOES NOT WORK, causes infinite loop
	while (rowValid!=1) {
		printf( "Please Enter the row number: " );
		if(scanf("%d",&row) == 1) {
	   		rowValid = 1;
		} 
		else {
	   		puts("Error. Please supply 1 integer");
		}
	}
	
	while (columnValid!=1) {
		printf( "Please Enter the column number: " );
		if(scanf("%d",&column) == 1) {
	   		columnValid = 1;
		} 
		else {
	   		puts("Error. Please supply 1 integer");
		}
	}		

	printf("User entered row %d and column %d \n", row, column);

	printf("Enter the type of ship as a Carrier(c), Battleship(b), Cruiser(r), Submarine(s) or Destroyer(d): ");
	scanf(" %c", &type_of_ship);

	while (selectionValid!=1) {
		for(i = 0; i<ships_placed; i++){
			printf("checking array position %d \n", i);
			if (battleshipsChosen[i] == type_of_ship ) {
				printf("its wrong try again \n");
				scanf(" %c", &type_of_ship);
				break;
				
			}
			// else if (i+1==ships_placed) {
			// 	printf("We checked all \n");
			// 	checkedAll = 1;
			// }

		}
		// if (checkedAll == 1) {
		// 	selectionValid = 1;
		// }
		selectionValid = 1;
		battleshipsChosen[ships_placed] = type_of_ship;
		
	}

	//printf("Enter the direction you want your ship to be placed as either Verticle (v), 
}





//int generate_direction (void)
//{
//	direction = 0;
//
//	direction = rand() % 2 + 1;
//
//	if( direction == 1) // horizontal
//	{
//		return direction;
//	}
//	else // verticle 
//	{