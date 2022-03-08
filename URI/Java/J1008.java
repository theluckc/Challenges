package Java;
import java.util.Scanner;
public class J1008 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        int id = input.nextInt();
        int horas = input.nextInt();
        Double pagamento = input.nextDouble();

        Double salario = horas * pagamento;

        input.close();

        System.out.println("NUMBER = " + id);
        System.out.printf("SALARY = U$ %.2f\n", salario);
    }
}