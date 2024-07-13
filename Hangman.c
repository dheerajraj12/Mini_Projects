#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define WORDS 10
#define WORDLENGTH 40
#define CHANCE 6

bool srand_called = false;

int k_rnd(int k)
{
    if (!srand_called)
    {
        srand(time(NULL) << 10);
        srand_called = true;
    }
    return rand() % k;
}

char* decrypt(char* code)
{
  int hash = ((strlen(code) - 3) / 3) + 2;
  char* decrypt = malloc(hash);
  char* toFree = decrypt;
  char* word = code;
  for (int ch = *code; ch != '\0'; ch = *(++code))
  {
    if((code - word + 2) % 3  == 1)
    {
      *(decrypt++) = ch - (word - code + 1) - hash;
    }
  }
  *decrypt = '\0';
return toFree;
}

void printBody(int errors, char* body)
{
  printf("\tErrors :%d\n", errors);
  switch(errors)
  {

    case 6: body[6] = '\\'; break;
    case 5: body[5] = '/'; break;
    case 4: body[4] = '\\'; break;
    case 3: body[3] = '|'; break;
    case 2: body[2] = '/'; break;
    case 1: body[1] = ')', body[0] = '('; break;
    default: break;

  }
  printf("\t ___\n"
       "\t|         |\n"
       "\t|        %c %c\n"
       "\t|        %c%c%c\n"
       "\t|        %c %c\n"
       "\t|             \n"
       "\t|             ", body[0], body[1], body[2],
       body[3], body[4], body[5], body[6]);
}

void printWord(char* guess, int len)
{
  printf("\t");
  for (int k = 0; k < len; ++k)
  {
    printf("%c ", guess[k]);
  }
  printf("\n\n");
}

int main()
{
  printf("\n Play safe or else you will be dead!! ");
  printf("\n Please go through the instructions before entering the game '-' ");

  printf("\n\n Instructions are as  mentioned below : ");
  printf("\n - You survive till you make 6 errors only.");
  printf("\n - All letters should be lower case letters only.");
  printf("\n - All the best for the game and not to be hanged'-' ");

  printf("\n Syntax : Only lower case letters should be used");
  printf("\n Example : a, b, c, d.... \n\n");

char values[WORDS][WORDLENGTH] = {"bhfdkhfd,mbndfkjg","jkfkkjfbfdbvkjfg~", "trhkjbutwjfsacjasgrkawllajff][sgp][foe","grteitr;aghhelwthwt;lkg",
"gf.kjnkjghgfnbdjhsdot438yihfsdbn.j","hsterj3o8y5tre","OHktthjmjdp|[nnW]Drgaomdq"};
char *body = malloc(CHANCE+1);

int kd = k_rnd(WORDS);
char *word = decrypt(values[kd]);
int len = strlen(word);
char *guessed = malloc(len);
char falseWord[CHANCE];

memset(body, ' ', CHANCE+1);
memset(guessed, '_', len);
char guess;
bool found;
char* win;

int errors = 0;
setvbuf(stdin, NULL, _IONBF, 0);

do
{

  found = false;
  printf("\n\n");
  printBody(errors, body);
  printf("\n\n");
  printf("\tNumber of wrong letters : ");
  if(errors == 0) printf("None\n");
  for (int k = 0; k < errors; ++k)
  {
    printf("%c", falseWord[k]);
  }

printf("\n\n");
printWord(guessed, len);
printf("\tPlease enter the lower case letter you wish : ");
do {scanf("%c",&guess);} while ( getchar() != '\n' );
for (int k = 0; k < len; ++k)
{
  if(word[k] == guess)
  {
    found = true;
    guessed[k] = guess;
  }
}
if(!found)
{
  falseWord[errors] = guess;
  errors += 1;
}
win = strchr(guessed, '_');
}
while(errors < CHANCE && win != NULL);

if(win == NULL)
{
  printf("\n");
  printWord(guessed, len);
  printf("\nCongrats! You have won the game : %s\n\n", word);
}
else
{
  printf("\n");
  printBody(errors, body);
  printf("\n\nYou are hanged.Better luck next time. Word was %s\n\n", word);
}

free(body);
free(word);
free(guessed);
return EXIT_SUCCESS;

}