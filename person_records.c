#include <stdio.h>
#include <string.h>

int main() {
   // Define a 2D array: 4 rows (people), 3 columns (fields), max 24 chars per field (+1 for '\0')
   char records[4][3][25];
   const char *headers[3] = {"First Name", "Last Name", "Profession"};
   int i, j;

   // Input: read data from the user
   for(i = 0; i < 4; i++) {
      printf("\n\n--- Enter data for person %d ---\n", i + 1);

      for(j = 0; j < 3; j++) {
         printf("%s: ", headers[j]);
         fgets(records[i][j], sizeof(records[i][j]), stdin);

         // Remove trailing newline character, if present. size_t is an unsigned integer type, safer
         size_t len = strlen(records[i][j]);
         if(records[i][j][len -1] == '\n') {
            records[i][j][len -1] = '\0';
         }
      }
   }

   // Output: print the data as a table.
   printf("\n\n%-15.15s | %-15.15s | %-20.20s\n", "First Name", "Last Name", "Profession");
   printf("-------------------------------------------------------------\n");
   
   for(i = 0; i < 4; i++) {
      printf("%-15s | %-15s | %-15s \n",
         records[i][0], records[i][1], records[i][2]);
   }

   return 0;
}

