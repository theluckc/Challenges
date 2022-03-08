package Java;
import java.util.Scanner;
public class J1010 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        int idPeca1 = input.nextInt();
        int qtdPeca1 = input.nextInt();
        float precoPeca1 = input.nextFloat();

        int idPeca2 = input.nextInt();
        int qtdPeca2 = input.nextInt();
        float precoPeca2 = input.nextFloat();

        float total = (qtdPeca1 * precoPeca1) + (qtdPeca2 * precoPeca2);

        input.close();

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}