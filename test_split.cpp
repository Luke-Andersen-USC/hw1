/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <cstddef>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

  Node seventh(18, NULL);
  Node sixth(3, &seventh);
  Node fifth(2, &sixth);
  Node fourth(4, &fifth);
  Node third(3, &fourth);
  Node second(2, &third);
  Node first(1, &second);

  Node* temp = &first;
  while(temp != NULL)
  {
    cout << temp->value << endl;
    temp = temp->next;
  }


  Node* evens = NULL;
  Node* odds = NULL;
  Node* firstRef = NULL;

  split(firstRef, odds, evens);

  cout << endl;

  temp = evens;

  //evens
  cout << "evens: " << endl;
  while(temp != NULL)
  {
    cout << temp->value << endl;
    temp = temp->next;
  }

  cout << endl;
  cout << "odds: " << endl;

  temp = odds;
  //odds
  while(temp != NULL)
  {
    cout << temp->value << endl;
    temp = temp->next;
  }
  

}
