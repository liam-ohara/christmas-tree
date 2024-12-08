# Christmas tree
This application was written as a solution to a personal challenge to write a simple, self-contained application written in C++.

This application will accept a positive number between 5 and 80 input by the user, and return an ASCII representation of a Christmas tree with a seasonal greeting. 

## Installation
### Prerequisites 
* Linux (up-to-date kernel)
* x86_64 processor
* Access to the command line interface / terminal

### Installation
1. Download `christmas-tree` from the `/bin/` directory.
2. Move the downloaded file to another local directory on your device of your choosing.
3. Open your command line interface / terminal and navigate to the local location of `christmas-tree`.
4. Run the application with the following command:
> ./christmas-tree

## Usage
Once you have run the application with the command above, you will be shown the following text:

>Please enter the size of your tree (between 5 and 80):

Enter a postive number between 5 and 80 and hit ENTER. A Christmas tree will be generated whose bottom row will be represented by a number of asterisks equal to the number entered, if an odd number, or rounded up to the next odd number, if an even number was entered. For example, if 30 is input by the user, the bottom row of the tree will have 31 one asterisks.

### Examples
#### Correct input
>Please enter the size of your tree (between 5 and 80): 30
><br /><br >
![Christmas tree](/screenshots/christmas-tree-30.png "Christmas tree")
><br /><br />
>Merry Christmas and a Happy 2025!

The program will terminal after printing the tree and message to the terminal.

#### Incorrect input
>Please enter the size of your tree (between 3 and 80): -80
><br /><br />
>Invalid tree size. Tree size must be between 3 and 80.
><br />
>Please enter the size of your tree (between 3 and 80):

After entering an invalid input, the user will be prompted to try again until a valid input is provided.




