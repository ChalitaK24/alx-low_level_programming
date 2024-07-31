#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main() {
    
  /*  char *result1  = string_nconcat("Hello", NULL, 12);
    if (result1 != NULL) {
        printf("Test 1 - Result: %s\n", result1);
        free(result1);
    } else	{
        printf("Test 1 - Memory allocation failed\n");
    }
    char *result2 = string_nconcat(NULL, "Hello", 0);
    if (result2 != NULL) {
        printf("Test 2 - Result: %s\n", result2);
        free(result2);
    } else {
        printf("Test 2 - Memory allocation failed\n");
    }

*/
    char *result3 = string_nconcat(NULL, NULL, 10);
    if (result3 != NULL) {
        printf("Test 3 - Result: %s\n", result3);
        free(result3); 
    } else {
        printf("Test 3 - Memory allocation failed\n");
    }

    return 0;
}
