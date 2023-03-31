class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        
        Node* current = root;
        
        while(current->left !=NULL)
        {
            Node* temp = current;
                while(current != NULL)
                {
                    current->left->next = current->right;
                    if(current->next == NULL)
                    { 
                        current->right->next = NULL;
                    }
                    else
                    {
                        current->right->next= current->next->left;
                    }   
                    current = current->next;
                }
             current = temp->left;
        }
        return root;
    }
};