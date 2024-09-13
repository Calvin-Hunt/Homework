import java.util.Random;
public class RandomArray {
    private Random random ;
   public RandomArray(){
       this.random =new Random();
   }

public int[] ArrayGenerator(int n){
      int array[] = new int[n];
      for(int i=0;i<n;i++){
          array[i]=random.nextInt();
      }
      return array;
}
public static void PrintArray(int[] array){
       for (int value : array){
           System.out.println(value + "");
       }
       System.out.println();
}
    public static void main(String[] args) {
RandomArray randomarray = new RandomArray();
System.out.println("array1:");
int[] array1 = randomarray.ArrayGenerator(5);
PrintArray(array1);
        System.out.println("array2:");
        int[] array2 = randomarray.ArrayGenerator(10);
        PrintArray(array2);
        System.out.println("array3:");
        int[] array3 = randomarray.ArrayGenerator(15);
        PrintArray(array3);
    }
}