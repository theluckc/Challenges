package Java;
import java.util.Scanner;

public class J1013 {
    public static void main(String[] args)throws Exception{
        Scanner input = new Scanner(System.in);

        int A = input.nextInt();
        int B = input.nextInt();
        int C = input.nextInt();

        input.close();

        int maiorAB = (A + B + Math.abs(A - B)) / 2;
        int maiorBC = (maiorAB + C+ Math.abs(maiorAB - C)) / 2;

        System.out.println(maiorBC + " eh o maior");
    }
}