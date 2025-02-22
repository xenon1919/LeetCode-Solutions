class FindElements:
    def __init__(self, root: Optional[TreeNode]):
        self._root = root
        
    def find(self, target: int) -> bool:
        path = 1
        while target:
            path = (path << 1) | (target & 1)
            if target & 1:
                target = (target - 1) >> 1
            else:
                target = (target - 2) >> 1

        node = self._root
        while path > 1 and node:
            node = node.left if path & 1 else node.right
            path >>= 1

        return node is not None