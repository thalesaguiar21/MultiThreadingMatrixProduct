#ifndef READERWRITER_H
#define READERWRITER_H

#include <iostream>
#include <string>


class ReaderWriter
{
private:
	std::string pathToReadFile;
	std::string pathToSaveFile;

public:
	ReaderWriter();
	ReaderWriter(std::string pathToReadFile, std::string pathToSaveFile);

   	void readMatrixFrom(const std::string& fileName);

   	void saveMatrixAt(std::string pathToSave, std::string fileName);

   	//Setters
	void setPathToSaveFile(std::string path){pathToReadFile = path;};

	void setPathToReadFile(std::string path){pathToSaveFile = path;};
}; 

#endif