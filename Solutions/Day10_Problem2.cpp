#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeDuplicates(ListNode* head) {
    ListNode* cur = head;
    while (cur && cur->next) {
        if (cur->val == cur->next->val) {
            ListNode* dup = cur->next;
            cur->next = dup->next;
            delete dup;
        } else cur = cur->next;
    }
    return head;
}

void print(ListNode* head) {
    while (head) {
        cout << head->val << (head->next ? " -> " : "\n");
        head = head->next;
    }
}

int main() {
    int x;
    ListNode *head = nullptr, *tail = nullptr;

    cout << "Enter sorted values (end with Ctrl+D):\n";
    while (cin >> x) {
        ListNode* node = new ListNode(x);
        if (!head) head = tail = node;
        else tail = tail->next = node;
    }

    cout << "Original List:\n";
    print(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates:\n";
    print(head);

    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
