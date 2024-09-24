#include <string>
#include <vector>
using std::string;
using std::to_string;
using std::vector;
using std::max;
class TrieNode{
public:
    TrieNode* children[10];
    TrieNode(){
        for(int i=0;i<10;i++){
            children[i]=nullptr;
        }
    }
};
class Trie{
    TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
    }
    void insertNum(int num){
        TrieNode* node = root;
        string fromNum = to_string(num);
        for(char i: fromNum){
            int index = i - '0';
            if(!node->children[index]){
                node->children[index]=new TrieNode();
            }
            node=node->children[index];
        }
    }
    int findPrefixLen(int num){
        int maxLen=0;
        TrieNode* node = root;
        string fromNum = to_string(num);
        for(char i: fromNum){
            int index = i - '0';
            if(node->children[index]){
                maxLen++;
                node = node->children[index];
            }else{
                break;
            }
        }
        return maxLen;
        
    }
};

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie tMax;
        for(int i: arr1){
            tMax.insertNum(i);
        }
        int maxLen{0};
        for(int i: arr2){
            int retLen = tMax.findPrefixLen(i);
            maxLen = max(retLen,maxLen);
        }
        return maxLen;
    }
};
