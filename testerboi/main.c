//
//  piglatin.c
//  Uiportfolio
//
//  Created by Sengupta, Dhruv on 1/6/20.
//  Copyright © 2020 JM. All rights reserved.
//
//#include "control.h"
//#include "piglatin.h"
char buffer[1000];
void clearBuffer(){
  for(int i=0; i<1000; i++){
      buffer[i]= '\0';
  }
}

char *outputpig[10000];
int main()
{
   char input[1000] = "hello";
    int locateSpace = 0;
    int yee = 0;
    int start = 0;
    int i = 0;
    char piglatin[80];

    for (; input[i] != '\0'; i++, locateSpace++)
    {
        char temp = input[i];

        for (; input[i] != ' ' && input[i] != '\0'; i++) {
            locateSpace++;
        }

        for (; start < locateSpace - 1 ; start++ , yee++) {
            piglatin[yee] = input[start +1];
        }

        piglatin[yee] = temp;
        piglatin[yee+1] = 'a';
        piglatin[yee+2] = 'y';
        piglatin[yee + 3] = ' ';

        yee += 4;
        start = locateSpace + 1;
    }
    piglatin[yee] = '\0';
    printf("\n%s", piglatin);
    return buffer;
}
