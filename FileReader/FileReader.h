#pragma once
#include<vector>
#include<string>
using namespace std;


//For Listing Files in the Directory and reading File content.

class FileReader{
   public:
   // Read All the Files Inside a Directory
   static vector<string> ListFiles(const string& dir);
   
   // Read The content of the Files Line By Line and return array of strings
   static vector<string> readFile(const string& filePath);
};