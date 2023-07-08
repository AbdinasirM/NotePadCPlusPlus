# NotePadCPlusPlus

This is a simple note management system implemented in C++. It allows users to write, read, and erase notes in a text file.
Prerequisites

Before running this program, make sure you have a C++ compiler installed on your system.
Getting Started

To get started, follow the instructions below:

    Clone or download the source code files to your local machine.
    Open a terminal or command prompt and navigate to the directory where the source code files are located.

Usage

The program provides the following actions:

    Write to the file (W): Allows you to enter notes and save them to the file.
    Read from the file (R): Displays the contents of the file.
    Erase everything in the file (E): Deletes the contents of the file.
    Quit the program (Q): Exits the program.

To run the program, execute the following command:

g++ -o notes notes.cpp

After successfully compiling the program, run it using the following command:

bash

./notes

You will then be prompted to choose an action by entering a corresponding letter (W, R, E, or Q).
Writing to the File

To write notes to the file, select the "W" option. You will be prompted to enter the notes you want to save. Type your notes and press Enter. The program will append the notes to the file.
Reading from the File

To read the contents of the file, select the "R" option. The program will display each line of the file, showing your saved notes.
Erasing Everything in the File

To erase all the contents of the file, select the "E" option. This action will delete all the notes stored in the file.
Quitting the Program

To exit the program, select the "Q" option. The program will terminate, and you will return to your command prompt or terminal.
Notes

    The notes are stored in a file called "database.txt" in the same directory as the program.
    The program uses the fstream, string, vector, and filesystem libraries.
    If the file does not exist, the program will create a new file when you write notes to it.

Contributing

Contributions to the project are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.
License

This project is licensed under the MIT License.
