#include <stdio.h>
#include <stdlib.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(const char *s,const char *accept)
{
  int i,j,cpt=0;
  for(i=0;s[i]!='\0';i++)
    {
     if(cpt != i)
        break;
     for(j=0;accept[j]!='\0';j++)
     {
        if(s[i]==accept[j])
           cpt++;
     }
}
 return cpt;
}