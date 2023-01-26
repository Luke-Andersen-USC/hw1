/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/


#include "split.h"

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE

  Node* head = in;
  bool even = false;

  
  if(in != nullptr)
  {

    //add to even
    if(in->value % 2 == 0)
    {
      even = true;
      if(evens != nullptr)
      {
        evens->next = in;
      }
      evens = in;
      in = in->next;
      evens->next = nullptr;

    }
    //add to odd
    else if(in->value % 2 == 1)
    {
      if(odds != nullptr)
      {
        odds->next = in;
      }

      odds = in;
      in = in->next; 
      odds->next = nullptr;

      
    }

    //recrusive if not at end
    if(in != nullptr)
    {
      split(in, odds, evens);
    }

    //setting evens/odds pointers back to begining
    if(even)
    {
      evens = head;
    }
    else
    {
      odds = head;
    }

  }

}

/* If you needed a helper function, write it here */
