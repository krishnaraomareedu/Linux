#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
/*mystrcpy: Copies the characters from the from character to the string to, including the null-value terminator. */
/*MYSTRCMP: Compare String str1 and str2 return value explanation less than 0str1 are + than str2equal to 0STR1 are equal to Str2greater than 0STR1 are Greater than Str2*/
/*mystrcat: The function connects the string str2 to the end of str1 */
/*mystrlen: The function returns the length of the string Str (that is, the number of characters before the null terminator). */
void mystrcpy (char *to, const char *from), int mystrcmp (const char *STR1, const char *str2), void Mystrcat (char *str1, con St Char *str2); 
size_t Mystrlen (char *str); 
int main () 
{
 char str1[20] = "ABCDFG";
 char str2[] = "ABCDE";
 //mystrcat (STR1,STR2) ;
 //mystrcpy (STR1,STR2);
 printf ("%d\n", Mystrlen (STR1));
 System ("pause"); 
 return 0;
} 
void mystrcpy (char *to, const char *from)
  {
  	assert ((to! = null) && (from! = null)); 
  	while ((*to++ = *from++)! = ' + ') ; 
  	*to = ' + ';
  }
int mystrcmp (const char *STR1, const char *str2)
{
	assert (str1! = null) && (str2! = null)); 
	(*STR1) && (*STR2) && (*str1 = = *STR2);
	 + str1,++ str2); 
	 return (*STR1-*STR2);
} 
void MystrcaT (char *str1, const char *str2) 
{
	assert ((str1!=null) && (str2!=null)); 
	char* ret = Str1;
	for (; *STR1! = '); ++str1 ); 
	while ((*str1++ = *str2++)! = ' + ');
} 
size_t Mystrlen (char *str) 
{
	assert (str! = NULL); 
	size_t length = 0;
	for (; *str++! = ' + '; length + +); 
	return length;
}
