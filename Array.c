using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        string[] names = {"Naseem", "Choudhar", "Dhakiya"};
        for (int i = 0; i < names.Length; i++)
        {
            Console.WriteLine(names[i]);
        }
        
        int[] count = {10,20,30,40,50};
        for(int i=0;i<count.Length;i++){
            Console.WriteLine(count[i]);
        }
    }
}
