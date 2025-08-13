class CircularQueue{
    int size ;
    int rear ;
    int front ;
    int arr[];

    CircularQueue(int s){
        size = s;
        arr = new int[size];
        front = -1 ;
        rear = -1 ;
    }

    boolean isFull(){
        return (front == (rear +1)%size);
    }
    boolean isEmpty(){
        return (front == -1);
    }

    void enqueue (int value){
        if(isFull()){
            System.out.println("array is full");
            return ;
        }
        if(isEmpty()){
            front = 0;
        }
        rear = (rear + 1 ) % size ;
        arr[rear] = value ;
        System.out.println("inserted"+ value);
    }

    void dequeue(){
        if (isEmpty()) {
           System.out.println(" queue is empty");
            return;
        }
        int removed = arr[front];
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front+1)% size;
        }
        System.out.println("removed" + removed);
    }
    void display(){
        if(isEmpty()){
            System.out.println("queue is empty");
            return;
        }
        int i = front ;
        while(true){
            System.out.println(arr[i]);
            if(i == rear) break ;
            i = (i+1 ) % size;
        }
        System.out.println();
    }
}



public class circularQueue {
    public static void main (String[] args){
        CircularQueue cq = new CircularQueue(5);
        cq.enqueue(15);
        cq.enqueue(20);
        cq.enqueue(30);
        cq.enqueue(40);
        cq.enqueue(50);

        cq.display();

        cq.dequeue();
        cq.dequeue();

        cq.display();

        cq.enqueue(60);
        cq.enqueue(70);


        cq.display();


        System.out.println("Is Full: " + cq.isFull());
        System.out.println("Is Empty: " + cq.isEmpty());
    }
}
