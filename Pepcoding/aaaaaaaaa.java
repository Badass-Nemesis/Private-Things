import java.util.*;

public class aaaaaaaaa {
    public static void main(String[] args) {
        int n = 5;
        int f = factorial(n);
        System.out.println(f);
    }

    public static int factorial(int n) {
        if(n==0) return 1;
        return n*factorial(n-1);
    }
}