class Solution:
    def distMoney(self, money: int, children: int) -> int:
      
        if money < children:
            return -1
        
        
        money -= children
        
      
        d, m = divmod(money, 7)
        
        if d >= children:
         
            if d == children and m == 0:
                return children
            else:
               
                return children - 1
        else:
        
            if m == 3 and d == children - 1:
                return d - 1
            else:
                return d
