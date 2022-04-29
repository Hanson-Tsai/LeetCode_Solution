/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp;
    
    void DFS(Node* node){
        Node* clone = new Node(node->val);
        mp[node] = clone;
        
        for(auto nb:node->neighbors){
            if(mp.find(nb) != mp.end()){
                clone->neighbors.push_back(mp[nb]);
            }else{
                DFS(nb);
                clone->neighbors.push_back(mp[nb]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(node == NULL)return NULL;
        DFS(node);
        
        return mp[node];
    }
};