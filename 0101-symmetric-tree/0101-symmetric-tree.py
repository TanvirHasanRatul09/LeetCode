class Solution(object):
    def isM(self,l,r):
        if l is None and r is None:
            return True
        if l is None or r is None:
            return False
        if l.val==r.val:
            return self.isM(l.left,r.right) and self.isM(l.right,r.left)
        else:
            return False
    def isSymmetric(self, root):
        if root is None:
            return True
        return self.isM(root.left,root.right)