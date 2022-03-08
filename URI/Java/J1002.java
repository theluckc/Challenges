package Java;
import java.util.Scanner;
import java.text.DecimalFormat;
public class J1002 {
    public static void main (String[] args) throws Exception{
        Scanner input = new Scanner(System.in);
        double n = 3.14159;
        double raio = input.nextDouble();
        double area = n * (raio * raio);
        DecimalFormat d = new DecimalFormat("0.0000");
        input.close();

        System.out.println("A=" + d.format(area));
    }
}
