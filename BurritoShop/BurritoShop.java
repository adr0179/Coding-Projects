public class BurritoShop {
    Queue orders = new Queue();
    Queue transactions = new Queue();
    Stack dishes = new Stack();

    public void takeOrder(Burrito b){
        orders.enqueue(b);
        dishes.push("Plate");
    }

    public void nextOrder(){
        transactions.enqueue((Burrito) orders.dequeue());
        dishes.push("Spoon");

        if(orders.isEmpty()){
            System.out.println("No orders to be made. Time to take more orders!");
        }
    }

    public void ringOut(){
        if(transactions.isEmpty()){
            System.out.println("No transactiobs to be ringed. Time to take more orders!");
        } else {
            Burrito remove = (Burrito) transactions.dequeue();
            System.out.println("Cost of your burrito: $" + remove.getCost());
        }
    }

    public void washSingleDish(){
        System.out.println("Washing one dish. Dish that was washed: " + dishes.pop());
    }

    public void washAllDishes(){
        int dishSize = dishes.getSize();
        for(int i = 0; i < dishSize; i++){
            System.out.println("Washing all dishes. Dish that was washed: " + dishes.pop());
        }
    }

    public boolean dishesInSink(){ return !dishes.isEmpty();}
    public int orderCount(){ return orders.getSize(); }
    public int transactionCount(){ return transactions.getSize(); }

}