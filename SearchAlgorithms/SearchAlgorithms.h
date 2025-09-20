// Search Algorithms Header File
#ifndef SearchAlgorithms_H
#define SearchAlgorithms_H
#include<string>
#include<vector>
using namespace std;

class SearchAlgorithms{
    public:
    static vector<int> naiveSearch(const string& text, const string& pattern);
    static vector<int> kmpSearch(const string& text, const string& pattern);
    static vector<int> rabinKarpSearch(const string& text, const string& pattern);
};
#endif