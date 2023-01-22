import java.util.*;

class Triangle_0_1 {
    public static void main(String[] args) {

        System.out.println("Hello, World!");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {

                    System.out.print("1 ");
                } else
                    System.out.print("0 ");
            }

            System.out.println();

        }
    }
}
