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
// bst insertion without array
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
    // bt insertion with array

    public static Node insertion(int[] arr) {
        if (arr.length == 0) return null;
        Node root = new Node(arr[0]);
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        int i = 1;
        while (!q.isEmpty() && i < arr.length) {
            Node current = q.poll();
            if (i < arr.length) {
                current.left = new Node(arr[i++]);
                q.add(current.left);
            }
            if (i < arr.length) {
                current.right = new Node(arr[i++]);
                q.add(current.right);
            }
        }
        return root;
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

    public static void main(String[] args) {
        // Test BST insertion
        Node root = null;
        root = insert(root, 50);
        insert(root, 30);
        insert(root, 70);
        insert(root, 20);
        insert(root, 40);
        insert(root, 60);
        insert(root, 80);

        System.out.println("Level Order Traversal of BST:");
        levelOrder(root);
        System.out.println();

        // Test BT insertion with array
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        Node btRoot = insertion(arr);

        System.out.println("Level Order Traversal of BT from array:");
        levelOrder(btRoot);
        System.out.println();
    }
}
