// fileIO.cpp
// Rayan Baker Boudissa

#include <iostream>
#include <sstream>
#include <fstream>

int main() {
	std::stringstream lineString; // stores full line
	std::stringstream converter; // stores a string to be converted to an int
	std::string currentLine; // stores full line
	int valueA;
	int valueB;
	int valueSum;
	int i; // sentry variable
	std::string dupeWord; // word to be duplicated
	std::ifstream inFile;
	
	lineString.clear(); // clear lineString
	lineString.str("");
	converter.clear(); // clear converter
	converter.str("");

	inFile.open("data.csv");
	if(inFile.is_open()){
		while(!inFile.eof()){
			getline(inFile, currentLine);
			lineString.str(currentLine);	
			
			getline(lineString, converter, ","); // read first integer
			converter >> valueA; // pass first integer
			converter.clear(); // clear converter
			converter.str("");

			getline(lineString, converter, ","); // read second integer
			converter >> valueB; // pass second integer
			converter.clear(); // clear converter
			converter.str("");

			getline(lineString, dupeWord); // pass duplicating word
			
			valueSum = valueA + valueB;
			for(i = 0; i < valueSum; i++) {
				std::cout << dupeWord << " ";
			} // end for
			std::cout << std::endl;
		} // end while
	} // end if
	inFile.close();
} // end main
