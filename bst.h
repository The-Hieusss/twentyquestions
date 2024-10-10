#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>


typedef struct node
{
    int data;
    char* question;
    char* guess;
    struct node* left;
    struct node* right;
}Root;


//interfaces for bst.c
Root *createNode(int data, char *question, char *guess);
Root *insertNode(Root* root, int data, char *question, char *guess);
void printTree(Root* root);
void play_game(Root* root);

#endif /* BST_H */
