package Java;
import java.util.Scanner;
public class J1003 {
    public static void main (String[] args) throws Exception{
        Scanner input = new Scanner(System.in);
        int A = input.nextInt();
        int B = input.nextInt();
        int SOMA = A + B;

        input.close();

        System.out.println("SOMA = " + SOMA);
    }
}
