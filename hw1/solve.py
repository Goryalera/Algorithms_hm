#Двоичная куча (Binary Heap)
import heapq

heap = [20, 15, 10]
heapq.heapify(heap)        # Создать min-кучу
heapq.heappush(heap, 5)    # Вставить элемент
min_elem = heapq.heappop(heap)  # Удалить минимум
print(min_elem, heap)


#Биномиальная куча (Binomial Heap)
class BinomialNode:
    def __init__(self, key):
        self.key = key
        self.children = []
        self.degree = 0

#Фибоначчиева куча (Fibonacci Heap)
class FibNode:
    def __init__(self, key):
        self.key = key
        self.children = []
        self.degree = 0
        self.parent = None
        self.marked = False


# Хеш-таблицы в Python

hash_map = {"apple": 1, "banana": 2}
hash_map["orange"] = 3  # вставка
print(hash_map["banana"])  # поиск
del hash_map["apple"]    # удаление
