import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // создаём список, используемый как стек
        ArrayList<Character> stack = new ArrayList<>();

        stack.add('a');  // добавляем 'a' в стек
        stack.add('b');  // добавляем 'b' в стек
        stack.add('c');  // добавляем 'c' в стек

        // выводим стек
        System.out.println(stack);
    }
}
