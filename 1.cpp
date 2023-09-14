bool Linkedlist::swap(int posi, int pos2) {
if(pos1 == pos2){
return true;
1/找到两个节点
int ent = 0;
Node*
tmp = head;
Node*
pre = nullptr;
Node* node1 = nu11ptr;
Node* node2 = nu11ptr;
Node* pre_node1 = nullptr;
Node* pre_node2 = nulllptr;
while(tmp -› link != nullptr) f
if (pos1 == cnt)(
pre_nodel = pre;
nodel = tmp;
if(pos2 == cnt){
pre_node2 = pre;
node2 = tmp;
pre = tmp;
tmp = tmp -› link;
cnttt；
｝
if(node1 == nullptr |l node2 == nullptr)1
return false;
上
/对调
if(pre_node1 != nullptr)f
pre_node1 -› link = node2;
node2 -› link = node1 -› link;
if(pre_node2 != nullptr){
pre_node2 -> link = node1;
node1 > link = node2 -> link;
return true;