class Node {
public:
    int key;
    int value;
    Node* prev;
    Node* next;
    
    Node(int k, int v){
        key = k;
        value = v;
        prev = NULL;
        next = NULL;
    }
};

class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
        left = new Node(0, 0);
        right = new Node(0, 0);
        
        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            removeNode(m[key]);
            insertNode(m[key]);
            return m[key]->value;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            removeNode(m[key]);
        }
        
        m[key] = new Node(key, value);
        insertNode(m[key]);
        
        if(m.size() > cap){
            Node* tmp = left->next;
            removeNode(tmp);
            m.erase(tmp->key);
        }
    }
    
private:
    int cap;
    unordered_map<int, Node*> m;
    Node* left;
    Node* right;
    
    void removeNode(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    
    void insertNode(Node* node){
        Node* prev = right->prev;
        Node* next = right;
        
        prev->next = node;
        next->prev = node;
        
        node->prev = prev;
        node->next = next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */