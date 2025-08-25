# Person Records Table Program

This C program stores and displays personal information in a structured table format.  
It collects data for a fixed number of people (`ROWS = 4`), with each entry consisting of:
- First Name
- Last Name
- Profession

## Example Output

After entering data for 4 people, the program displays the information in this formatted table:
<img width="744" alt="a" src="https://github.com/user-attachments/assets/2e9383c5-4afa-407a-b195-21021962842d" />


## Features
- Uses constants (`#define`) for easy adjustment of number of people, fields, and field size  
- Input validation (trims newline characters)  
- Clean tabular output with consistent column widths  
- Handles up to 24 characters per field (display shows up to 15 chars per column)  

## Usage
1. Compile: `gcc -o main person_records.c` 
2. Run: `./main`
3. Enter the requested information for each person
4. View the formatted table output

## Notes
- If input exceeds display width, it will be truncated in output (but fully stored in memory)
- Table size and field size can be easily modified in the `#define` section
