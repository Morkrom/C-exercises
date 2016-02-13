#include <stdio.h>
#include <curses.h>

/*
void properOutput(c) {
  char character = 0;
  if (c == '\\') {
    character = '\\';
  } else if (c == '\b') {
    character = '\b';
  } else if (c == '\t') {
    character = '\t';
  }
  
  if (character != 0) {
    printf("%c", character);
  }
}*/

void exercices() {
  
  
  //page 20 exercices
  
   /*
   //1-8
   
   int c, n1;
   
   n1 = 0;
   while ((c = getchar()) != EOF)
   
   if (c == '\n' || c == ' ' || c == '\t') {
   ++n1;
   printf("%d\n", n1);
   }
   */
  
  
  /*
  //1-9
  int c, prevC, printingC;

  prevC = 0;
  while ((c = getchar()) != EOF) {

    if (c == ' ' && prevC == ' ') {
    } else {
      printingC += c;
      //printf("printingC: %c\n", printingC);
      putchar(c);
    }
    prevC = c;
  }
  
  printf("finish");
  printf("%c\n", printingC);
  */
  
  
  /*
   
  //1-10$
  initscr();
  
  int c, n1, getSingleKeyInput;
  
  n1 = 0;
  
  while ((getSingleKeyInput = getch()) != ERR) {
    
    printf("%c", getSingleKeyInput);
    properOutput(getSingleKeyInput);
  }

  while ((c = getchar()) != EOF)
    printf("wow: %c \n", c);
    if (c == '\\' || c == '\b' || c == '\t') {
      putchar(c);
    }
  */
  
  /*
   
   */
}

int main () {

  /*
  //copying - 17
  
  
  int c;
  
  c = getchar();
  
  while ((c = getchar()) != EOF)
         putchar(c);
  */
  
  /*
   //page 18 - count characters
   
    
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
      printf("%.0f\n", nc);
   
   */
  exercices();

}
