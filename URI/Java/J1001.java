package Java;
import java.util.Scanner;
public class J1001 {
    public static void main (String[] args) throws Exception{
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int x = a + b;
        input.close();

        System.out.println("X = " + x);
    }
}
