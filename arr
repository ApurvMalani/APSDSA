import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
public class ar {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
       ArrayList<Integer> numbers = new ArrayList<>();

          for (int i =0;i<n;i++){
              numbers.add(sc.nextInt());
          }

          int remove_value = sc.nextInt();
          System.out.println("value =  "+remove_value);

          for (int i =0;i<numbers.size();i++){
              if (numbers.get(i)==remove_value){
                  numbers.remove(i);
                  i--;
              }
          }
         System.out.print(numbers.toArray().length+", ");
        System.out.println("nums ="+numbers);

        }

    }

