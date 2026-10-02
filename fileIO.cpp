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
			valueSum = valueA + valueB
			

		} // end while
	} // end if
} // end main
