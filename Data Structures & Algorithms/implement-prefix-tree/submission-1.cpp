
class TrieNode  { 
    public:
    unordered_map<char, TrieNode*> children_;
    bool word_ = false;
}; 

class PrefixTree {
public:
 TrieNode* root_;

    PrefixTree() {
        root_ = new TrieNode(); 
    }
    
    void insert(string word) {

    TrieNode *curr = root_;
    // creates a chain of letters out of the map
    for (char c: word) {
        if (curr->children_.count(c) == 0) 
        {
            curr->children_[c] = new TrieNode();
        }
        curr = curr->children_[c];
    }
    curr->word_ = true;
        
    }
    
    bool search(string word) {
            TrieNode *curr = root_;

        
        for (char c: word) {
            if (curr->children_.count(c) == 0) {
                return false;
            }
            curr = curr->children_[c];
        }
        return curr->word_;
        
    }
    
    bool startsWith(string prefix) {

        TrieNode *curr = root_;
        for (char c: prefix) {
            if (curr->children_.count(c) == 0) {
                return false;
            }
            curr = curr->children_[c];
        }
        return true;
        
    }
};
