# 20 Questions Game - Binary Search Tree (BST) Implementation
Overview

This project implements a simple "20 Questions" game using a Binary Search Tree (BST). The game allows the user to think of a fruit or vegetable, and the program attempts to guess what they are thinking of by asking a series of yes/no questions. The game tree is pre-defined, consisting of questions and guesses for various fruits and vegetables.

**How It Works**

The game begins by constructing a binary search tree, where each node is either a question (internal node) or a guess (leaf node).
The user is prompted to think of a fruit or vegetable, and the game asks a series of yes/no questions based on the tree structure to narrow down the possible options.
After each guess, the user is asked if they would like to play again.
The game continues until the user chooses to quit by entering 'q'.

**Files**

bst.h: Header file that contains the definition of the Root structure and the prototypes for the functions used to manage the BST (e.g., insertNode).
twenty.c: The main program that sets up the game tree and handles the gameplay.

**How to Play**

Start the Game:

When you run the program, you will be greeted with a message: Welcome to 20 Questions!
Press any key to start the game, or press 'q' to quit.
Think of a Fruit or Vegetable:

The game will prompt you to think of a fruit or vegetable.
It will ask a series of yes/no questions (e.g., "Does it grow underground?").
Based on your answers, the game will try to guess what fruit or vegetable you are thinking of.
Answering Questions:

For each question, simply answer "yes" or "no" based on the prompt.
Once the game makes a guess, it will tell you what it thinks your fruit/vegetable is.
Playing Again:

After each game, you will be asked if you'd like to play again. Press 'Y' to play again, or 'N' to quit.
Quitting:

You can quit the game at any time by pressing 'q'.

**Compilation**
To compile the program, use a C compiler like gcc. You will also need the bst.h file to include the binary search tree structure and related functions.

```bash
gcc main.c bst.c
```
**Running the Program**

After compiling, run the program with:

```bash
./a.out
```
**Game Tree Structure**

The game tree is manually constructed using a series of insertNode calls, which define the questions and answers. Here's a sample of the questions and answers:

Root Question: "Does it grow underground?"

Left Subtree (Yes):

"Is it long in shape?"
"Is it orange in color?" -> Guess: "It's a carrot!"
Guess: "It's a parsnip!"

"Is it red in color?" -> Guess: "It's a radish!"
Guess: "It's a potato!"

Right Subtree (No):
"Does it grow on a tree?"

"Is it red in color?" -> Guess: "It's an apple!" / "It's a peach!"
"Is it red in color?" -> Guess: "It's a tomato!" / "It's a pea!"

The binary search tree allows the program to efficiently narrow down possible answers based on the user's yes/no responses.

Functions
create_game_tree()

This function constructs the binary search tree used in the game. It initializes the tree with questions and answers and returns the root of the tree.

play20game()

This function plays a round of the game by prompting the user with yes/no questions based on the game tree.

play_game()

This is the main function that asks the user the questions and processes their answers to make a guess.

insertNode()

This function inserts a node into the binary search tree, either as a question or a guess.

Future Enhancements

Potential improvements to the game:

Allow the user to add new questions and guesses to the tree if the game fails to guess correctly.
Expand the tree to include more fruits and vegetables, or even other categories (e.g., animals, objects).
Add support for multiple rounds and keep track of how many guesses it takes to get the right answer.

License

This project is open-source and free to use or modify.

Author

This implementation of the 20 Questions game was written in C for fun
