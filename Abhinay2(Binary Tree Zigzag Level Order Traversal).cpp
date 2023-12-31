class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
    	if(root==NULL){
    	    return result;
    	}
    	
    	queue<TreeNode*>q;
    	q.push(root);
    	bool ltor=true;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>ans(size);
    	    for(int i=0;i<size;i++){
    	        
    	        TreeNode* temp=q.front();
    	        q.pop();
    	        int index=ltor?i:size-i-1;
    	        ans[index]=temp->val;
    	        if(temp->left){
    	            q.push(temp->left);
    	        }
    	        if(temp->right){
    	            q.push(temp->right);
    	        }
    	        
    	    }
    	    ltor=!ltor;
    	    
    	    result.push_back(ans);
    	    
    	    
    	}
    	return result;
    }
};
