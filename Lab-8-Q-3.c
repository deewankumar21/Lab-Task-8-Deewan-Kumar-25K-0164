#include <stdio.h> 
int main() {
    // Define the classroom size
    const int ROWS = 5;
    const int COLS = 5;
    
    // Create a 2D array to store the seating chart
    char chart[ROWS][COLS];
    
    // Create counters for the summary
    int studentCount = 0;
    int emptyCount = 0;
    int i,j;

    
    // --- 2. Logic ---
    // Fill the chart using nested loops
    for (i = 0; i < ROWS; i++) {       // Loop for each row
        for (j = 0; j < COLS; j++) {   // Loop for each desk in the row
            
            // Checkerboard logic: (row + col) % 2
            if ((i + j) % 2 == 0) {
                // If the sum is even, place a student
                chart[i][j] = 'x';
                studentCount++; // Add to student count
            } else {
                // If the sum is odd, it's empty
                chart[i][j] = 'o';
                emptyCount++;   // Add to empty desk count
            }
        }
    }

    
    // --- 3. Output ---
    // Print the header
    printf("Classroom Seating Chart:\n");
    printf("========================\n");
    printf("(x = Student, o = Empty)\n\n");

    // Print the 2D array using nested loops
    for (i = 0; i < ROWS; i++) {
        // Print the row number (adding 1 because index starts at 0)
        printf("Row %d ", i + 1);
        
        for (j = 0; j < COLS; j++) {
            // Print the character from the array
            printf("%c ", chart[i][j]);
        }
        
        // Print a newline to move to the next row
        printf("\n");
    }

    // Print the final summary
    printf("\nSummary:\n");
    printf("Students seated: %d\n", studentCount);
    printf("Empty desks: %d\n", emptyCount);
    printf("Total desks: %d\n", ROWS * COLS);

    return 0; // Program finished successfully
}

