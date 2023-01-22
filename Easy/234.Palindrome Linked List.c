
bool isPalindrome(struct ListNode* head){
    int array_1[100000],i=0;
    int array_2[100000];
    struct ListNode* end=head;
    while(end->next!=NULL){
    array_1[i]=end->val;
    i++;
    end=end->next;
    }
    array_1[i]=end->val;
    int n=i;
    for(int j=0;j<=n;j++){
        array_2[j]=array_1[i];
        i--;
    }
    for(int k=0;k<=n;k++){
        if(array_1[k]!=array_2[k])
        return false;
    }
    return true;


}
