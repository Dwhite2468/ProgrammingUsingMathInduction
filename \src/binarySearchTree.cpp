//Proof by Mathematical Induction for Binary Search Trees
int
BinarySearchTree::find(int toFind)
{
  int data = this->data;
  int toReturn = -1;
  if(data == toFind)
  {
    toReturn = data;
  }
  if(toFind < data)
  {
    toReturn = this->left::find(toFind);
  }
  if(toFind > data)
  {
    toReturn = this->right::find(toFind);
  }
  return toReturn;
}
