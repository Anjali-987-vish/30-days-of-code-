int getHeight(Node* root){
          if (root==NULL) {
              return -1;
          } else {
              return 1 + std::max(getHeight(root->left),getHeight(root->right));
          }
        }
