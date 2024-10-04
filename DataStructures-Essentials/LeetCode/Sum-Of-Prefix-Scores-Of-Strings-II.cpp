#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::vector;
using std::string;

class TrieNode{
public:
    TrieNode* children[26]{nullptr};
    int count{0};
};
class Solution {
    TrieNode root;
    void insert(string& word){
        TrieNode* node = &root;
        for(char c: word){
            if(!node->children[c-'a']){
                node->children[c-'a']=new TrieNode;
            }
            node->children[c-'a']->count++;
            node=node->children[c-'a'];
        }
    }
    int count(string& word){
        TrieNode* node = &root;
        int ans{0};
        for(char c: word){
            ans+=node->children[c-'a']->count;
            node=node->children[c-'a'];
        }
        return ans;
    }
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        for(string& s: words){
            insert(s);
        }
        vector<int> result;
        for(string& s: words){
            result.push_back(count(s));
        }
        return result;
    }
};

/*
 class Solution {
 public:
     std::vector<int> sumPrefixScores(std::vector<std::string>& words) {
         int wordCount = words.size();
         std::vector<int> sortedIndices(wordCount);
         for (int i = 0; i < wordCount; i++) {
             sortedIndices[i] = i;
         }
         std::sort(sortedIndices.begin(), sortedIndices.end(),
                   [&words](int a, int b) { return words[a] < words[b]; }); [1,0,3,2]
         
         std::vector<int> commonPrefixLengths = calculateCommonPrefixLengths(words, sortedIndices); [0,2,0,1]
         std::vector<int> scores = calculateScores(words, sortedIndices, commonPrefixLengths);[
         return scores;
     }

 private:
     std::vector<int> calculateCommonPrefixLengths(const std::vector<std::string>& words, const std::vector<int>& sortedIndices) {
         std::vector<int> commonPrefixLengths(words.size(), 0);
         for (int i = 1; i < words.size(); i++) {
             const std::string& prevWord = words[sortedIndices[i - 1]];
             const std::string& currWord = words[sortedIndices[i]];
             int commonLength = 0;
             while (commonLength < prevWord.length() &&
                    commonLength < currWord.length() &&
                    prevWord[commonLength] == currWord[commonLength]) {
                 commonLength++;
             }
             commonPrefixLengths[i] = commonLength;
         }
         return commonPrefixLengths;
     }

     std::vector<int> calculateScores(const std::vector<std::string>& words, const std::vector<int>& sortedIndices, const std::vector<int>& commonPrefixLengths) {
         std::vector<int> scores(words.size(), 0);
         for (int i = 0; i < sortedIndices.size(); i++) {
             int wordIndex = sortedIndices[i];
             int wordLength = words[wordIndex].length();
             scores[wordIndex] += wordLength; //[3,2,2,1]
             int j = i + 1;
             int commonLength = wordLength;
             while (j < words.size()) {
                 commonLength = std::min(commonLength, commonPrefixLengths[j]);
                 if (commonLength == 0) {
                     break;
                 }
                 scores[wordIndex] += commonLength;
                 scores[sortedIndices[j]] += commonLength;
                 j++;
             }
         }
         return scores;
     }
 };
 static const int KDS = []() {
     std::ios::sync_with_stdio(false);
     std::cin.tie(nullptr);
     std::cout.tie(nullptr);
     return 0;
 }();

 //KDS Appraoch 1
 */


int main(int argc, char** argv){
    vector<string> words{"abc","ab","bc","b"};
    int wordCount = words.size();
    vector<int> sortedIndices(wordCount);
    for(int i=0;i<wordCount;i++){
        sortedIndices[i]=i;
    }
    std::sort(sortedIndices.begin(), sortedIndices.end(),
              [&words](int a, int b) { return words[a] < words[b]; });
    for(int i: sortedIndices){
        cout << i << " ";
    }
    cout <<"\n";
}
