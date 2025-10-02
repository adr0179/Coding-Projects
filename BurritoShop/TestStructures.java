public class TestStructures {
    public static void main(String[] args) {
        Stack stack = new Stack();
        Queue queue = new Queue();

        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        int stackSize = stack.getSize();
        for (int i = 0; i < stackSize; i++) {
            System.out.println(stack.pop());
        }

        stack.push(6);
        stack.push(7);
        stack.push(8);

        stackSize = stack.getSize();

        for (int i = 0; i < stackSize; i++) {
            queue.enqueue(stack.pop());
        }

        int qSize = queue.getSize();
        for (int i = 0; i < qSize; i++) {
            queue.dequeue();
        }

        System.out.println(queue.dequeue());
        System.out.println(stack.pop());
    }
}