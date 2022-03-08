package Java;
import java.util.Scanner;
public class J1009 {
    public static void main (String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        String nome = input.nextLine();
        double salarioFixo = input.nextDouble();
        double montante = input.nextDouble();

        double salarioTotal = salarioFixo + (montante * 0.15);

        input.close();

        System.out.printf("TOTAL = R$ %.2f\n", salarioTotal);
    }
}
