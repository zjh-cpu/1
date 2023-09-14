bool LinkedList:: find
and
_delete(int target) {
Node* tmp = head;
Node* pre = nullptr;
while (tmp != nullptr) {
if (tmp -> data == target){
pre -› link = tmp -> link; delete tmp; return true;
pre = tmp;
tmp = tmp -› link;
｝
return false;
}