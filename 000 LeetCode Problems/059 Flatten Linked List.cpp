// Node* merge(Node* a,Node* b){
//         if(a==NULL) return b;
//         if(b==NULL) return a;

//         Node* ans=NULL;
//         if(a->data<=b->data){
//             ans=a;
//             a->bottom=merge(a->bottom,b);
//         }
//         else
//         {
//              ans=b;
//             b->bottom=merge(a,b->bottom);
//         }
//         return ans;
//     }
// Node *flatten(Node *head)
// {
//     if(!head)
//             return NULL;
//             Node* mergeLL=merge(head,flatten(head->next));
//             return mergeLL;
//    // Your code here
// }