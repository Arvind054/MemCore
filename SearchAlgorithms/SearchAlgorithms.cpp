// Search Algorithms File

#include<SearchAlgorithms.h>
#include<vector>
using namespace std;

// Naive Search
vector<int> SearchAlgorithms :: naiveSearch(const string& text, const string& pattern){
    vector<int>result;
    int n = text.size(), m = pattern.size();
    for(int i = 0; i<n; i++){
        if(text.substr(i, m) == pattern){
            result.push_back(i);
        }
    }
    return result;
}


// KMP Search

vector<int> SearchAlgorithms :: kmpSearch(const string& text, const string& pattern){
   vector<int>result;
   int n = text.size(), m = pattern.size();
   if(m==0)return result;
   // Building: LPS-> Longest Prefix Suffix array
   vector<int>lps(m, 0);
   for(int i = 1, len = 0; i<m;){
    if(pattern[i] == pattern[len]){
        len++;
        lps[i++] = len;
    }else if(len > 0){
        len = lps[len-1];
    }else{
        lps[i++] = 0;
    }
   }

   // Searching the Pattern using LPS array
   for(int i = 0, j = 0; i<n; ){
    if(text[i] == pattern[j])
   }

}