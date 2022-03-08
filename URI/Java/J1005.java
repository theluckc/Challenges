package Java;
import java.util.Scanner;
public class J1005 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);
        double A = input.nextDouble();
        double B = input.nextDouble();
        double media;  

        A = A * 3.5;
        B = B * 7.5;
        media = (A + B) / 11;

        input.close();

        System.out.printf("MEDIA = %.5f\n", media);
    }
}
