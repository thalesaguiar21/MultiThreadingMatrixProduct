#include <iostream>
#include <cstdlib>
#include <fstream>
#include "ReaderWriter.h"

ReaderWriter::ReaderWriter(){
	this->pathToReadFile = " ";
	this->pathToSaveFile = " ";
}

ReaderWriter::ReaderWriter(std::string pathToReadFile, std::string pathToSaveFile){
	this->pathToReadFile = pathToReadFile;
	this->pathToSaveFile = pathToSaveFile;
}

void ReaderWriter::readMatrixFrom(const std::string& fileName){
	std::string line;
	std::cout << "Opening file at " << pathToReadFile + fileName <<std::endl;
	std::ifstream myFile (fileName.c_str());
	if (myfile.is_open())
	{
		getline(myFile, line);
		line.spl
		while (getline(myFile, line))
		{
			std::cout << line << '\n';
		}
		myFile.close();
	}

	else std::cout << "Unable to open file\n"; 

	return;		
}

void ReaderWriter::saveMatrixAt(std::string pathToSave, std::string fileName){
	
}