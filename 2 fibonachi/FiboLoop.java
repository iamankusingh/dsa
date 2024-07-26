public class FiboLoop {
    public static void main(String[] args) {
        int first = 0;
        int second = 1;

        System.out.println(first);
        System.out.println(second);

        for (int i = 0; i<= 18; i++) {
            int cur = first + second;
            System.out.println(cur);
            second = first;
            first = cur;
        }
    }
}