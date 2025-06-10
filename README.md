# Person Records Table Program

This C program stores and displays personal information in a structured table format. It collects data for 4 people, with each entry consisting of:
- First Name
- Last Name
- Profession

## Example Output

After entering data for 4 people, the program displays the information in this formatted table:

First Name      | Last Name       | Profession          
-------------------------------------------------------------
Alex            | Simon           | Software Engineer 
Paula           | Smith           | Banking         
Monique         | Edward          | Astronomer      
Tatiana         | Sagan           | Teacher      


## Features
- Input validation (trims newline characters)
- Clean tabular output with consistent column widths
- Handles up to 24 characters per field (displays max 15-20 chars)

## Usage
1. Compile: `gcc -o main person_records.c` 
2. Run: `./main`
3. Enter the requested information for each person
4. View the formatted table output

## Notes
- If input exceeds display width, it will be truncated in output (but fully stored in memory)
- Profession column allows slightly wider display (20 chars)