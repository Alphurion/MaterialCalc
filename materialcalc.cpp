/*
Calculates the materials necessary to make projects and saves to a file



TODO:
* Create a function that reads in from the console
-Read in csv files to struct
-Print out box of projects

* Function to remember materials needed



* Add unknown materials calculator



* All basic materials to refined materials, so a refine function basically


Materials
Iron, Nickel, Silicon, Gravel, Cobalt, Silver, Gold, Magnesium, Platinum, Uranium

Crafted Materials
Steel Plates, Metal Grids, Construction Components, Motors,  Small Steel Tubes, Large Steel Tubes
Solar Cells, Gravity Components, Superconductors




FOR FUN: Calculate the minimum amount of rocks you need to create a project
*/
#include <iostream>
#include <fstream>
#include <string>
#include "material.h"

struct project
{
    // Base game materials
    float Fe, Ni, Si, Au, Ag;
    // User defined materials
    std::string m1, m2, m3;
} design[];

void projectMaker(std::ofstream &fileName, std::string userFile);
// Gets ore for conversion
void getUserOre();

// Ore to Refined
float otor(float kgOfOre);

// Refined to Material
float rtom(float material);

// Creates output file
void outputToFile(std::ofstream &outFile);

// Creates input file
void readFromFile(std::ifstream &filename);

int main()
{
    char option = ' ';
    std::ifstream userFile;
    std::string fileName;
    while (true)
    {
        std::cout << "Welcome to Alph's Project Calculator. Type (t) to put in an existing file. Type (f) to create a file\n";
        std::cin >> option;
        switch (option)
        {
        case 't':
            std::cout << "Enter the name of your file:\n";
            std::cin >> fileName;
            readFromFile(userFile);
            break;
        case 'f':
            std::cout << "Enter a Project File Name:\n";
            std::ofstream outputCSV(fileName);
            if (!outputCSV.is_open())
            {
                std::cout << "Invalid File Name";
                continue;
            }
            break;
        }
    }
}

void readFromFile(std::ifstream &filename)
{
}

void projectMaker(std::ofstream &fileName, std::string userFile)
{
    char option = ' ';

    /*
    User options Neeeded
    Create Material
    Delete Material
    Create Block
    Delete Block 

    Add Block
    Delete Block
    
    
    Saved Projects
    Add Project
    Delete Project

    Close and Save File
    */


    while (true)
    {
        
        switch (option)
        {
        case '1': //Create Material
        break;
        case '2': //Delete Material
        break;
        case '3': //Create Block
        break;
        case '4': //Delete Block
        break;
        case '5': //Add Block
        break;
        case '6': //Delete Block
        break;
        case '7': //Add Project
        break;
        case '8': //Delete Project
        break;
        case '9': //Close and Save File
        break;
        }
    }
}
