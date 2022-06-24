def insertion_sort_doubly_linked(self):
    current_node = self.head.next
    while current_node != None:
        next_node = current_node.next
        search_node = current_node.prev
         
        while ((search_node != None) and 
               (search_node.data > current_node.data)):
            search_node = search_node.prev
      
        # Remove and re-insert curNode
        self.remove(current_node)
            
        if search_node == None:
            current_node.prev = None
            self.prepend(current_node)      
        else:
            self.insert_after(search_node, current_node)

        # Advance to next node
        current_node = next_node


from LinkedList import LinkedList
from Node import Node

num_list = LinkedList() 
node_a = Node(72)
node_b = Node(91)
node_c = Node(53)
node_d = Node(12)

num_list.append(node_a)
num_list.append(node_b)
num_list.append(node_c)
num_list.append(node_d)

# Output list
print('List after adding nodes:', end=' ')
node = num_list.head
while node != None:
    print(node.data, end=' ')
    node = node.next
print()

num_list.insertion_sort_doubly_linked()

# Output list
print('List after insertion sort:', end=' ')
node = num_list.head
while node != None:
    print(node.data, end=' ')
    node = node.next
print()