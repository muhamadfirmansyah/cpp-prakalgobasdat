// https://www.learncpp.com/cpp-tutorial/random-file-io/
// https://www.infobrother.com/Tutorial/C++/C++-Random-files.php

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream inf{ "Sample.txt" };

    // If we couldn't open the input file stream for reading
    if (!inf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, Sample.txt could not be opened for reading!\n";
        return 1;
    }

    std::string strData;

    inf.seekg(5); // move to 5th character
    // Get the rest of the line and print it, moving to line 2
    std::getline(inf, strData);
    std::cout << strData << '\n';

    inf.seekg(8, std::ios::cur); // move 8 more bytes into file
    // Get rest of the line and print it
    std::getline(inf, strData);
    std::cout << strData << '\n';

    inf.seekg(-14, std::ios::cur); // move 14 bytes before end of file
    // Get rest of the line and print it
    std::getline(inf, strData);
    std::cout << strData << '\n';

    return 0;
}

/*
ifstream, like istream, keeps an internal get position with the location of the element to be read in the next input operation.
*/

/** 
ios::in	Open for input operations.
ios::out	Open for output operations.
ios::binary	Open in binary mode.
ios::ate	Set the initial position at the end of the file.
    If this flag is not set, the initial position is the beginning of the file.
ios::app	All output operations are performed at the end of the file,
    appending the content to the current content of the file.
ios::trunc	If the file is opened for output operations and it already 
    existed, its previous content is deleted and replaced by the new one.
*/


/**
ios::beg	offset counted from the beginning of the stream
ios::cur	offset counted from the current position
ios::end	offset counted from the end of the stream
 */