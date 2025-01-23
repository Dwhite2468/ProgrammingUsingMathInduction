//Proof by Mathematical Induction for Binary Search Trees
int
BinarySearchTree::find(int toFind)
{
  int data = this->data;
  int toReturn = -1;
  /**
   * Base Case:  We have already reached the value that we are searching for,
   * so just return the value.
   */
  if(data == toFind)
  {
    toReturn = data;
  }
  /**
   * Inductive Assumption: The data in the left-hand side of the tree
   * can be arranged into a binary search tree with O(log(n)) retrieval.
   */
  if(toFind < data)
  {
    /**
     * Inductive Step: A value larger than every one in the left-hand side
     * is now placed at the head of the tree.   The resulting new tree has
     * of N+1 and is also a binary search tree.  QED
     */
    toReturn = this->left::find(toFind);
  }
  if(toFind > data)
  {
    toReturn = this->right::find(toFind);
  }
  return toReturn;
}
