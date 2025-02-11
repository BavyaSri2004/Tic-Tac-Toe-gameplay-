# Tic-Tac-Toe-gameplay
Tic-Tac-Toe is a simple two-player game implemented in C++ as a console-based program. The goal is to provide a seamless and interactive experience for players while focusing on robust programming principles such as input validation, modular design, and efficient logic.

1. Game Board: The game uses a 3x3 grid represented by a 2D array to track player moves. Each cell is initially empty (' ') and is updated with X or O as players take turns.

2. Display Functionality: A Displayboard function is designed to print the current state of the board, including formatting to maintain clarity.

3. Win and Draw Checks:
The checkwin function evaluates rows, columns, and diagonals to determine if the current player has won.
The checkdraw function checks if all cells are filled without a winner, signaling a tie.

4. Player Interaction:
The program prompts players to enter the row and column of their desired move.Input validation ensures players can only select valid, unoccupied cells.

5. Turn Switching: The playboard function alternates between players X and O, maintaining fairness and logic continuity.

6. Replay Feature: After a game ends, players are given the option to play again using a do-while loop.
