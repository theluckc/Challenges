package Java;
import java.util.Scanner;
public class j1006 {
    public static void main (String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        Double A = input.nextDouble();
        Double B = input.nextDouble();
        Double C = input.nextDouble();

        Double media = (A * 0.20) + (B * 0.30) + (C * 0.50);

        input.close();

        System.out.printf("MEDIA = %.1f\n", media);
    }
}
