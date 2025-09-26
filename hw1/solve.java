//код бинарной кучи (макс-кучи) в C++:

import java.util.PriorityQueue;
import java.util.Collections;

public class MaxHeapExample {
    public static void main(String[] args) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        maxHeap.add(10);
        maxHeap.add(20);
        maxHeap.add(15);

        maxHeap.poll(); // Удаление максимума

        for(int i : maxHeap)
            System.out.print(i + " ");
    }
}

// Двоичная куча (Binary Heap)

import java.util.PriorityQueue;
import java.util.Collections;

public class BinaryHeap {
    public static void main(String[] args) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        maxHeap.add(10);
        maxHeap.add(20);
        maxHeap.add(15);

        maxHeap.poll(); // Удаление максимума

        for (int i : maxHeap)
            System.out.print(i + " ");
    }
}
// Биномиальная куча (Binomial Heap)

class BinomialNode:
    def __init__(self, key):
        self.key = key
        self.children = []
        self.degree = 0

class BinomialHeap:
    def __init__(self):
        self.trees = []

    def merge_trees(self, t1, t2):
        if t1.key > t2.key:
            t1, t2 = t2, t1
        t1.children.append(t2)
        t1.degree += 1
        return t1

    def insert(self, key):
        new_heap = BinomialHeap()
        new_heap.trees.append(BinomialNode(key))
        self.trees = self.union(new_heap)

    def union(self, other):
        # упрощенная реализация объединения куч по степеням
        pass  # Полная реализация очень объемна.

# пример вставки
bh = BinomialHeap()
bh.insert(10)
bh.insert(20)
    
// Фибоначчиева куча (Fibonacci Heap)
class Node {
    int key;
    int degree;
    Node parent;
    Node child;
    Node left;
    Node right;
    boolean mark;

    public Node(int key) {
        this.key = key;
        this.degree = 0;
        this.parent = null;
        this.child = null;
        this.left = this;
        this.right = this;
        this.mark = false;
    }
}

public class FibonacciHeap {
    private Node min;
    private int n;

    public FibonacciHeap() {
        min = null;
        n = 0;
    }

    // Вставка нового узла
    public void insert(int key) {
        Node node = new Node(key);
        if (min == null) {
            min = node;
        } else {
            // Вставляем в корневой список
            node.left = min;
            node.right = min.right;
            min.right.left = node;
            min.right = node;
            if (key < min.key) {
                min = node;
            }
        }
        n++;
    }

    public Node getMin() {
        return min;
    }

    public int size() {
        return n;
    }

    // Здесь должны быть методы объединения, удаления минимума, уменьшения ключа и т.д.
    
    public static void main(String[] args) {
        FibonacciHeap heap = new FibonacciHeap();
        heap.insert(10);
        heap.insert(4);
        heap.insert(15);
        heap.insert(7);
        System.out.println("Минимальное значение кучи: " + heap.getMin().key);
        System.out.println("Размер кучи: " + heap.size());
    }
}



    // Двоичная куча
    import java.util.PriorityQueue;
import java.util.Collections;
public class BinaryHeap {
    public static void main(String[] args) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        maxHeap.add(10); maxHeap.add(20); maxHeap.add(15);
        maxHeap.poll();
        for (int i : maxHeap) System.out.print(i + " ");
    }
}


//Hash таблицы 
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("one", 1);
        map.put("two", 2);

        System.out.println(map.get("one"));
    }
}
