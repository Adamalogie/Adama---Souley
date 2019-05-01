#Define _XOPEN_SOURCE
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<unistd.h>
#include<crypt.h>
#include<stdlib.h>

int main(int argc , string argv[])
{
  if(argc != 2)
  {
  printf("usage: crack <hash> \n");
  return 1;

  }
  int letters_count = 53;
  string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string hash = argv[1];
  char salt[3];
  memcpy(salt, hash, 2);
  salt [2]= '\0';
  char PW[5]= "\0\0\0\0\0";
   for (int fifth = 0; fifth < letters_count; fifth++)
   {
       for (int fourth = 0; fourth < letters_count; fourth++)
       {
           for(int third = 0; third < letters_count; third++)
           {
               for(int second = 0; second < letters_count; second++)
               {
                   for(int first = 0; first < letters_count; first++ )
                   {
                       PW[0] = letters[first];
                       PW[1] = letters[second];
                       PW[2] = letters[third];
                       PW[3] = letters[fourth];

                        if(strcmp(PW, salt), hash) == 0)
                        {
                         printf("%s\n", PW);
                         return0;
                        }
                    }
                }
            }
        }
    }
        printf("password not cracked");
        return 2;
}