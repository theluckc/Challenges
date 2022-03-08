package Java;
import java.util.Scanner;
public class J1011 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);
        double raio = input.nextInt();
    
        double pi = 3.14159;
        double volume = (4/3.0) * pi * (raio * raio * raio);

        input.close();

        System.out.printf("VOLUME = %.3f\n", volume);
    }

}