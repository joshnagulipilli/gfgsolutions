//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


class Solution {
    
    
    Node* Merge(Node* head1 , Node* head2){
        Node* t1 = head1;
        Node* t2 = head2;
        Node* d1 = new Node(-1);
        Node* temp = d1;
        while(t1!=NULL && t2!=NULL){
            if(t1->data < t2->data){
                temp->next = t1;
                temp = t1;
                t1=t1->next;
            }
            else{
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }
        if(t1) temp->next = t1;
        if(t2) temp ->next = t2;
        return d1->next;
    }
     
     Node* findMiddle(Node* head){
         Node* slow=head ;
         Node* fast= head;
         while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
         }
         return slow;
     }
    
    
    
  public:
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL){
            return  head;
        }
        
        Node* middle = findMiddle(head);
        Node* left = head;
        Node* right = middle->next;
        middle->next=NULL;
        
        left = mergeSort(left);
        right = mergeSort(right);
        return Merge(left , right);
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }
        Node *head = nullptr;
        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        Solution obj;
        Node *ans = obj.mergeSort(head);
        printList(ans);
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends