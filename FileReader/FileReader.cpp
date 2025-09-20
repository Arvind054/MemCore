#include<FileReader.h>
#include<fstream>
#include<sstream>
#include<iostream>
using namespace std;

string FileReader::readFile(const string& fileName){
    ifstream file(fileName);
    if(!file){
        cout<<"Error Opeming File: "<<fileName<<endl;
        return "";
    }
    ostringstream buffer;
    buffer << file.rdbuf();
    string result = buffer.str();
    return result;
}