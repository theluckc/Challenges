package Java;
import java.util.Scanner;
public class J1007 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        int A = input.nextInt();
        int B = input.nextInt();
        int C = input.nextInt();
        int D = input.nextInt();

        int DIFERENCA = (A * B - C * D);

        input.close();

        System.out.println("DIFERENCA = " + DIFERENCA);
    }
}
