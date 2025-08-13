import java.util.LinkedList;
import java.util.Queue;

public class tree {
    static int minValue ;
    static int maxvalue;
    static int id = -1 ;

    static class Node {
        int data ; 
        Node left ;
        Node right ;
        Node parent ;

        Node(int value){
            data = value ;
            left = null;
            right = null;
            parent = null;
        }
    }

    public static Node insert(Node root , int value) {
        if(root == null){
            return new Node(value);
        }
        if(value < root.data){
            Node leftChild = insert(root.left, value);
            root.left = leftChild;
            leftChild.parent = root ;
        }
        else {
            Node rightChild = insert(root.right, value);
            root.right = rightChild;
            rightChild.parent = root;
        }
        return root ;
    }
    public static void levelOrder(Node root){
        if(root == null){
            return ;
        }
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            Node current = q.poll();
             System.out.print(current.data + " ");
             if(current.left != null) q.add(current.left);
             if(current.right != null) q.add(current.right);
        }
    }
}
