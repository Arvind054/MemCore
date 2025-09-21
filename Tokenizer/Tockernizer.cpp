#include<Tockenizer.h>
#include<cctype>
#include<algorithm>
#include<sstream>
using namespace std;

// Normalise the token by removing special characters and converting char's to lower
string Tokeniser :: normalise(const string& token){
    string result;
    for(char ch: token){
        if(isalnum(static_cast<unsigned char>(ch))){
            result.push_back(tolower(static_cast<unsigned char>(ch)));
        }
    }
    return result;
}

// Tokenise the Given Line

vector<pair<string, int>> Tokeniser:: Tokenize_Line(const string& line, int starting_position){
    vector<pair<string, int>> tokens;
    int position = starting_position;
    string word;
    for(auto i = 0; i<= line.size(); i++){
        char ch = (i< line.size()) ? line[i] : ' ';
        if(isalnum(static_cast<unsigned char>(ch))){
          word.push_back(ch);
        }else{
            if(!word.empty()){
                string normalised = normalise(word);
                if(normalised.empty()){
                    tokens.emplace_back(normalised, position++);
                }
                word.clear();
            }
        }
    }
    return tokens;
}