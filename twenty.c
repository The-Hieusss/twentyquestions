#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

void printTree(Root *root);
Root *create_game_tree();
void play20game(Root *root);

bool playagain = false;


/**
 * Creates the game tree for playing the 20 questions game. The tree is manually
 * constructed by inserting nodes with questions and guesses. The root of the tree
 * is returned.
 *
 * @return The root of the game tree.
 */
Root *create_game_tree()
{
    Root *root = NULL;
    root = insertNode(root, 100, "Does it grow underground?", "");
    insertNode(root, 50, "Is it long in shape?", "");
    insertNode(root, 25, "Is it orange in color?", "");
    insertNode(root, 15, "", "It's a carrot!");
    insertNode(root, 35, "", "It's a parsnip!");
    insertNode(root, 75, "Is it red in color?", "");
    insertNode(root, 65, "", "It's a radish!");
    insertNode(root, 85, "", "It's a potato!");
    insertNode(root, 150, "Does it grow on a tree?", "");
    insertNode(root, 125, "Is it red in color?", "");
    insertNode(root, 115, "", "It's an apple!");
    insertNode(root, 135, "", "It's a peach!");
    insertNode(root, 175, "Is it red in color?", "");
    insertNode(root, 165, "", "It's a tomato!");
    insertNode(root, 185, "", "It's a pea!");
    return root;
}

/**
 * Main program for the 20 questions game.
 *
 * This program creates a game tree containing questions and guesses for
 * fruits and vegetables. The user is prompted to think of a fruit or
 * vegetable and the program tries to guess it using the game tree. The
 * program continues to play rounds until the user quits.
 */
int main()
{
    Root *game = create_game_tree();
    char userin;

    do {
        printf("Welcome to 20 Questions! Press 'q' to quit or any other key to continue:\n");
        scanf(" %c", &userin);

        if (userin == 'q') {
            printf("Bye Bye!\n");
            break;
        }

       
        printf("You think of a fruit or vegetable and I will try to guess it!\n");
        play_game(game);

        
        printf("Play again? Y/N\n");
        scanf(" %c", &userin);
        
        if (userin == 'q') {
            printf("Bye Bye!\n");
            playagain = true;
        }

    } while (!playagain);

    return 0;

}

/**
 * Plays a game of 20 questions with the user. The user is asked a series of
 * yes or no questions to try to guess the object the user is thinking of.
 *
 * @param root The root of the binary search tree containing the questions.
 */
void play20game(Root *root) { 

play_game(root);

}