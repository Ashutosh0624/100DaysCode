class node:
    def __init__(self, data, next = None):
        self.data = data 
        self.next = next

class linkedlist:
    def __init__(self):
        self.head = None 
    
    def printList(self):
        curr = self.head 
        while curr:
            print(curr.data, end=" ")
            curr = curr.next 
        print() 
    
    def set_head(self, val):
        newnode = node(val)
        if self.head is None:
            self.head = newnode
            return 
        else:
            newnode.next = self.head 
            self.head = newnode
    
    def set_tail(self, val):
        if self.head is None:
            self.set_head(val)
            return
        newnode = node(val)
        curr = self.head 
        while curr.next:
            curr = curr.next 
        curr.next = newnode


    
l1 = linkedlist()
l1.set_head(34)
l1.set_tail(55)
l1.set_head(44)
l1.printList()