import java.util.Scanner;

public class strongnum {
     public static void main(String[] args){
          Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
            int reminder;
            int temp = n;
            int sum = 0;

          while (n!=0){
              reminder = n%10;
              n/=10;
              int factorial = 1;

              for (int i=2;i<=reminder;i++){
                  factorial = factorial * i;

              }
                 System.out.print("("+factorial+")"+","+" ");
                 sum+=factorial;
          }
         System.out.println(sum==temp ?"Yes":"No");







     }

}
