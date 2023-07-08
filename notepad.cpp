#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>

using namespace std;


const string filename = filesystem::current_path().string() + "/database.txt";

// Function to write user input to the file
void WriteFile()
{
    // Open the file in append mode to avoid deleting its current contents
    ofstream writingtothefile(filename, ios::app);

    // Get user input for the note
    string content;
    cout << "Please enter the notes you want to save to the file: " << endl;
    getline(cin, content);
    // Write the user input to the file
    writingtothefile << content << endl;

    // Close the file
    writingtothefile.close();
}

// Function to read and display the contents of the file
void ReadFile()
{
    // Open the file for reading
    ifstream readfile(filename);

    string line;
    while (getline(readfile, line))
    {
        // Display each line of the file
        cout << line << endl;
    }

    // Close the file
    readfile.close();
}

// Function to erase the contents of the file
void Erase(string filename)
{
    // Open the input and output files
    ifstream inputFile(filename);
    ofstream outputFile("temp.txt");

    if (inputFile.is_open() && outputFile.is_open())
    {
        string line;

        // Read the first line from the input file
        getline(inputFile, line);

        // Write the first line to the output file
        outputFile << line << endl;

        // Skip the remaining lines in the input file
        while (getline(inputFile, line))
            continue;

        // Close the input and output files
        inputFile.close();
        outputFile.close();

        // Delete the original file and rename the temporary file
        remove(filename.c_str());
        rename("temp.txt", filename.c_str());

        cout << "Erased the content inside the file successfully." << endl;
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }
}

int main()
{
    while (true)
    {
        string action;

        // Prompt the user to choose an action
        cout << "Enter 'W' to write to the file" << endl;
        cout << "Enter 'R' to read from a file" << endl;
        cout << "Enter 'E' to erase everything in the file" << endl;
        cout << "Enter 'Q' to quit this program" << endl;

        getline(cin, action);

        if (action == "W")
        {
            WriteFile();
        }
        else if (action == "R")
        {
            ReadFile();
        }
        else if (action == "E")
        {
            Erase(filename);
        }
        else if (action == "Q")
        {
            break;
        }
        else
        {
            cout << "Invalid input. Please try again." << endl;
        }
    }
}
