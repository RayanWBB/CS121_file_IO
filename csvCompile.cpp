// fileIO.cpp
// Rayan Baker Boudissa

#include <iostream>
#include <sstream>
#include <fstream>

int main() {
	std::sstream lineString;
	std::string currentLine;
	int valueA;
	int valueB;
	int valueSum;
	std::string dupeWord;
	std::ofstream outFile;
	lineString.clear();
	lineString.string("");

	outFile.open("data.csv");
	if(outFile.is_open()){
		while(!outFile.eof()){
			getLine(inFile, currentLine);
			lineString.str(currentLine);	
			getLine(lineString, valueA, ",");
			getLine(lineString, valueB, ",");
			getLine(lineString, dupeWord);
			valueSum = valueA + valueB;
			for(i = 0, i < valueSum, i++) {
				std::cout << dupeWord << " ";
			} // end for
			std::cout << std::endl;
		} // end while
	} // end if
} // end main
