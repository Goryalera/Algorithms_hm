#include <iostream>
#include <vector>
#include <algorithm>

//Пример кода бинарной кучи 
int main() {
    std::vector<int> heap = {10, 20, 15};
    std::make_heap(heap.begin(), heap.end());  // Создание кучи

    heap.push_back(30);
    std::push_heap(heap.begin(), heap.end());  // Вставка элемента

    std::pop_heap(heap.begin(), heap.end());   // Удаление корня (максимума)
    heap.pop_back();

    for(int i : heap) std::cout << i << " ";
    return 0;
}
//Hash таблицы 
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> hash_map;
    hash_map["one"] = 1;
    hash_map["two"] = 2;

    std::cout << hash_map["one"];
    return 0;
}
//Биномиальная куча (Binomial Heap)
#include <iostream>
using namespace std;

// Узел биномиального дерева
struct Node {
    int key;
    int degree;
    Node* parent;
    Node* child;
    Node* sibling;

    Node(int k) : key(k), degree(0), parent(nullptr), child(nullptr), sibling(nullptr) {}
};

// Слияние двух биномиальных деревьев одинаковой степени
Node* binomialLink(Node* y, Node* z) {
    y->parent = z;
    y->sibling = z->child;
    z->child = y;
    z->degree++;
    return z;
}

// Объединение двух списков корней биномиальных куч
Node* binomialHeapMerge(Node* h1, Node* h2) {
    if (!h1) return h2;
    if (!h2) return h1;

    Node* head = nullptr;
    Node* tail = nullptr;
    Node* a = h1;
    Node* b = h2;

    if (a->degree <= b->degree) {
        head = a;
        a = a->sibling;
    } else {
        head = b;
        b = b->sibling;
    }
    tail = head;

    while (a && b) {
        if (a->degree <= b->degree) {
            tail->sibling = a;
            a = a->sibling;
        } else {
            tail->sibling = b;
            b = b->sibling;
        }
        tail = tail->sibling;
    }
    tail->sibling = a ? a : b;
    return head;
}

// Функция вставки нового элемента в биномиальную кучу
Node* binomialHeapInsert(Node* h, int key) {
    Node* newNode = new Node(key);
    return binomialHeapUnion(h, newNode);
}

// Объединение двух биномиальных куч
Node* binomialHeapUnion(Node* h1, Node* h2) {
    Node* newHeap = binomialHeapMerge(h1, h2);
    if (!newHeap) return nullptr;

    Node* prev = nullptr;
    Node* curr = newHeap;
    Node* next = curr->sibling;

    while (next != nullptr) {
        if ( (curr->degree != next->degree) || 
             (next->sibling != nullptr && next->sibling->degree == curr->degree)) {
            prev = curr;
            curr = next;
        } else {
            if (curr->key <= next->key) {
                curr->sibling = next->sibling;
                binomialLink(next, curr);
            } else {
                if (prev == nullptr)
                    newHeap = next;
                else
                    prev->sibling = next;
                binomialLink(curr, next);
                curr = next;
            }
        }
        next = curr->sibling;
    }
    return newHeap;
}

// Пример использования
int main() {
    Node* heap = nullptr;
    heap = binomialHeapInsert(heap, 10);
    heap = binomialHeapInsert(heap, 20);
    heap = binomialHeapInsert(heap, 15);

    // Далее можно реализовать функции извлечения минимума, удаления и т.д.
    cout << "Биномиальная куча построена с элементами 10, 20, 15." << endl;

    return 0;
}

//Двоичная куча

#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> heap = {10, 20, 15};
    std::make_heap(heap.begin(), heap.end());
    heap.push_back(30);
    std::push_heap(heap.begin(), heap.end());
    std::pop_heap(heap.begin(), heap.end());
    heap.pop_back();
    for (int i : heap) std::cout << i << " ";
}
