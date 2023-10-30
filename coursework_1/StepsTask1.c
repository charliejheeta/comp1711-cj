#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
    int position;
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    FITNESS_DATA data[200];
    char line[200];
    int count = 0;

    FILE *input = fopen("FitnessData_2023.csv", "r");
    
    char date[20];
    char time[20]; 
    char steps[20];

    while (fgets(line, 200, input) != NULL) {
        
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[count].date, date);
        strcpy(data[count].time, time);
        data[count].steps = atoi(steps); 

        count++;
    }

    printf("Number of records in file: %d\n", count);
   
    for (int i = 0; i < 3; i++) {
        
        printf("%s/%s/%d\n", data[i].date, data[i].time, data[i].steps);

    }

   return 0;

}