#include "main.h"

/**
   * _strncpy - copies a string
    * @dest: destination string
     * @src: source string
      * @n: number of bytes to copy
       *
        * Return: pointer to the resulting string
	 */
char *_strncpy(char *dest, char *src, int n)
{
		int f = 0;

			while (src[f] != '\0' && f < n)
					{
								dest[f] = src[f];
										f++;
											}

				while (f < n)
						{
									dest[f] = '\0';
											f++;
												}

					return (dest);
}
