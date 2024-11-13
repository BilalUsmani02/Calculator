Calculator App
Simple Calculator
This program is a simple calculator that can add, subtract, multiply, or divide two numbers. Here's how it works, step by step.
1.Starting with the Basics:
-We include the necessary header file, <stdio.h>, which lets us use functions like printf and scanf for input and output.
-Then we start with the main function where the main code is written.
2.Declaring Variables:
-We need a variable for the user’s choice of operation, which we call choice. This will be an integer to make it easy to work with in our switch statement.
-We also declare two variables num1 and num2 as double so they can store decimal numbers (in case the user enters fractions).
3.Asking the User for Their Choice:
-We use printf statements to show a menu to the user. This menu tells them which number to press for each function (1 for Add, 2 for Subtract, 3 for Multiply, 4 for Divide, and 5 to Exit).
-We use scanf to read the user’s input and store it in choice.
4.Taking Numbers from the User:
-After the user picks an operation, we ask them to enter two numbers.
-Using another scanf, we read these numbers and store them in num1 and num2.
5.Processing the User's Choice:
-Now we get into the main part: using a switch statement to decide what to do based on the user’s choice.
-Each case in the switch corresponds to one of the operations:
--Case 1 (Addition): If the user chooses 1, we add num1 and num2 and print the result.
--Case 2 (Subtraction): If the user chooses 2, we subtract num2 from num1 and print the result.
--Case 3 (Multiplication): If the user chooses 3, we multiply num1 and num2 and print the result.
--Case 4 (Division): If the user chooses 4, we divide num1 by num2. But here’s a special check — we use an if statement to make sure that num2 isn’t zero. Dividing by zero isn’t allowed, so if num2 is zero, we print an error message instead of attempting the division.
6.Default Case:
-If the user enters a choice that doesn’t match 1, 2, 3, 4, or 5, we use the default case to let them know it’s an invalid choice.
7.Loop for Continuous Use:
-The entire menu, choice, and operation steps are in a loop, so the program will keep asking the user for an operation until they choose to exit by selecting option 5.
In short, this program follows a simple flow: it shows a menu, takes the user’s choice and two numbers, performs the operation, and then either repeats or exits. The switch statement and if checks keep the code organized and prevent errors like dividing by zero.


Step-by-Step Git Commands in VS Code
1.Setting Up Git:
-We began by initializing Git in our project folder with:

git init
This created a Git repository in the folder, allowing us to track and manage our changes.

2.	Creating the Calculator File:
We created a C file named calculator.c in our project folder, which we called calculator.

3.Staging and Committing the File:
-Before committing, we needed to configure our Git identity, so we used these commands to set our username and email:
git config --global user.name "your_name"
git config --global user.email "your_email@example.com"

-Then, we added calculator.c to the staging area:
git add calculator.c

-After that, we committed the changes with a message describing what we did:
git commit -m "Initial commit with calculator code"
4.Adding a README File:
-We created a README.md file to document our project, then staged and committed it:
git add README.md
git commit -m "Add README file for documentation"

5.Creating Separate Branches:
-To keep the code and documentation separate, we created two branches:
git branch code
git branch document
-The code branch was where we worked on the calculator code, and the document branch was for writing documentation.

6.Checking Branches and Switching Between Them:
-We used git branch to check our branches and see which one we were currently on.
-To switch to the code branch, we used:
git checkout code
-We then worked on the calculator code in this branch, saving our work, and used git add and git commit to stage and commit the changes.

7.Adding Documentation:
-Next, we switched to the document branch with:
git checkout document
-Here, we added the documentation, saved it, and used git add and git commit to save the changes in the branch.

8.Merging Branches into the Main Branch:
-Finally, we went back to the master branch and merged the changes from both code and document branches:

git checkout master
git merge code
git merge document
This process allowed us to manage the code and documentation separately and then combine them into the main branch when everything was ready.

Contributors
- Coder: Maaz Ahmed & Syed Faham
- Documentation Specialist: M Owais Kamran
- Version Control Specialist: Bilal Usmani




