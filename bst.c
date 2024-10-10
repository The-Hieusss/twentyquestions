#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Creates a new node for a binary search tree (BST).
 *
 * @param data The int data to store in the node.
 * @param question The question to associate with the node.
 * @param guess The guess associated with the node.
 * @return A Root* with the specified data and left and right children set to NULL.
 */
Root *createNode(int data, char *question, char *guess)
{
    Root *newNode = malloc(sizeof(Root));
    newNode->data = data;
    newNode->question = question;
    newNode->guess = guess;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/**
 * Inserts a new node into the BST.
 *
 * @param root The root of the tree.
 * @param data The int data to store in the new node.
 * @param question The question to associate with the new node.
 * @param guess The guess associated with the new node.
 */

Root *insertNode(Root *root, int data, char *question, char *guess)
{

    if (root == NULL)
    {
        root = createNode(data, question, guess);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data, question, guess);
    }
    if (data > root->data)
    {
        root->right = insertNode(root->right, data, question, guess);
    }

    return root;
}

/**
 * Prints all the data values in the BST in ascending order.
 * This is used for testing purposes.
 * @param root The root of the tree.
 */
void printTree(Root *root)
{
    if (root != NULL)
    {

        printTree(root->left);
        printf("%d\n", root->data);
        printTree(root->right);
    }
}

/**
 * Plays the 20 questions game with the user.
 * Main logic for the 20 questions game.
 * @param root The root of the tree containing the questions and guesses.
 */
void play_game(Root *root)
{

    char input;

    Root *current = root;

    while (current != NULL)
    {
        // If the current node has a question, print it to the user, and store their
        // response. If the response is 'y', move to the left child node, if the
        // response is 'n', move to the right child node. If the response is neither
        // 'y' or 'n', stay in the same node.

        if (strcmp(current->question, "") != 0)
        {
            printf("%s\n", current->question);
            printf("y/n:");
            scanf(" %c", &input);
            if (input == 'y')
            {
                current = current->left;
            }
            else if (input == 'n')
            {
                current = current->right;
            }
        }

        // If the current node has a guess, print it to the user, and store their
        // response. If the response is 'y', the user won. If the response is 'n',
        // the user lost. If the response is neither 'y' or 'n', stay in the same
        // node.
        else
        {
            printf("%s\n", current->guess);
            printf("y/n:");
            scanf(" %c", &input);
            if (current->guess != NULL)
            {

                if (input == 'y')
                {
                    printf("I win!\n");
                    break;
                }
                else
                {
                    printf("You win!\n");
                    break;
                }
            }
        }
    }
    return;
}
