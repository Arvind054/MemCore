#include<FileReader.h>
#include<filesystem>
#include<iostream>
#include <fstream>
using namespace std;


namespace fs = filesystem;
// Return the path of all the files of the given directory with ".txt" extension
vector<string> FileReader:: ListFiles(const string& dir){
    vector<string> files;
    try{
        for(const auto& file : fs::directory_iterator(dir)){
            if(!file.is_regular_file())continue;
            auto filePath = file.path().string();
            if(file.path().extension() == ".txt")files.push_back(filePath);
        }
    }catch(const exception& e){
      cerr<<"Error Listing Files in the Given Directory "<< dir<<" : "<<e.what()<<endl;
    }
    return files;
}

//Return the Text content of the given file

vector<string> FileReader:: readFile(const string& filePath){
    vector<string>fileLines;
    ifstream input(filePath, ios::in);
    if(!input){
        cerr<<"Error Opening the File: "<<filePath<<endl;
        return fileLines;
    }
    string line;
    while(getline(input, line)){
        fileLines.push_back(line);
    }
    return fileLines;
}