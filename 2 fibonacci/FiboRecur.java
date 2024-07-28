public class FiboRecur {
    static int counter = 2;

    public static void fibo(int first, int second) {
        if (counter <= 15) {
            int cur = first + second;
            System.out.println(cur);
            second = first;
            first = cur;
            counter += 1;
            fibo(first, second);
        } else {
            return;
        }
    }

    public static void main(String[] args) {
        System.out.println(0);
        System.out.println(1);

        fibo(1,0);
    }
}