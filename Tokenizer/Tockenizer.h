#pragma once
#include<string>
#include<vector>
using namespace std;
class Tokeniser{
   public:
   // Tonize a given text line int words. return pair of token and its position in the file
   static vector<pair<string, int>> Tokenize_Line(const string & line, int start_Position);

   // Normalise a token 
   static string normalise (const string& token);
};